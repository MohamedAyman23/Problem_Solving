#ifndef _QUEUE_H
#define _QUEUE_H

#define NULL 0LL
typedef unsigned int uint32;
typedef unsigned char uint8;
typedef signed int sint32;
typedef signed char sint8;

typedef struct
{

    void **queuearray;
    uint32 queuemaxsize;
    uint32 Elementcounter;
    sint32 QueueFront;
    sint32 QueueRear;

}queue_t;

typedef enum
{

    QUEUE_NOK,
    QUEUE_OK,
    QUEUE_FULL,
    QUEUE_EMPTY,
    QUEUE_NULL_POINTER
}queue_status;



queue_t *create_queue(uint32 maxsize, queue_status *ret_status);
queue_t *Destroy_queue(queue_t *myqueue, queue_status *ret_status);
queue_status EnQueue(queue_t *myqueue, void *item);
void *DeQueue(queue_t *myqueue, queue_status *ret_status);
queue_status Q_Element_NUM(queue_t *myqueue, uint32 *q_elem_num);
void *QueueFront(queue_t *myqueue, queue_status *ret_status);
void *QueueRear(queue_t *myqueue, queue_status *ret_status);


#endif // _QUEUE_H
