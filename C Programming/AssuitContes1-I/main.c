#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N =0;
    int Res =0;
    scanf("%i", &N);
    //printf("%i\n", N);
    Res = ((N % 10));
    //printf("%i\n", Res);
    N /= 10;
    //printf("%i\n", N);
    if(N == 0 || Res == 0)
    {
        printf("YES\n");
    }
    else{
        if((N % Res) == 0 || (Res % N) == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
