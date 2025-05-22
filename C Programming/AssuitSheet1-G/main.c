#include <stdio.h>

int main()
{
    long long N, Sum = 0;

    scanf("%lld", &N);
    Sum = (N *(N + 1)) / 2;
    printf("%lld\n", Sum);
    return 0;
}
