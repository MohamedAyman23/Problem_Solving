#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

uint32 stackmaxszie = 0, stack_counter = 0;
stack_t *stack1 = NULL;
stack_t *stack2 = NULL;
void *Stack1_Return = NULL;

int main()
{
    stack_status ret_status = Stack_NOK;
    uint32 var1 = 0x11;
    uint32 var2 = 0x22;
    uint32 var3 = 0x33;
    uint32 var4 = 0x44;
    float var5 = 55.43;
    uint8 var6 = 'a';
    uint8 var7 = 's';
    uint8 var8 = 'd';
    uint8 var9 = 'f';
    uint8 var10 = 'g';

    printf("Enter the size of the Stack\n");
    scanf("%u", &stackmaxszie);
    stack1 = creat_stack(stackmaxszie, &ret_status);
    if(stack1)
    {
        printf("the stack is created !!\n");
    }
    ret_status = stack_push(stack1, &var1);
    printf("the status of the push is %u\n", ret_status);
    ret_status = stack_push(stack1, &var2);
    printf("the status of the push is %u\n", ret_status);
    ret_status = stack_push(stack1, &var3);
    printf("the status of the push is %u\n", ret_status);
    ret_status = stack_push(stack1, &var4);
    printf("the status of the push is %u\n", ret_status);
    ret_status = stack_push(stack1, &var5);
    printf("the status of the push is %u\n", ret_status);
    ret_status = stack_push(stack1, &var6);
    printf("the status of the push is %u\n", ret_status);
    ret_status = stack_push(stack1, &var7);
    printf("the status of the push is %u\n", ret_status);
    ret_status = stack_push(stack1, &var8);
    printf("the status of the push is %u\n", ret_status);
    ret_status = stack_push(stack1, &var9);
    printf("the status of the push is %u\n", ret_status);
    ret_status = stack_push(stack1, &var10);
    printf("the status of the push is %u\n", ret_status);
    Stack1_Return = pop_stack(stack1, &ret_status);
    printf("the status of the pop is %u\n", ret_status);
    printf("the return value is %c\n", *((uint8 *)Stack1_Return));
    Stack1_Return = pop_stack(stack1, &ret_status);
    printf("the status of the pop is %u\n", ret_status);
    printf("the return value is %c\n", *((uint8 *)Stack1_Return));
    Stack1_Return = pop_stack(stack1, &ret_status);
    printf("the status of the pop is %u\n", ret_status);
    printf("the return value is %c\n", *((uint8 *)Stack1_Return));
    Stack1_Return = pop_stack(stack1, &ret_status);
    printf("the status of the pop is %u\n", ret_status);
    printf("the return value is %c\n", *((uint8 *)Stack1_Return));
    Stack1_Return = stack_top(stack1, &ret_status);
    printf("the status of the top is %u\n", ret_status);
    printf("the return value is %c\n", *((uint8 *)Stack1_Return));
    destory_stack(stack1, &ret_status);
    printf("the status of the destroy is %u\n", ret_status);
    if(NULL == stack2)
    {
        printf("the stack is destoryed !!\n");
    }
    return 0;
}
