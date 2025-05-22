#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
int main()
{
    printf("Hello world!\n");
    stack_t mystack;
    stack_init(&mystack);
    stack_push(&mystack, 0x11);
    stack_push(&mystack, 0x22);
    stack_push(&mystack, 0x33);
    stack_push(&mystack, 0x44);
    stack_push(&mystack, 0x55);
    stack_display(&mystack);
    return 0;
}
