#include <stdio.h>

int main()
{
    float N, result;
    int A;
    scanf("%f", &N);
    A = N;
    result = N - A;
    if(result == 0)
        printf("int %i\n", A);
    else
        printf("float %i %0.3f\n", A, result);

    return 0;
}
