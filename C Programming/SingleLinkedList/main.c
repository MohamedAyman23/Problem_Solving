#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
Node_t *Nodepointer = NULL;
void *Datapointer = NULL;
NodeStatus_t status;
uint32 data1 = 11;
uint32 data2 = 22;
uint32 data3 = 33;
uint32 data4 = 44;
uint32 data5 = 55;
int main()
{   Datapointer = &data1;
    NodeInsertion(&Nodepointer,&status, Datapointer);
    printf("Node status is :%i\n", status);
    NodeInsertion(&Nodepointer,&status, Datapointer);
    printf("Node status is :%i\n", status);
    NodeInsertion(&Nodepointer,&status, Datapointer);
    printf("Node status is :%i\n", status);
    NodeInsertion(&Nodepointer,&status, Datapointer);
    printf("Node status is :%i\n", status);
    NodeDeletion(&Nodepointer);

    return 0;
}
