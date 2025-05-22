#include "Queue.h"


static uint8 Queue_Full(queue_t *myqueue);
static uint8 Queue_Empty(queue_t *myqueue);



queue_t *create_queue(uint32 maxsize, queue_status *ret_status)
{
    *ret_status = QUEUE_NULL_POINTER;
    queue_t *myqueue = NULL;
    myqueue = (queue_t *)malloc(sizeof(queue_t));
    if(NULL == myqueue)
    {
        myqueue = NULL;
        *ret_status ==QUEUE_NULL_POINTER;
    }
    else
    {

        myqueue->queuearray = (void **)calloc(maxsize, sizeof(void *));
        if(NULL == myqueue->queuearray)
        {
            myqueue->queuearray = NULL;
            *ret_status = QUEUE_NULL_POINTER;
        }
        else
        {
            myqueue->Elementcounter = 0;
            myqueue->QueueFront = -1;
            myqueue->QueueRear = -1;
            myqueue->queuemaxsize = maxsize;
            *ret_status = QUEUE_OK;
        }
    }
    return myqueue;

}
queue_t *Destroy_queue(queue_t *myqueue, queue_status *ret_status)
{
    if(NULL == myqueue)
    {
        *ret_status = QUEUE_NULL_POINTER;
    }
    else
    {
        free(myqueue->queuearray);
        free(myqueue);
        *ret_status = QUEUE_OK;
    }
    return NULL;
}
queue_status EnQueue(queue_t *myqueue, void *item)
{
    queue_status ret_status = QUEUE_NOK;
    if(NULL == myqueue || NULL == item)
    {
        ret_status = QUEUE_NULL_POINTER;
    }
    else
    {
        if(Queue_Full(myqueue))
        {
            ret_status = QUEUE_FULL;
        }
        else
        {
            myqueue->QueueRear++;
            if( myqueue->QueueRear == myqueue->queuemaxsize)
            {
                myqueue->QueueRear = 0;
            }
            else
            {
                /*Nothing*/
            }
            myqueue->queuearray[myqueue->QueueRear] = item;
            if(myqueue->Elementcounter == 0)
            {
                (myqueue->QueueFront)++;
                myqueue->Elementcounter = 1;

            }
            else
            {
                myqueue->Elementcounter++;
            }
            ret_status = QUEUE_OK;
        }
    }
    return ret_status;
}
void *DeQueue(queue_t *myqueue, queue_status *ret_status)
{
    void *data = NULL;
    if(NULL == myqueue || NULL == ret_status)
    {
        *ret_status = QUEUE_NULL_POINTER;

    }
    else
    {
        if(Queue_Empty(myqueue))
        {
            *ret_status = QUEUE_EMPTY;
        }
        else
        {
            data = myqueue->queuearray[myqueue->QueueFront];
            myqueue->QueueFront++;
            *ret_status = QUEUE_OK;
        }
    }
    return data;
}
queue_status Q_Element_NUM(queue_t *myqueue, uint32 *q_elem_num)
{

    queue_status ret_status = QUEUE_OK;
    if(NULL == myqueue || NULL == q_elem_num)
    {
        ret_status = QUEUE_NULL_POINTER;
    }
    else
    {
        *q_elem_num = myqueue->Elementcounter;
        ret_status = QUEUE_OK;
    }
    return ret_status;
}
static uint8 Queue_Full(queue_t *myqueue)
{
    return((myqueue->Elementcounter == myqueue->queuemaxsize));
}
static uint8 Queue_Empty(queue_t *myqueue)
{
    return((myqueue->Elementcounter == 0));
}
void *QueueFront(queue_t *myqueue, queue_status *ret_status)
{
    void *data = NULL;
    if(NULL == myqueue || NULL == ret_status)
    {
        *ret_status = QUEUE_NULL_POINTER;

    }
    else
    {
        if(Queue_Empty(myqueue))
        {
            data = NULL;
            *ret_status = QUEUE_NOK;
        }
        else
        {
            data = myqueue->queuearray[myqueue->QueueFront];
            *ret_status = QUEUE_OK;
        }
    }
    return data;
}
void *QueueRear(queue_t *myqueue, queue_status *ret_status)
{
    void *data = NULL;
    if(NULL == myqueue || NULL == ret_status)
    {
        *ret_status = QUEUE_NULL_POINTER;

    }
    else
    {
        data = myqueue->queuearray[myqueue->QueueRear];
        *ret_status = QUEUE_OK;
    }
    return data;
}

