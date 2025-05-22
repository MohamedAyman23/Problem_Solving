#include <stdio.h>

int main()
{
    long long N, M;
    int R1, R2;
    scanf("%lld %lld", &N, &M);
    R1 = (N % 10);
    R2 = (M % 10);
    printf("%i\n", R1 + R2);
    return 0;
}
