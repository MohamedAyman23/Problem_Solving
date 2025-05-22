#include "Linkedlist.h"
#include <stdio.h>

static uint8 Get_Node_Length(struct Node *List);
void Insert_Node_At_Beginning(struct Node **List)
{
    struct Node *TempNode = NULL;
    TempNode =(struct Node *)malloc(sizeof(struct Node));
    if(NULL != TempNode)
    {
        printf("Enter the Node Data\n");
        scanf("%u", &TempNode->NodeData);
        if(NULL == *List)
        {
            TempNode->NodeLink = NULL;
            *List = NULL;
        }
        else
        {
            TempNode->NodeLink = *List;
            *List = TempNode;
        }
    }
    else{/**Nothing*/}
}
void Insert_Node_At_End(struct Node **List)
{
    struct Node *TempNode = NULL;
    struct Node *LastNode = NULL;
    TempNode = (struct Node *)malloc(sizeof(struct Node));
    if(NULL != TempNode)
    {
        printf("Enter the Node Data\n");
        scanf("%u", &TempNode->NodeData);
        TempNode->NodeLink = NULL;
        if(NULL == *List)
        {

            *List = TempNode;
        }
        else
        {
            LastNode = *List;
            while(LastNode->NodeLink != NULL)
            {
                LastNode = LastNode->NodeLink;
            }
            LastNode->NodeLink = TempNode;
        }
    }
    else{/**Nothing**/}
}
void Insert_Node_After(struct Node *List)
{
    struct Node *TempNode = NULL;
    struct Node *TestNode = NULL;
    uint32 NodePostion = 0;
    TempNode = (struct Node *)malloc(sizeof(struct Node));
    if(NULL != TempNode)
    {
        printf("Enter the Node Data\n");
        scanf("%u", &TempNode->NodeData);fflush(stdin);
        TestNode = List;
        printf("Enter the Postion you want \n");
        scanf("%u", &NodePostion);
        NodePostion -=1;
        while(NodePostion--)
        {
            TestNode = TestNode->NodeLink;
        }
        TempNode->NodeLink = TestNode->NodeLink;
        TestNode->NodeLink = TempNode;
    }
    else{/**Nothing*/}
}

void Delete_Node_At_Beginning(struct Node **List)
{
    struct Node *TempNode = *List;
    uint32 NodelistLenght = Get_Node_Length(*List);
    if(NodelistLenght == 0)
    {
        printf("The list is empty!!\n");
    }
    else
    {
        *List = TempNode->NodeLink;
        TempNode->NodeLink = NULL;
        free(TempNode);
        TempNode = NULL;
    }
}
void Delete_Node(struct Node *List)
{
    struct Node *NodeListCounter = List;
    struct Node *NextNode = NULL;
    uint32 NodePosition = 0;
    uint32 Nodecounter = 1;
    printf("Enter the Node postion!\n");
    scanf("%u", &NodePosition);
    if(NodePosition > Get_Node_Length(List))
    {
        printf("Please use Delete Node At beginning!!\n");
    }
    else
    {
        while(Nodecounter <(NodePosition - 1))
        {
            NodeListCounter = NodeListCounter->NodeLink;
            ++Nodecounter;
        }
        NextNode = NodeListCounter->NodeLink;
        NodeListCounter->NodeLink = NextNode->NodeLink;
        NextNode->NodeLink = NULL;
        free(NextNode);
    }
}
void Display_All_Nodes(struct Node *List)
{
    struct Node *TempNode = List;
    printf("The Node Data !!\n");
    if(NULL == TempNode)
    {
        printf("The Node Data is empty\n");
    }
    else
    {
        while(TempNode)
        {
            printf("%u\t", TempNode->NodeData);
            TempNode = TempNode->NodeLink;
        }
        if(NULL == TempNode)
        {
            printf("NULL!!\n");
        }
    }
}

static uint8 Get_Node_Length(struct Node *List)
{
    struct Node *TempNode = List;
    uint8 NodeList = 0;
    while(TempNode)
    {
        ++NodeList;
        TempNode = TempNode->NodeLink;
    }
    return NodeList;
}
