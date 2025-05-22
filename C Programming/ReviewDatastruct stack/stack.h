#ifndef _STACK_H_
#define _STACK_H_
#define NULL 0LL
typedef unsigned int uint32;
typedef unsigned char uint8;
#define stack_max_size 5


typedef struct
{

    uint32 data[stack_max_size];
    uint32 stack_pointer;

} stack_t;
typedef enum
{

    stack_empty = 0,
    stack_full,
    stack_Not_full


} stack_status;
typedef enum
{
    Ret_NOK,
    Ret_OK

} return_staus;
return_staus stack_init(stack_t *mystack);
return_staus stack_push(stack_t *mystack, uint32 data);
return_staus stack_pop(stack_t *mystack, uint32 *data);
return_staus stack_Full(stack_t *mystack);
return_staus stack_Empty(stack_t *mystack);
return_staus stack_display(stack_t *mystack);



#endif // _STACK_H_
