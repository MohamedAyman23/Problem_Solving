#include <stdio.h>

int main()
{
    long long A, B, C ,D;
    long long M;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);//434500145 147276606 217842775 236387740
    //434500145 147276606 217842775 236387740
    A %= 100;
    B %= 100;
    C %= 100;
    D %= 100;
    M = (A * B * C * D);
    M = (M % 100);
    if(M == 0)
        printf("%lld%lld\n", M, M);
    else if(M < 10)
        printf("0%lld\n", M);
    else
        printf("%lld\n", M);

    return 0;
}
