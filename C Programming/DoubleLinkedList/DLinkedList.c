#include "DLinkedList.h"




void Insertion_at_beginig(struct Node **List, uint32 data)
{
    struct Node *TempNode = NULL;
    TempNode = (struct Node *)malloc(sizeof(struct Node));
    if(NULL != TempNode)
    {
        TempNode->NodeData = data;
        if(NULL == (*List))
        {
            (*List) = TempNode;
            TempNode->LeftNodelink = NULL;
            TempNode->RightNodelink =NULL;
        }
        else
        {
            TempNode->RightNodelink = (*List);
            (*List)->LeftNodelink = TempNode;
            (*List) = TempNode;
            TempNode->LeftNodelink = NULL;
        }

    }
    else
    {
        printf("Can't allocate the new node !!\n");
    }
}
void Insertion_at_end(struct Node *List, uint32 data)
{
    struct Node *TempNode = NULL;
    struct Node *Nodelistcounter = List;
    TempNode = (struct Node *)malloc(sizeof(struct Node));
    if(NULL != TempNode)
    {
        TempNode->NodeData = data;
        while(NULL != (Nodelistcounter->RightNodelink))
        {
            Nodelistcounter = Nodelistcounter->RightNodelink;
        }
        Nodelistcounter->RightNodelink = TempNode;
        TempNode->LeftNodelink = Nodelistcounter;
        TempNode->RightNodelink = NULL;
    }
    else
    {
        printf("Can't allocat a new node !!\n");
    }
}
void Isertion_after(struct Node *List,uint32 position, uint32 data)
{
    struct Node *TempNode = NULL;
    struct Node *NodelistcounterONe = List;
    struct Node *NodelistcounterTwo = NULL;
    TempNode = (struct Node *)malloc(sizeof(struct Node));
    if(NULL != TempNode)
    {
        TempNode->NodeData = data;
        while(position > 1)
        {
            NodelistcounterONe = NodelistcounterONe->RightNodelink;
            position--;
        }
        if(NULL == NodelistcounterONe->RightNodelink)
        {
            NodelistcounterONe->RightNodelink = TempNode;
            TempNode->LeftNodelink = NodelistcounterONe;
            TempNode->RightNodelink = NULL;
        }
        else
        {
            NodelistcounterTwo = NodelistcounterONe->RightNodelink;
            TempNode->RightNodelink = NodelistcounterTwo;
            TempNode->LeftNodelink = NodelistcounterONe;
            NodelistcounterONe->RightNodelink = TempNode;
            NodelistcounterTwo->LeftNodelink = TempNode;
        }
    }
    else
    {
        printf("Can't allocat a new node !!\n");
    }

}

void Isertion_before(struct Node *List, uint32 position, uint32 data)
{
    struct Node *TempNode = NULL;
    struct Node *NodelistcounterOne = List;
    struct Node *NodelistcounterTwo = NULL;
    TempNode = (struct Node *)malloc(sizeof(struct Node));
    if(NULL != TempNode)
    {
        TempNode->NodeData = data;
        if(NULL == List || position == 1)
        {
            printf("Please use the insert data at the begining of the list \n");
            Insertion_at_beginig(&List, data);
        }
        else
        {
            while(position != 2)
            {
                NodelistcounterOne = NodelistcounterOne->RightNodelink;
                position--;
            }
            if(NULL == NodelistcounterOne->RightNodelink)
            {
                NodelistcounterOne->RightNodelink = TempNode;
                TempNode->LeftNodelink = NodelistcounterOne;
                TempNode->RightNodelink = NULL;
            }
            else
            {
                NodelistcounterTwo = NodelistcounterOne->RightNodelink;
                TempNode->RightNodelink = NodelistcounterTwo;
                TempNode->LeftNodelink = NodelistcounterOne;
                NodelistcounterOne->RightNodelink = TempNode;
                NodelistcounterTwo->LeftNodelink = TempNode;
            }

        }
    }
    else
    {
        printf("Can't allocate a new node !!\n");
    }


}

void Deletion_at_beginig(struct Node **List)
{
    struct Node *TempNode = *List;
    if(NULL == *List)
    {
        printf("The list is empty !!\n");
    }
    else
    {
        *List = TempNode->RightNodelink;
        (*List)->LeftNodelink = NULL;
        free(TempNode);
        TempNode = NULL;
    }
    if(NULL == TempNode)
    {
        printf("the node is deleted correctly \n");
    }
    else
    {
        printf("can't delete the node !!\n");
    }
}

void Deletion_at_end(struct Node *List)
{
    struct Node *TempNode = NULL;
    struct Node *Nodelistcounter = List;
    if(NULL == List)
    {
        printf("The List is empty \n");

    }
    else
    {
        while(NULL != Nodelistcounter->RightNodelink)
        {
            Nodelistcounter = Nodelistcounter->RightNodelink;
        }
        TempNode = Nodelistcounter;
        Nodelistcounter = Nodelistcounter->LeftNodelink;
        Nodelistcounter->RightNodelink = NULL;
        free(TempNode);
        TempNode = NULL;
    }
}

void Deletion_at_intermediate(struct Node *List, uint32 position)
{
    struct Node *TempNode = List;
    struct Node *NodelistcounterOne = NULL;
    struct Node *NodelistcounterTwo = NULL;
    if(NULL == List)
    {
        printf("The list is empty !!\n");
    }
    else
    {
        if(1 == position)
        {
            Deletion_at_beginig(&List);
        }
        else
        {
            while(position != 1)
            {
                TempNode = TempNode->RightNodelink;
                position --;
            }
            if(NULL == TempNode->RightNodelink)
            {
                Deletion_at_end(List);
            }
            else
            {
                NodelistcounterOne = TempNode->LeftNodelink;
                NodelistcounterTwo = TempNode->RightNodelink;
                NodelistcounterOne->RightNodelink = NodelistcounterTwo;
                NodelistcounterTwo->LeftNodelink = NodelistcounterOne;
                free(TempNode);
                TempNode == NULL;
            }
        }
    }
}
void Display_forward(struct Node *List)
{
    struct Node *Nodecounter = List;
    printf("\nTraversal in forward direction ==> ");
    printf("Data : ");
    //printf("%d -> ", Nodecounter->NodeData);
    while(NULL != Nodecounter->RightNodelink)
    {
        printf("%i -> ", Nodecounter->NodeData);
        Nodecounter = Nodecounter->RightNodelink;
    }
    if(NULL == Nodecounter->RightNodelink)
    {
        printf("NULL");
    }
    printf("\n");
}

void Display_backward(struct Node *List)
{
    struct Node *Nodecounter = List;
    while(NULL != Nodecounter->RightNodelink)
    {
        Nodecounter = Nodecounter->RightNodelink;
    }
    while(NULL != Nodecounter->LeftNodelink)
    {
         printf("%i -> ", Nodecounter->NodeData);
         Nodecounter = Nodecounter->LeftNodelink;
    }
    if(NULL == Nodecounter)
    {
        printf("NULL");
    }
    printf("\n");
}
