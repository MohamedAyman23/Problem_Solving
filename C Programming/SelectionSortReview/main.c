#include <stdio.h>
#include <stdlib.h>
#define ARRAY_MAX_SIZE 10
void SelectionSort(unsigned int mydata[], unsigned int Maxsize);
void PrintData(unsigned int mydata[], unsigned int Maxsize);
void SwapData(unsigned int *Elem1, unsigned int *Elem2);
unsigned int mydata1[ARRAY_MAX_SIZE] = {8, 7, 2, 1, 0, 4, 6, 9, 3, 5};

int main()
{
    PrintData(mydata1, ARRAY_MAX_SIZE);
    SelectionSort(mydata1, ARRAY_MAX_SIZE);
    PrintData(mydata1, ARRAY_MAX_SIZE);
    return 0;
}
void SelectionSort(unsigned int mydata[], unsigned int Maxsize)
{
    unsigned int SS_Iteration = 0, InerIndex = 0, MinItem = 0;
    for(SS_Iteration = 0; SS_Iteration < Maxsize - 1; SS_Iteration++)
    {
        MinItem = SS_Iteration;
        for(InerIndex = SS_Iteration + 1; InerIndex < Maxsize ; InerIndex++)
        {
           if(mydata[InerIndex] < mydata[MinItem])
            MinItem = InerIndex;
        }
        SwapData(&mydata[MinItem], &mydata[SS_Iteration]);
    }
}
void PrintData(unsigned int mydata[], unsigned int Maxsize)
{
    unsigned int i = 0;
    for(i = 0; i < Maxsize; i++)
    {
        printf("%u\t", mydata[i]);
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
