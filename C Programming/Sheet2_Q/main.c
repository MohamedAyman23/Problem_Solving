#include <stdio.h>

int main()
{
    int N = 0;
    scanf("%i", &N);
    for(int i = 1; i <= N; i++)
    {
       unsigned int xi = 0;
        scanf("%i", &xi);
        if(xi == 0)
            printf("0");
        while(xi != 0)
        {
            int digit = xi%10;
            printf(" %i", digit);
            xi /= 10;
        }
        printf("\n");
    }
    return 0;
}
