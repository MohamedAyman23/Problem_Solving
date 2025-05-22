#include "Stack.h"
#define NULL 0LL
static Ret_status stackfull(stack_ds_t *stack1);
static Ret_status stackempty(stack_ds_t *stack1);

Ret_status Stack_init(stack_ds_t *stack1)
{
    Stack_status_t ret_val = R_NOk;
    if(NULL == stack1)
    {

        ret_val = R_NOk;

    }
    else
    {
        stack1->Stack_pointer = -1;
        ret_val = R_OK;
    }
    return (ret_val);

}

Ret_status Stack_push(stack_ds_t *stack1, uint32 value)
{
    Stack_status_t ret_val = R_NOk;
    if((NULL == stack1) || (stackfull(stack1)))
    {

        ret_val = R_NOk;

    }
    else
    {
        (stack1->Stack_pointer)++;
        stack1->data[stack1->Stack_pointer] = value;
        ret_val = R_OK;
    }
    return ret_val;
}
Ret_status Stack_pop(stack_ds_t *stack1, uint32 *value)
{
    Stack_status_t ret_val = R_NOk;
    if((NULL == stack1) || (NULL == value) || (stackempty(stack1)))
    {

        ret_val = R_NOk;

    }
    else
    {
        *value = stack1->data[stack1->Stack_pointer];
        (stack1->Stack_pointer)--;

        ret_val = R_OK;
    }
    return ret_val;
}

Ret_status Stack_Top(stack_ds_t *stack1, uint32 *value)
{
    Stack_status_t ret_val = R_NOk;
    if((NULL == stack1) || (NULL == value))
    {

        ret_val = R_NOk;

    }
    else
    {
        *value = stack1->data[stack1->Stack_pointer];
        ret_val = R_OK;
    }
    return (ret_val);
}


Ret_status Stack_Size(stack_ds_t *stack1, uint32 *value)
{
      Stack_status_t ret_val = R_NOk;
    if((NULL == stack1) || (stackempty(stack1)))
    {

        ret_val = R_NOk;

    }
    else
    {
        *value = ((stack1->Stack_pointer) + 1);
        ret_val = R_OK;
    }
    return (ret_val);
}




static Ret_status stackfull(stack_ds_t *stack1)
{
    Stack_status_t ret_val = R_NOk;
    if((stack1->Stack_pointer) == (MAX_SIZE -1))
    {
        ret_val = STACK_FULL;
    }
    else
    {
        ret_val = STACK_NOT_FULL;
    }
    return (ret_val);
}
static Ret_status stackempty(stack_ds_t *stack1)
{
    Stack_status_t ret_val = R_NOk;
    if(stack1->Stack_pointer ==  -1)
    {
        ret_val = R_OK;
    }
    else
    {
        ret_val = R_NOk;
    }
    return (ret_val);
}

