#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, y;
    scanf("%i", &n);
    for(y = 1; y <= n; y++)
    {
        if(n % y == 0)
            printf("%i \n", y);
    }
    return 0;
}
