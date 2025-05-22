#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N =0, i =0;
    scanf("%i", &N);
    for(i =1; i <=12; i++)
    {
        printf("%i * %i = %i\n", N, i, (N * i));
    }
    return 0;
}
