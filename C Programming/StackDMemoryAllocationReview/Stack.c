#include "Stack.h"

static uint8 Stack_Full(stack_t *mystack);
static uint8 Stack_Empty(stack_t *mystack);

stack_t *creat_stack(uint32 maxsize, stack_status *ret)
{
    stack_t *mystack = NULL;
    mystack = (stack_t *)malloc(sizeof(stack_t));
    if(NULL == mystack)
    {
        *ret = Stack_NOK;
    }
    else
    {
        mystack->stack_pointer = -1;
        mystack->stack_max_size = maxsize;
        mystack->stack_counter =0;
        mystack->stack_array = (void **)calloc(mystack->stack_max_size, sizeof(void *));
        if(!mystack->stack_array)
        {
            free(mystack);
            mystack = NULL;
            *ret = Stack_NOK;
        }
        else
        {
            *ret = stack_OK;
        }
    }
    return mystack;
}
stack_t *destory_stack(stack_t *mystack, stack_status *ret_status)
{
    if((NULL == mystack) || (NULL == ret_status))
    {
        *ret_status = STACK_NULL_POINTER;
    }
    else
    {
        free(mystack->stack_array);
        free(mystack);
        *ret_status = stack_OK;
    }
    return NULL;
}
stack_status stack_push(stack_t *mystack, void *item)
{
    stack_status ret_status = Stack_NOK;
    if(NULL == mystack || NULL == item)
    {
        ret_status = Stack_NOK;
    }
    else
    {
       if(Stack_Full(mystack))
       {
           ret_status = STACK_FULL;
       }
       else
       {
            mystack->stack_pointer++;
            mystack->stack_counter++;
            mystack->stack_array[mystack->stack_pointer] = item;
            ret_status = stack_OK;
       }
    }
    return ret_status;
}
void *pop_stack(stack_t *mystack, stack_status *ret_status)
{
    void *data = NULL;

    if(NULL == mystack || NULL == ret_status)
    {
        *ret_status = STACK_NULL_POINTER;
    }
    else
    {
        if(Stack_Empty(mystack))
        {
            *ret_status = STACK_EMPTY;
        }
        else
        {
            data = mystack->stack_array[mystack->stack_pointer];
            mystack->stack_counter--;
            mystack->stack_pointer--;
            *ret_status = stack_OK;
        }
    }
    return data;
}
void *stack_top(stack_t *mystack, stack_status *ret_status)
{
    void *dtop = NULL;
    if(NULL == mystack || NULL == ret_status)
    {
        *ret_status = STACK_NULL_POINTER;
    }
    else
    {
        dtop = mystack->stack_array[mystack->stack_pointer];
        *ret_status = stack_OK;
    }
    return dtop;
}
stack_status stackcounter(stack_t *mystack, uint32 *counter)
{
    stack_status ret_status = Stack_NOK;
    if(NULL == mystack || NULL == counter)
    {
        ret_status = STACK_NULL_POINTER;
    }
    else
    {
        *counter = mystack->stack_counter;
        ret_status = stack_OK;
    }
    return ret_status;
}
static uint8 Stack_Full(stack_t *mystack)
{
    return(mystack->stack_counter == mystack->stack_max_size);
}
static uint8 Stack_Empty(stack_t *mystack)
{
    return(0 == mystack->stack_counter);
}
