#include <stdio.h>
#include <stdlib.h>
#define MY_DATA_MAX_SIZE 10
void BubbleData(unsigned int mydata[], unsigned int maxsize);
void printfData(unsigned int mydata[], unsigned int maxsize);
void SwapData(unsigned int *Elem1, unsigned int *Elem2);
unsigned int mydata1[MY_DATA_MAX_SIZE] = {3, 4, 1, 8, 0, 9, 33, 99, 22, 10};
unsigned int mydata2[MY_DATA_MAX_SIZE] = {8, 3, 9, 1, 0, 6, 77, 99, 44, 55};
int main()
{
   BubbleData(mydata1, MY_DATA_MAX_SIZE);
   printfData(mydata1, MY_DATA_MAX_SIZE);
   BubbleData(mydata2, MY_DATA_MAX_SIZE);
   printfData(mydata2, MY_DATA_MAX_SIZE);
    return 0;
}
void BubbleData(unsigned int mydata[], unsigned int maxsize)
{
    unsigned int Bs_iteration = 0, Compar_Iteration = 0, Sort_Flag = 0;
    for(Bs_iteration = 0; Bs_iteration < maxsize - 1; ++Bs_iteration)
    {
        for(Compar_Iteration = 0; Compar_Iteration < maxsize - Bs_iteration - 1; ++Compar_Iteration)
        {
            if(mydata[Compar_Iteration] > mydata[Compar_Iteration + 1])
            {
                SwapData(&mydata[Compar_Iteration], &mydata[Compar_Iteration + 1]);
                Sort_Flag = 1;
            }
        }
        if(0 == Sort_Flag)
            return;
    }
}
void printfData(unsigned int mydata[], unsigned int maxsize)
{
    unsigned int BS_iteration = 0;
    for(BS_iteration = 0; BS_iteration < maxsize; BS_iteration++)
    {
        printf("%u\t", mydata[BS_iteration]);
    }
    printf("\n");
}
void SwapData(unsigned int *Elem1, unsigned int *Elem2)
{
    unsigned int Temp = 0;
    Temp = *Elem1;
    *Elem1 = *Elem2;
    *Elem2 = Temp;
}
