
#include "QueueArray.h"

static uint8 QueueIsFull(Queue_t *queue_obj){
    return (queue_obj->ElementCount == queue_obj->QueueMaxSize);
}

static uint8 QueueIsEmpty(Queue_t *queue_obj){
    return (0 == queue_obj->ElementCount);
}

Queue_t *CreateQueue(uint32 maxSize, QueueStatus_t *ret_status){
    Queue_t *MyQueue;
    /* Create queue object in the heap to hold the queue information */
    MyQueue = (Queue_t *)malloc(sizeof(Queue_t));
    if(NULL == MyQueue){
        *ret_status = QUEUE_NULL_POINTER;
        MyQueue = NULL;
    }
    else{
        /* Create array of <void *> to hold the addresses of the Queue elements */
        MyQueue->QueueArray = (void **)calloc(maxSize, sizeof(void *));
        if(NULL == MyQueue->QueueArray){
            *ret_status = QUEUE_NOK;
            MyQueue = NULL;
        }
        else{
            MyQueue->ElementCount = 0;
            MyQueue->QueueFront = -1;
            MyQueue->QueueRear = -1;
            MyQueue->QueueMaxSize = maxSize;
            *ret_status = QUEUE_OK;
        }
    }
    return MyQueue;
}

QueueStatus_t EnqueueElement(Queue_t *queue_obj, void *item_ptr){
    QueueStatus_t status = QUEUE_NOK;
    if((NULL == queue_obj) || (NULL == item_ptr)){
        status = QUEUE_NULL_POINTER;
    }
    else{
        /* Validate if the queue is not full */
        if(QueueIsFull(queue_obj)){
            status = QUEUE_FULL; /* Queue is full, can't enqueue new element */
        }
        else{
            /* Increment Queue Rear Index */
            (queue_obj->QueueRear)++;
            /* Queue wraps to element 0 (Circular Queue) */
            if(queue_obj->QueueRear == queue_obj->QueueMaxSize){
                queue_obj->QueueRear = 0;
            }
            else{ /*Nothing */ }
            /* Insert the input data in to the rear position */
            queue_obj->QueueArray[queue_obj->QueueRear] = item_ptr;
            /* validate if the queue was empty, (front and rear points to the first element) */
            if(queue_obj->ElementCount == 0){
                queue_obj->QueueFront = 0;
                queue_obj->ElementCount = 1;
            }
            else{
                (queue_obj->ElementCount)++; /* New element has been added to the Queue */
            }
            status = QUEUE_OK;
        }
    }
    return status;
}

void *DequeueElement(Queue_t *queue_obj, QueueStatus_t *ret_status){
    void *ReturnEelem = NULL;
    if((NULL == queue_obj) || (NULL == ret_status)){
        *ret_status = QUEUE_NULL_POINTER;
    }
    else{
        /* Check if the queue is empty */
        if(!queue_obj->ElementCount){
            *ret_status = QUEUE_EMPTY; /* Queue is empty */
            ReturnEelem = NULL;
        }
        else{ /* Queue is not empty */
            ReturnEelem = queue_obj->QueueArray[queue_obj->QueueFront];
            /* Increment Queue Front Index */
            (queue_obj->QueueFront)++;
            /* Queue front has wrapped to element 0 (Circular Queue) */
            if(queue_obj->QueueFront == queue_obj->QueueMaxSize){
                queue_obj->QueueFront = 0;
            }
            else{ /* Nothing */ }
            /* Check if the element is the last element in the Queue */
            if(1 == queue_obj->ElementCount){
                queue_obj->QueueFront = -1; /* Queue is empty */
                queue_obj->QueueRear = -1;  /* Queue is empty */
            }
            else{ /* Nothing */ }
            (queue_obj->ElementCount)--; /* Element has been deleted from the Queue */
            *ret_status = QUEUE_OK;
        }
    }
    return ReturnEelem;
}

void *QueueFront(Queue_t *queue_obj, QueueStatus_t *ret_status){
    void *ReturnEelem = NULL;
    if((NULL == queue_obj) || (NULL == ret_status)){
        *ret_status = QUEUE_NULL_POINTER;
    }
    else{
        /* Check if the queue is empty */
        if(!queue_obj->ElementCount){
            *ret_status = QUEUE_EMPTY; /* Queue is empty */
            ReturnEelem = NULL;
        }
        else{ /* Queue is not empty */
            ReturnEelem = queue_obj->QueueArray[queue_obj->QueueFront];
            *ret_status = QUEUE_OK;
        }
    }
    return ReturnEelem;
}

void *QueueRear(Queue_t *queue_obj, QueueStatus_t *ret_status){
    void *ReturnEelem = NULL;
    if((NULL == queue_obj) || (NULL == ret_status)){
        *ret_status = QUEUE_NULL_POINTER;
    }
    else{
        /* Check if the queue is empty */
        if(!queue_obj->ElementCount){
            *ret_status = QUEUE_EMPTY; /* Queue is empty */
            ReturnEelem = NULL;
        }
        else{ /* Queue is not empty */
            ReturnEelem = queue_obj->QueueArray[queue_obj->QueueRear];
            *ret_status = QUEUE_OK;
        }
    }
    return ReturnEelem;
}

QueueStatus_t GetQueueCount(Queue_t *queue_obj, uint32 *QueueCount){
    QueueStatus_t status = QUEUE_NOK;
    if((NULL == queue_obj) || (NULL == QueueCount)){
        status = QUEUE_NULL_POINTER;
    }
    else{
        /* Check if the queue is empty */
        if(!queue_obj->ElementCount){
            *QueueCount = 0;    /* Queue is empty */
        }
        else{ /* Queue is not empty */
            *QueueCount = queue_obj->ElementCount;
        }
        status = QUEUE_OK;
    }
    return status;
}

QueueStatus_t DestroyQueue(Queue_t *queue_obj){
    QueueStatus_t status = QUEUE_NOK;
    if(NULL == queue_obj){
        status = QUEUE_NULL_POINTER;
    }
    else{
        free(queue_obj->QueueArray);
        free(queue_obj);
        status = QUEUE_OK;
    }
    return status;
}

