#ifndef DLINKEDLIST_H
#define DLINKEDLIST_H
#include <stdio.h>

typedef unsigned int uint32;


struct Node {
uint32 NodeData;
struct Node *RightNodelink;
struct Node *LeftNodelink;
};
enum Node_status{

    NODE_NOK,
    NODE_OK

};
void Insertion_at_beginig(struct Node **List, uint32 data);
void Insertion_at_end(struct Node *List, uint32 data);
void Isertion_after(struct Node *List,uint32 position, uint32 data);
void Isertion_before(struct Node *List, uint32 position, uint32 data);
void Deletion_at_beginig(struct Node **List);
void Deletion_at_end(struct Node *List);
void Deletion_at_intermediate(struct Node *List, uint32 position);

void Display_forward(struct Node *List);
void Display_backward(struct Node *List);

#endif // DLINKEDLIST_H
