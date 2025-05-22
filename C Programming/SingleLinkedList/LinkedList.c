#include "LinkedList.h"


void NodeInsertion(Node_t **listHead, NodeStatus_t *ret_status, void *Dataptr)
{
    Node_t *TempNode = NULL;
    Node_t *NodeListcount = NULL;
    uint32 Nodepostion = 0;
    uint32 counter =1;
    uint32 postion =1;
    uint32 listsize = NodeLength(*listHead);
    TempNode =(Node_t *)malloc(sizeof(Node_t));
    if(TempNode)
    {
        if(NULL == *listHead)
        {
            *listHead = TempNode;
            TempNode->NodeData = Dataptr;
            TempNode->NodeLinke = NULL;

            printf("the first Node in the List was Entered..\n");
            *ret_status =NODE_OK;
        }
        else
        {
            printf("Enter the postion you want to insert data...\n");
            scanf("%i", &Nodepostion);
            if(Nodepostion < listsize)
            {
                NodeListcount = *listHead;
                while(counter< Nodepostion)
                {
                    counter ++;
                    NodeListcount = NodeListcount->NodeLinke;
                }
                TempNode->NodeLinke =NodeListcount->NodeLinke;
                NodeListcount->NodeLinke = TempNode;
                TempNode->NodeData = Dataptr;
                ret_status = NODE_OK;
            }
            else
            {
                printf("Please Enter valid position..\n");
            }
        }
    }
    else
    {
        printf("Error !!\n");
    }
}
void NodeDeletion(Node_t **listHead)
{
    Node_t *TempNode = *listHead;
    Node_t *Nodecounter = NULL;
    uint32 position = 0;

    uint32 counter = 1;
    uint32 listsize = NodeLength(*listHead);

    if(NULL == listHead)
    {
        printf("The list is empty..\n");
    }
    else
    {
        TempNode = *listHead;
        printf("Enter the position :");
        scanf("%i", &position);

        if(position >listsize)
        {
            printf("invalid postion!!\n");
        }
        else
        {   if(position == 1)
            {
                *listHead = TempNode->NodeLinke;
                TempNode->NodeLinke = NULL;

            }
            else
            {
                TempNode = *listHead;
                while(counter < position)
                {
                    counter ++;
                    TempNode = TempNode->NodeLinke;
                }
                 Nodecounter = TempNode->NodeLinke;
                 TempNode->NodeLinke =Nodecounter->NodeLinke;
                 free(Nodecounter);
                 Nodecounter = NULL;
            }

        }

    }
}
uint32 NodeLength(Node_t *ListHead)
{
    Node_t *Nodecounter = ListHead;
    uint32 length =0;
    if( NULL == Nodecounter)
    {
        printf("The list is empty\n");

    }
    else
    {
        while(NULL != (Nodecounter->NodeLinke))
        {
            length ++;
            Nodecounter = Nodecounter->NodeLinke;
        }
    }

    return (length);
}


