#ifndef _DLL_H
#define _DLL_H
#define NULL 0LL

typedef unsigned int uint32;
typedef unsigned char uint8;

struct ListNode{

    uint32 NodeData;
    struct ListNode *LeftLink;
    struct ListNode *RightLink;

};

void Insert_At_Beginning(struct ListNode **List, uint32 data);
void Insert_Node_At_End(struct ListNode *List, uint32 data);
void Insert_Node_After(struct ListNode *List, uint32 data);
void Insert_Node_Before(struct ListNode **List, uint32 data);
struct ListNode* Delete_Node(struct ListNode **List, uint32 Nodeposition);


#endif // _DLL_H
