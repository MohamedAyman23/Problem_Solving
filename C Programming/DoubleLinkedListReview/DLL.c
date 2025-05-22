#include "DLL.h"



void Insert_At_Beginning(struct ListNode **List, uint32 data)
{
    struct ListNode *TempNode = NULL;
    TempNode = (struct ListNode *)malloc(sizeof(struct ListNode));

    if(NULL != TempNode)
    {
        TempNode->NodeData = data;
        if(NULL == *List)
        {
            TempNode->LeftLink = NULL;
            TempNode->RightLink = NULL;
            *List = TempNode;
        }
        else
        {
            TempNode->LeftLink = NULL;
            TempNode->RightLink = *List;
            (*List)->LeftLink = TempNode;
            (*List) = TempNode;

        }
    }
    else
    {
        printf("Can't allocat new Node!!\n");
    }
}
void Insert_Node_At_End(struct ListNode *List, uint32 data)
{
    struct ListNode *TempNode = NULL;
    struct ListNode *NodeCounter = List;
    TempNode = (struct ListNode *)malloc(sizeof(struct ListNode));
    if(NULL != TempNode)
    {
        TempNode->NodeData = data;
        TempNode->RightLink = NULL;
        while(NULL != NodeCounter->RightLink)
        {
            NodeCounter = NodeCounter->RightLink;
        }
        TempNode->LeftLink = NodeCounter;
        NodeCounter->RightLink = TempNode;
    }
    else
    {
        printf("Can't allocate the new Node!!\n");
    }
}
void Insert_Node_After(struct ListNode *List, uint32 data)
{
    struct ListNode *TempNode = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *NodeCounterOne = List;
    struct ListNode *NodeCounterTwo = NULL;
    if(TempNode != NULL)
    {

    }
}
void Insert_Node_Before(struct ListNode **List, uint32 data)
{

}
struct ListNode* Delete_Node(struct ListNode **List, uint32 Nodeposition)
{

}
