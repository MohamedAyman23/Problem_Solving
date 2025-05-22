#include <stdio.h>

int main()
{
    int n, x, y;
    int sum1 = 0, sum2 = 0;
    scanf("%i", &n);
    while(n)
    {
        sum1 =0, sum2 =0;
        scanf("%i%i", &x, &y);
        if(x < y)
        {
            sum1 = 0;
            for(int i = (x + 1); i < y; i++)
            {
                if((i % 2) != 0)
                {
                    sum1 += i;
                }
            }
            printf("%i\n", sum1);
        }
        else
        {
            sum2 = 0;
            for(int i = (y + 1); i < x; i++)
            {
                if((i % 2) != 0)
                {
                    sum2 += i;

                }
            }
            printf("%i\n", sum2);
        }
        n--;
    }
    return 0;
}
