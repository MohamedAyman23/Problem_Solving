#ifndef _LINKEDLIST_H
#define _LINKEDLIST_H

#define NULL 0LL
typedef unsigned int uint32;
typedef unsigned char uint8;
typedef signed int sint32;

typedef struct Node{

    uint32 NodeData;
    struct Node *NodeLink;


}Node_t;

void Insert_Node_At_Beginning(struct Node **List);
void Insert_Node_At_End(struct Node **List);
void Insert_Node_After(struct Node *List);
void Delete_Node_At_Beginning(struct Node **List);
void Delete_Node(struct Node *List);
void Display_All_Nodes(struct Node *List);

#endif // _LINKEDLIST_H
