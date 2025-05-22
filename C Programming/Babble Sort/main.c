#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10
typedef unsigned int uint32;
typedef signed int sint32;
void swap_elements(uint32 *elem1, uint32 *elem2);
void Sort_Data(uint32 My_Data[], uint32 array_length);
void print_data(uint32 My_Data[], uint32 array_length);
uint32 My_Data[MAX_SIZE] = {8, 2, 7, 0, 1, 9, 3, 5, 6, 4};
uint32 x = 34, y = 24;

int main()
{
    print_data(My_Data, MAX_SIZE);
    Sort_Data(My_Data, MAX_SIZE);
    print_data(My_Data, MAX_SIZE);
    printf("%i %i \n",x ,y);
    swap_elements(&x, &y);
    printf("%i %i \n",x ,y);
    return 0;
}
void Sort_Data(uint32 My_Data[], uint32 array_length)
{
    uint32 iterationcounter = 0, comparsioncounter = 0;
    uint32 flage = 0;
    for(iterationcounter = 0; iterationcounter < array_length - 1; iterationcounter++)
    {
        for(comparsioncounter = 0; comparsioncounter < (array_length - 1 - iterationcounter); comparsioncounter++)
        {
            if(My_Data[comparsioncounter] > My_Data[comparsioncounter+1])
            {
                swap_elements(&My_Data[comparsioncounter], &My_Data[comparsioncounter+1]);
                flage = 1;
            }
        }
        if(0 == flage)
        {
            return;
        }
    }

}
void swap_elements(uint32 *elem1, uint32 *elem2)
{
        uint32 temp = *elem1;
        *elem1 = *elem2;
        *elem2 = temp;
}
void print_data(uint32 My_Data[], uint32 array_length)
{
    uint32 i = 0;
    for(i = 0; i < array_length; i++)
    {
        printf("%i\t", My_Data[i]);
    }
    printf("\n");
}
