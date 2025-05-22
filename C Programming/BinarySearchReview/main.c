#include <stdio.h>
#include <stdlib.h>
unsigned int BinarySearch(unsigned int arr[10], unsigned int S_Index, unsigned int E_Index, unsigned int ReqData);
unsigned int arr[10] = {1, 2, 3, 6, 8, 12, 20, 44, 55, 66};
int main()
{
    unsigned int Result = 0;

    Result = BinarySearch(arr, 0, 9, 55);
    printf("the Index where the data is saved is = %u\n", Result);
    printf("The data i search for is = %u\n", arr[8]);
    Result = BinarySearch(arr, 0, 9, 2);
    printf("the Index where the data is saved is = %u\n", Result);
    if(Result != 0)
        printf("The data i search for is = %u\n", arr[Result]);

    return 0;
}
unsigned int BinarySearch(unsigned int arr[10], unsigned int S_Index, unsigned int E_Index, unsigned int ReqData)
{
    unsigned int M_Index = 0;
    while(S_Index <= E_Index)
    {
        M_Index = S_Index +(E_Index - S_Index)/2;
        if(ReqData == arr[M_Index])
        {
            return M_Index;

        }
        else if(ReqData > arr[M_Index])
            S_Index = M_Index + 1;
        else
            E_Index = M_Index - 1;

    }
    return -1;
}
