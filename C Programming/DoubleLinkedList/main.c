#include <stdio.h>
#include <stdlib.h>
#include "DLinkedList.h"
struct Node *DLL_1 = NULL;
int main()
{
    Insertion_at_beginig(&DLL_1, 11);
    Display_forward(DLL_1);
    Insertion_at_beginig(&DLL_1, 22);
    Display_forward(DLL_1);
    Insertion_at_beginig(&DLL_1, 33);
    Display_forward(DLL_1);
    printf("----------------------\n");
    Insertion_at_end(DLL_1, 99);
    Display_forward(DLL_1);
    Insertion_at_end(DLL_1, 100);
    Display_forward(DLL_1);
    printf("----------------------\n");

    Isertion_after(DLL_1, 2, 44);
    Display_backward(DLL_1);
    Isertion_after(DLL_1, 3, 55);
    Display_backward(DLL_1);
    Isertion_after(DLL_1, 5, 66);
    Display_backward(DLL_1);
    printf("----------------------\n");
    Isertion_before(DLL_1, 3, 77);
    Display_backward(DLL_1);
    Isertion_before(DLL_1, 1, 88);
    Display_backward(DLL_1);
    printf("----------------------\n");
    Deletion_at_beginig(&DLL_1);
    Display_backward(DLL_1);
    Deletion_at_beginig(&DLL_1);
    Display_backward(DLL_1);
    printf("----------------------\n");
    Deletion_at_end(DLL_1);
    Display_backward(DLL_1);
    Deletion_at_end(DLL_1);
    Display_backward(DLL_1);
    printf("----------------------\n");
    Deletion_at_intermediate(DLL_1, 2);
    Display_backward(DLL_1);
    Deletion_at_intermediate(DLL_1, 3);
    Display_backward(DLL_1);

    return 0;
}
