#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"
queue_t *queue1 = NULL;
void *return_data = NULL;
queue_status return_status = QUEUE_NOK;

uint32 maxsize = 0;
int main()
{

    uint32 var1 = 0x11;
    uint32 var2 = 0x22;
    uint32 var3 = 0x33;
    uint32 var4 = 0x44;
    uint32 var5 = 0x55;
    uint32 var6 = 0x66;
    uint32 var7 = 0x77;
    uint8 var8 = 'a';
    uint8 var9 = 'b';
    printf("Enter the queue size \n");
    scanf("%u", &maxsize);
    queue1 = create_queue(maxsize, &return_status);
    if(queue1)
    {
        printf("the queue created !!\n");
    }
    printf("the status of creating the queue is %i\n", return_status);
    return_status = EnQueue(queue1, &var1);
    printf("the status of Enqueue is %i\n", return_status);
    return_status = EnQueue(queue1, &var2);
    printf("the status of Enqueue is %i\n", return_status);
    return_status = EnQueue(queue1, &var3);
    printf("the status of Enqueue is %i\n", return_status);
    return_status = EnQueue(queue1, &var4);
    printf("the status of Enqueue is %i\n", return_status);
    return_status = EnQueue(queue1, &var5);
    printf("the status of Enqueue is %i\n", return_status);
    return_status = EnQueue(queue1, &var6);
    printf("the status of Enqueue is %i\n", return_status);
    return_status = EnQueue(queue1, &var7);
    printf("the status of Enqueue is %i\n", return_status);
    return_status = EnQueue(queue1, &var8);
    printf("the status of Enqueue is %i\n", return_status);
    return_status = EnQueue(queue1, &var9);
    printf("the status of Enqueue is %i\n", return_status);


    return_data = QueueFront(queue1, &return_status);
    printf("the status of QueueFront is %i\n", return_status);
    printf("the value of Front is 0x%x \n", *((uint8 *)return_data));
    return_data = QueueRear(queue1, &return_status);
    printf("the status of QueueRear is %i\n", return_status);
    printf("the value of Rear is %c \n", *((uint32 *)return_data));
    return 0;
}
