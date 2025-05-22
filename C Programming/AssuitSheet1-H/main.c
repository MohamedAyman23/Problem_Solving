#include <stdio.h>
int main()
{
    double A, B;
    scanf("%lf%lf", &A, &B);
    printf("floor %.0f / %.0f = %.0f\n", A, B, floor(A/B));
    printf("ceil %.0f / %.0f = %.0f\n", A, B, ceil(A/B));
    printf("round %.0f / %.0f = %.0f\n", A, B, round(A/B));
    return 0;
}
