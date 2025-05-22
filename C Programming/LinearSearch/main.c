#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 10


typedef unsigned int uint32;
typedef signed int sint32;
sint32 Ret = 0;
uint32 MAX_SIZE = 10;
sint32 My_Data[MAXSIZE] = {11, 22, 33 , 44, 55 , 66, 77, 88, 99, 100};
sint32 Find_element(sint32 My_Data[], uint32 MAX_SIZE, uint32 Req_Data);

int main()
{
    Ret = Find_element(My_Data, MAXSIZE, 88);
    printf("the Ret is = %i\n", Ret);
    Ret = Find_element(My_Data, MAXSIZE, 102);
    printf("the Ret is = %i\n", Ret);
    return 0;
}
sint32 Find_element(sint32 My_Data[], uint32 MAX_SIZE, uint32 Req_Data)
{
    uint32 Index = 0;
    for(Index = 0; Index < MAX_SIZE; Index++)
    {
        if(Req_Data == My_Data[Index])
            return Index;
    }
    return -1;
}
