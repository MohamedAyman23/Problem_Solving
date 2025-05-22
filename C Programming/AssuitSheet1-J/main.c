#include <stdio.h>
int main()
{
    long long A, B;
    scanf("%lld%lld", &A, &B);
    if((A % B == 0) || (B % A == 0))
        printf("Multiples\n");
    else
        printf("No Multiples\n");
    return 0;
}
