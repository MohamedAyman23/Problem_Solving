#include <stdio.h>
#include <stdlib.h>
#define ARRAY_MAX_SIZE 10

void Insertion_Sort(unsigned int mydata[], unsigned int Maxsize);
void PrintData(unsigned int mydata[], unsigned int Maxsize);
unsigned int mydata1[ARRAY_MAX_SIZE] = {9, 2, 8, 0, 5, 7, 3, 6, 4, 1};
int main()
{
    PrintData(mydata1, ARRAY_MAX_SIZE);
    Insertion_Sort(mydata1, ARRAY_MAX_SIZE);
    PrintData(mydata1, ARRAY_MAX_SIZE);
    return 0;
}
void Insertion_Sort(unsigned int mydata[], unsigned int Maxsize)
{
    unsigned int IS_iteration = 0, InsertIterm = 0;
    signed int comparedIterm = 0;
    for(IS_iteration = 1; IS_iteration < Maxsize; IS_iteration++)
    {
        InsertIterm = mydata[IS_iteration];
        comparedIterm = IS_iteration - 1;
        while(InsertIterm < mydata[comparedIterm] && (comparedIterm >= 0))
        {
            mydata[comparedIterm + 1] = mydata[comparedIterm];
            comparedIterm--;
        }
        mydata[comparedIterm + 1] = InsertIterm;
    }
}
void PrintData(unsigned int mydata[], unsigned int Maxsize)
{
    unsigned int IndexNum = 0;
    for(IndexNum = 0; IndexNum < Maxsize; IndexNum++)
    {
        printf("%u\t", mydata[IndexNum]);
    }
    printf("\n");
}
