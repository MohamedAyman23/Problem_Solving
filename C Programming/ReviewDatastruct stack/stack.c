#include "stack.h"




return_staus stack_init(stack_t *mystack)
{
    return_staus ret = Ret_NOK;
    if(NULL == mystack)
    {
        ret = Ret_NOK;
    }
    else
    {
        mystack->stack_pointer = -1;
        ret = Ret_OK;
    }
    return ret;
}

return_staus stack_Full(stack_t *mystack)
{
    return_staus ret = Ret_NOK;
    if(NULL == mystack)
    {
        ret = Ret_NOK;
    }
    else
    {
        if(mystack->stack_pointer == (stack_max_size - 1))
        {
            ret = Ret_OK;
        }
    }
    return ret;
}

return_staus stack_Empty(stack_t *mystack)
{
    return_staus ret = Ret_OK;
    if(NULL == mystack)
    {
        ret = Ret_OK;
    }
    else
    {
        if(-1 == mystack->stack_pointer)
        {
            ret = Ret_NOK;
        }
    }
    return ret;
}
return_staus stack_push(stack_t *mystack, uint32 data)
{
    return_staus ret = Ret_NOK;
    if(NULL == mystack || stack_full == stack_Full(mystack))
    {
        ret = Ret_NOK;
    }
    else
    {
        mystack->stack_pointer++;
        mystack->data[mystack->stack_pointer] = data;
        ret = Ret_OK;
    }
    return ret;
}

return_staus stack_pop(stack_t *mystack, uint32 *data)
{
    return_staus ret = Ret_NOK;
    if(NULL == mystack || stack_empty == stack_Empty(mystack))
    {
        ret = Ret_NOK;
    }
    else
    {
        *data = mystack->data[mystack->stack_pointer];
        --mystack->stack_pointer;
    }
    ret = Ret_OK;
}

return_staus stack_display(stack_t *mystack)
{
    return_staus ret = Ret_NOK;
    uint8 i = 0;
    if(NULL == mystack || stack_empty == stack_Empty)
    {
        ret = Ret_NOK;
    }
    else
    {
        for(i = mystack->stack_pointer; i < stack_max_size; i--)
        {
            printf("the value num %i is = 0x%x\n", i, mystack->data[mystack->stack_pointer]);
            mystack->stack_pointer--;
        }
        ret = Ret_OK;
    }
    return ret;
}
