#include <stdio.h>

int main()
{
    int N, M;
    int sum1 = 0, sum2 = 0;
    while(1)
    {
        sum1 = 0, sum2 = 0;
        scanf("%i%i", &N, &M);
        if(N <= 0 || M <= 0)
            break;
        if(N < M)
        {
            for(int i = N; i <= M; i++)
            {
                sum1 += i;
                printf("%i ", i);
                if(i == M)
                    printf(" sum =%i", sum1);
            }
        }
        else
        {
            for(int j = M; j <= N; j++)
            {

                sum2 += j;
                printf("%i ", j);
                if(j == N)
                    printf(" sum =%i", sum2);

            }
        }
        printf("\n");
    }
    return 0;
}
