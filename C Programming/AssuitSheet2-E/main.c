#include <stdio.h>
#include <stdlib.h>
typedef signed int sint32;
typedef unsigned int uint32;
int main()
{
    int Num_Arr[1000] = {};
    int Arr_Max_size = 0;
    scanf("%i", &Arr_Max_size);
    for(int i =0; i < Arr_Max_size; i++)//1 8 5 7 5
    {
        scanf("%i", &Num_Arr[i]);
    }
    sint32 Buffer = 0;
    uint32 data_iterator = 1;
    sint32 compared_item_index = 0;
    for(data_iterator = 1; data_iterator < Arr_Max_size; data_iterator++)
    {
        Buffer = Num_Arr[data_iterator];
        compared_item_index = data_iterator - 1;
        while(Buffer < Num_Arr[compared_item_index] && (compared_item_index >= 0))
        {
            Num_Arr[compared_item_index + 1] = Num_Arr[compared_item_index];
            compared_item_index--;
        }
        Num_Arr[compared_item_index + 1] = Buffer;
    }
    printf("%i\n", Num_Arr[Arr_Max_size - 1]);
    return 0;
}
