#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B,S = 0;
    scanf("%i%i", &A, &B);
    if(A >= B)
    {
        for(int y = 1; y <= A ; y++)
        {
            if(A % y == 0 && B % y == 0)
            {
                if(y > S)
                    S = y;
            }
        }
    }
    else
    {
        for(int y = 1; y <= B ; y++)
        {
            if(A % y == 0 && B % y == 0)
            {
                if(y > S)
                    S = y;
            }
        }
    }
    printf("%i\n", S);
    return 0;
}
