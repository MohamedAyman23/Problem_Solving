#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE  10
typedef unsigned int uint32;
typedef signed int sint32;
void instertion_sort(sint32 my_data[], uint32 array_size);
void diaplay_data(sint32 my_data[], uint32 array_size);


uint32 my_data[MAX_SIZE] = {5, 8, 2, 6, 4, 9, 1, 3, 7, 0};
sint32 my_data1[MAX_SIZE] = {3, 1, 8, 0, 9, -1, 2, 5, 6, 2};
sint32 my_data2[MAX_SIZE] = {0, 1, 2, 3, 4 , 5, 6, 7, 8, 9};
int main()
{
    diaplay_data(my_data, MAX_SIZE);
    instertion_sort(my_data, MAX_SIZE);
    diaplay_data(my_data, MAX_SIZE);
    printf("----------------------------");
    printf("----------------------------------------------\n");
    /* i uesed the negative numbers and a repeted
       numbers to check that the algorithm works well */
    diaplay_data(my_data1, MAX_SIZE);
    instertion_sort(my_data1, MAX_SIZE);
    diaplay_data(my_data1, MAX_SIZE);
    printf("----------------------------");
    printf("----------------------------------------------\n");
    diaplay_data(my_data2, MAX_SIZE);
    instertion_sort(my_data2, MAX_SIZE);
    diaplay_data(my_data2, MAX_SIZE);
    return 0;
}
void instertion_sort(sint32 my_data[], uint32 array_size)
{
    sint32 Buffer = 0;
    uint32 data_iterator = 1;
    sint32 compared_item_index = 0;
    for(data_iterator = 1; data_iterator < array_size; data_iterator++)
    {
        Buffer = my_data[data_iterator];
        compared_item_index = data_iterator - 1;
        while(Buffer < my_data[compared_item_index] && (compared_item_index >= 0))
        {
            my_data[compared_item_index + 1] = my_data[compared_item_index];
            compared_item_index--;
        }
        my_data[compared_item_index + 1] = Buffer;
    }
}
void diaplay_data(sint32 my_data[], uint32 array_size)
{
    uint32 i = 0;
    for(i = 0; i < array_size; i++)
    {
        printf("%i \t", my_data[i]);
    }
    printf("\n");
}
