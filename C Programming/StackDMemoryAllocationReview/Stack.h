#ifndef _STACK_H
#define _STACK_H
#define NULL 0LL
typedef unsigned int uint32;
typedef unsigned char uint8;
typedef struct {

    void **stack_array;
    uint32 stack_max_size;
    uint32 stack_counter;
    uint32 stack_pointer;

}stack_t;

typedef enum {

    Stack_NOK,
    stack_OK,
    STACK_FULL,
    STACK_EMPTY,
    STACK_NULL_POINTER

}stack_status;

stack_t *creat_stack(uint32 maxsize, stack_status *ret);
stack_t *destory_stack(stack_t *mystack, stack_status *ret_status);
stack_status stack_push(stack_t *mystack, void *item);
void *pop_stack(stack_t *mystack, stack_status *ret_status);
void *stack_top(stack_t *mystack, stack_status *ret_status);
stack_status stackcounter(stack_t *mystack, uint32 *counter);







#endif // _STACK_H
