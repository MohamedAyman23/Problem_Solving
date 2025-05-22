#include "QueueArray.h"
#define NULL 0LL


Queue_t *CreateQueue(uint32 maxsize, QueueStatus_t *ret_status)
{
    Queue_t *my_Queue = NULL;

    my_Queue = (Queue_t *)malloc(sizeof(Queue_t));
    if(NULL == my_Queue)
    {
        *ret_status = QUEUE_NOK;
        my_Queue = NULL;

    }
    else
    {
        my_Queue->QueuArray = (void **)calloc(maxsize, sizeof(void *));
        if(NULL == my_Queue->QueuArray)
        {
            *ret_status = QUEUE_NOK;
            my_Queue = NULL;

        }
        else
        {
            my_Queue->QueueMaxSize = maxsize;
            my_Queue->QueueFront = -1;
            my_Queue->QueueRear = -1;
            my_Queue->ElementCount = 0;
            *ret_status = QUEUE_OK;

        }
    }
    return my_Queue;

}


QueueStatus_t EnQueue(Queue_t *Queue_obj, void *item)
{
    QueueStatus_t staus = QUEUE_NOK;

    if((NULL == Queue_obj) || (NULL == item))
    {
        staus = QUEUE_NOK;
    }
    else
    {

        if((Queue_obj->ElementCount) == (Queue_obj->QueueMaxSize))
        {
            staus = QUEUE_FULL;
        }
        else
        {
            (Queue_obj->QueueRear)++;
            if(! Queue_obj->ElementCount)
            {
                Queue_obj->QueueFront = 0;

            }
            else{/* Nothing */}
            if((Queue_obj->QueueRear) == (Queue_obj->QueueMaxSize))
            {

                (Queue_obj->QueueRear) = 0;

            }
            else{/* Nothing */}
            Queue_obj->QueuArray[Queue_obj->QueueRear] = item;
            (Queue_obj->ElementCount)++;
            staus = QUEUE_OK;
        }
    }
    return staus;
}

void *DeQueue(Queue_t *Queue_obj, QueueStatus_t *ret_status)
{
    void *RetElem = NULL;
    if((NULL == Queue_obj) || (NULL == ret_status))
    {
        RetElem = NULL;
    }
    else{

        if(!(Queue_obj->ElementCount))
        {
            *ret_status = QUEUE_EMPTY;
            RetElem = NULL;
        }
        else{
            RetElem = Queue_obj->QueuArray[Queue_obj->QueueFront];
            (Queue_obj->QueueFront)++;
            if(1 == Queue_obj->ElementCount)
            {
                (Queue_obj->QueueFront) = -1;
                (Queue_obj->QueueRear) = -1;
            }
            else{/* Nothing */}
            (Queue_obj->ElementCount)--;
            *ret_status = QUEUE_OK;

        }
    }
    return (RetElem);
}

void *QueueFront(Queue_t *Queue_obj, QueueStatus_t *ret_status)
{
    void *RetElem = NULL;
    if((NULL == Queue_obj) || (NULL == ret_status))
    {
        RetElem = NULL;
    }
    else
    {
        if(!(Queue_obj->ElementCount))
        {
            *ret_status = QUEUE_EMPTY;
            RetElem = NULL;
        }
        else
        {
            RetElem = Queue_obj->QueuArray[Queue_obj->QueueFront];
            *ret_status = QUEUE_OK;
        }
    }
    return (RetElem);
}
void *QueueRear(Queue_t *Queue_obj, QueueStatus_t *ret_status)
{
    void *RetElem = NULL;
    if((NULL == Queue_obj) || (NULL == ret_status))
    {
        RetElem = NULL;
    }
    else
    {
        if(!(Queue_obj->ElementCount))
        {
            *ret_status = QUEUE_EMPTY;
            RetElem = NULL;
        }
        else
        {
            RetElem = Queue_obj->QueuArray[Queue_obj->QueueRear];
            *ret_status = QUEUE_OK;
        }
    }
    return (RetElem);
}
QueueStatus_t DestroyQueue(Queue_t *Queue_obj)
{
    QueueStatus_t status = QUEUE_NOK;
    if(NULL == Queue_obj)
    {
        status = QUEUE_NULL_POINTER;
    }
    else
    {
        free(Queue_obj->QueuArray);
        free(Queue_obj);
        Queue_obj = NULL;
        status = QUEUE_OK;
    }
    return (status);
}
