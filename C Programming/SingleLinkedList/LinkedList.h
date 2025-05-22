#ifndef _LINKeDLIST_H
#define _LINKeDLIST_H
#include "Std_Types.h"
#include <stdio.h>

typedef struct Node
{
    void *NodeData;
    struct Node *NodeLinke;
}Node_t;
typedef enum
{
    NODE_NOK,
    NODE_OK,
    NODE_EMPTY,
    NODE_NULL_POINTER
}NodeStatus_t;
void NodeInsertion(Node_t **listHead, NodeStatus_t *ret_status, void *Dataptr);
void NodeDeletion(Node_t **listHead);
void NOdeDisplay(Node_t *listHead);
uint32 NodeLength(Node_t *ListHead);


#endif // _LINKeDLIST_H
