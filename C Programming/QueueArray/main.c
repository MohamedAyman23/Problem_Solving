#include <stdio.h>
#include <stdlib.h>
#include "QueueArray.h"
Queue_t *Queue1 = NULL;
QueueStatus_t RetStatus;
uint32 maxsize;
uint32 num1 = 11, num2 = 22, num3 = 33, num4 = 44, num5 = 55;
uint8 num6 = 'a';
void *value = NULL;

int main()
{
    printf("Enter the numbers of elements :");
    scanf("%i", &maxsize);
    Queue1 = CreateQueue(maxsize, &RetStatus);
    printf("----> %i\n", RetStatus);
    RetStatus = EnQueue(Queue1, &num1); printf("----> %i\n", RetStatus);
    RetStatus = EnQueue(Queue1, &num2); printf("----> %i\n", RetStatus);
    RetStatus = EnQueue(Queue1, &num3); printf("----> %i\n", RetStatus);
    RetStatus = EnQueue(Queue1, &num4); printf("----> %i\n", RetStatus);
    RetStatus = EnQueue(Queue1, &num5); printf("----> %i\n", RetStatus);
    RetStatus = EnQueue(Queue1, &num6); printf("----> %i\n", RetStatus);
    value = QueueFront(Queue1, &RetStatus);printf("QueueFront----> %i\n", RetStatus);
    printf("the value is %c \n",*(uint8 *)value);
    value = QueueRear(Queue1, &RetStatus);printf("QueueRear----> %i\n", RetStatus);
    printf("the value is %i \n",*(uint32 *)value);
    value = DeQueue(Queue1, &RetStatus);printf("DeQueue----> %i\n", RetStatus);
    printf("the value is %i \n",*(uint32 *)value);
    printf("%i \n",Queue1->ElementCount);
    RetStatus = EnQueue(Queue1, &num5);printf("----> %i\n", RetStatus);
    RetStatus = EnQueue(Queue1, &num5);printf("----> %i\n", RetStatus);
    RetStatus = DestroyQueue(Queue1);printf("----> %i\n", RetStatus);
    RetStatus = EnQueue(Queue1, &num5);printf("----> %i\n", RetStatus);/* the programm will crash because the Queue1
                                                                                                                is a NULL pointer */




    return 0;
}
