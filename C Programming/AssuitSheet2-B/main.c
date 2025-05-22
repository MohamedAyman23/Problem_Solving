#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N =0, i =0, flag = 0;
    scanf("%i", &N);
    for(i = 1; i <= N; i++)
    {
        if(i % 2 == 0)
        {
            printf("%i\n", i);
            flag = 1;
        }
    }
    if(flag == 0)
    {
        printf("-1\n");
    }

    return 0;
}
