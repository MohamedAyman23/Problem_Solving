#include <stdio.h>
#include <stdlib.h>
#include "Platform_Types.h"
#include "QueueArray.h"

uint32 Queue1MaxElem = 0;
Queue_t *Queue1;
void *QueueRetVal;

uint32 Number1 = 0x11, Number2 = 0x22, Number3 = 0x33, Number4 = 0x44, Number5 = 0x55;
uint32 QueueCount;

int main()
{
    QueueStatus_t ReturnQueueStatus = QUEUE_NOK;

    printf("Please enter number of elements in Queue1 : ");
    scanf("%i", &Queue1MaxElem);

    Queue1 = CreateQueue(Queue1MaxElem, &ReturnQueueStatus);
    printf("0x%X \n", Queue1);

    ReturnQueueStatus = EnqueueElement(Queue1, &Number1); printf("=> %i \n", ReturnQueueStatus);
    ReturnQueueStatus = EnqueueElement(Queue1, &Number2); printf("=> %i \n", ReturnQueueStatus);
    ReturnQueueStatus = EnqueueElement(Queue1, &Number3); printf("=> %i \n", ReturnQueueStatus);

    ReturnQueueStatus = GetQueueCount(Queue1, &QueueCount); printf("=> %i \n", ReturnQueueStatus);
    printf("Count = %i \n", QueueCount);

    QueueRetVal = QueueRear(Queue1, &ReturnQueueStatus); printf("=> %i \n", ReturnQueueStatus);
    printf("QueueRear = 0x%X \n", *((uint32 *)QueueRetVal));

    ReturnQueueStatus = EnqueueElement(Queue1, &Number4); printf("=> %i \n", ReturnQueueStatus);
    QueueRetVal = QueueRear(Queue1, &ReturnQueueStatus); printf("=> %i \n", ReturnQueueStatus);
    printf("QueueRear = 0x%X \n", *((uint32 *)QueueRetVal));

    ReturnQueueStatus = EnqueueElement(Queue1, &Number5); printf("=> %i \n", ReturnQueueStatus);
    ReturnQueueStatus = EnqueueElement(Queue1, &Number5); printf("=> %i \n", ReturnQueueStatus);

    ReturnQueueStatus = GetQueueCount(Queue1, &QueueCount); printf("=> %i \n", ReturnQueueStatus);
    printf("Count = %i \n", QueueCount);

    QueueRetVal = DequeueElement(Queue1, &ReturnQueueStatus); printf("=> %i \n", ReturnQueueStatus);
    printf("Value = 0x%X \n", *((uint32 *)QueueRetVal));

    QueueRetVal = DequeueElement(Queue1, &ReturnQueueStatus); printf("=> %i \n", ReturnQueueStatus);
    printf("Value = 0x%X \n", *((uint32 *)QueueRetVal));

    QueueRetVal = QueueFront(Queue1, &ReturnQueueStatus); printf("=> %i \n", ReturnQueueStatus);
    printf("Front = 0x%X \n", *((uint32 *)QueueRetVal));

    QueueRetVal = DequeueElement(Queue1, &ReturnQueueStatus); printf("=> %i \n", ReturnQueueStatus);
    printf("Value = 0x%X \n", *((uint32 *)QueueRetVal));

    QueueRetVal = DequeueElement(Queue1, &ReturnQueueStatus); printf("=> %i \n", ReturnQueueStatus);
    printf("Value = 0x%X \n", *((uint32 *)QueueRetVal));

    QueueRetVal = DequeueElement(Queue1, &ReturnQueueStatus); printf("=> %i \n", ReturnQueueStatus);
    printf("Value = 0x%X \n", *((uint32 *)QueueRetVal));

    QueueRetVal = DequeueElement(Queue1, &ReturnQueueStatus); printf("=> %i \n", ReturnQueueStatus);
    if(QueueRetVal){
        printf("Value = 0x%X \n", *((uint32 *)QueueRetVal));
    }

    ReturnQueueStatus = DestroyQueue(Queue1);

    return 0;
}
