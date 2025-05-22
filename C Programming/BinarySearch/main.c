#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10
typedef unsigned int uint32;
typedef signed int sint32;
sint32 find_element(uint32 My_Data[], uint32 S_Index, uint32 E_Index, uint32 Req_Data);
uint32 My_Data[MAX_SIZE] = {0, 11, 22, 33, 44, 55 , 66, 77, 88, 99};
sint32 Ret = 0;

int main()
{
    Ret = find_element(My_Data, 0, MAX_SIZE-1, 55);
    printf("Ret is =%i\n", Ret);
    Ret = find_element(My_Data, 0, MAX_SIZE-1, 11);
    printf("Ret is =%i\n", Ret);
    Ret = find_element(My_Data, 0, MAX_SIZE-1, 100);
    printf("Ret is =%i\n", Ret);                        /*the value i search for does not exist*/

    return 0;
}
sint32 find_element(uint32 My_Data[], uint32 S_Index, uint32 E_Index, uint32 Req_Data)
{
    uint32 M_Index = 0;
    for(S_Index = 0; S_Index <= E_Index;)
    {
        M_Index = S_Index + ((E_Index - S_Index)/2);
        if(Req_Data == My_Data[M_Index])
        {
            return M_Index;
        }
        else if (Req_Data > My_Data[M_Index])
        {
            S_Index = M_Index + 1;
        }
        else
        {
            E_Index = M_Index - 1;
        }
    }
    return -1;
}
