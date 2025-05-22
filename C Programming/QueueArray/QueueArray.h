#ifndef QUEUE_ARRAY_H
#define QUEUE_ARRAY_H
#include "Platform_Types.h"


typedef struct
{
    void **QueuArray;
    uint32 ElementCount;
    uint32 QueueMaxSize;
    sint32 QueueFront;
    sint32 QueueRear;

}Queue_t;
typedef enum
{
    QUEUE_NOK,
    QUEUE_OK,
    QUEUE_FULL,
    QUEUE_EMPTY,
    QUEUE_NULL_POINTER
}QueueStatus_t;

/**
  * @breif      creating queue
  * @param      uint32 maxsize max size of the array of void pointers in heap
  * @retval     Queue_t * pointer with has the address of the object
  */

Queue_t *CreateQueue(uint32 maxsize, QueueStatus_t *ret_status);
QueueStatus_t EnQueue(Queue_t *Queue_obj, void *item);
void *DeQueue(Queue_t *Queue_obj, QueueStatus_t *ret_status);
void *QueueFront(Queue_t *Queue_obj, QueueStatus_t *ret_status);
void *QueueRear(Queue_t *Queue_obj, QueueStatus_t *ret_status);
QueueStatus_t DestroyQueue(Queue_t *Queue_obj);




#endif // QUEUE_ARRAY_H
