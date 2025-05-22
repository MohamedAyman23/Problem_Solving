#include <stdio.h>
int main()
{
    int A, B, C;
    int Arr[3] ={};
    scanf("%i%i%i", &Arr[0], &Arr[1], &Arr[2]);//3 -2 1
    A = Arr[0];
    B = Arr[1];
    C = Arr[2];
    int i = 0, Temp = 0;// -199320 -83881 -638945
    for(i = 0; i < 3; i++)
    {
        if(Arr[i] >= Arr[i + 1])// <<<<------------------not correct code in sorting------------->>>>>
        {
            Temp = Arr[i];
            Arr[i] = Arr[i + 1];
            Arr[i + 1] = Temp;
        }
    }
    printf("%i\n%i\n%i\n\n", Arr[0], Arr[1], Arr[2]);
    printf("%i\n%i\n%i\n", A, B, C);
    if(-638945 < -199320)
        printf("the sheet has an error\n");

    return 0;
}
