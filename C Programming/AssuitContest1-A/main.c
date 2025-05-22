#include <stdio.h>
int main()
{
    float X, P, Result;
    scanf("%f %f", &X, &P);
    Result = ((100 * P)/(100 - X));
    printf("%.2f\n", Result);
    return 0;
}
