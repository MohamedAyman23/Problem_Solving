#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"
stack_ds_t stack1;
uint32 ret_value = 0;

int main()
{
    uint32 stacktop = 0;
    ret_value = Stack_init(&stack1);
    printf("The return value of the function is %i\n", ret_value);
    ret_value = Stack_push(&stack1, 11);
    printf("The return value of the function is %i\n", ret_value);
    ret_value = Stack_push(&stack1, 22);
    printf("The return value of the function is %i\n", ret_value);
    ret_value = Stack_push(&stack1, 33);
    printf("The return value of the function is %i\n", ret_value);
    ret_value = Stack_push(&stack1, 44);
    printf("The return value of the function is %i\n", ret_value);
    ret_value = Stack_push(&stack1, 55);
    printf("The return value of the function is %i\n", ret_value);
    ret_value = Stack_push(&stack1, 55);
    printf("The return value of the function is %i\n", ret_value);
    ret_value = Stack_Top(&stack1, &stacktop);
    printf("The return value of the function is %i\n", ret_value);
    printf("The return value of the function is %i\n", stacktop);
    ret_value = Stack_pop(&stack1, &stacktop);
    printf("The return value of the function is %i\n", ret_value);
    printf("The return value of the function is %i\n", stacktop);
    ret_value = Stack_Top(&stack1, &stacktop);
    printf("The return value of the function is %i\n", ret_value);
    printf("The return value of the function is %i\n", stacktop);
    ret_value = Stack_pop(&stack1, &stacktop);
    printf("The return value of the function is %i\n", ret_value);
    printf("The return value of the function is %i\n", stacktop);
    ret_value = Stack_pop(&stack1, &stacktop);
    printf("The return value of the function is %i\n", ret_value);
    printf("The return value of the function is %i\n", stacktop);
    ret_value = Stack_pop(&stack1, &stacktop);
    printf("The return value of the function is %i\n", ret_value);
    printf("The return value of the function is %i\n", stacktop);
    ret_value = Stack_pop(&stack1, &stacktop);
    printf("The return value of the function is %i\n", ret_value);
    printf("The return value of the function is %i\n", stacktop);
    ret_value = Stack_pop(&stack1, &stacktop);
    printf("The return value of the function is %i\n", ret_value);
    printf("The return value of the function is %i\n", stacktop);

    return 0;
}
