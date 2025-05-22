#include <stdio.h>
#include <math.h>

int main()
{
    long long A, B ,C ,D;

    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
    //printf("A = %lld B = %lld C = %lld D = %lld\n", A, B, C, D);
    //we can use the log to reduce the size of the numbers
    if(B * log(A) > D * log(C))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
