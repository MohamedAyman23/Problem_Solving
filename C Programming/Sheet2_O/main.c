#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%i", &N);
    for(int i = N; i > 0; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
