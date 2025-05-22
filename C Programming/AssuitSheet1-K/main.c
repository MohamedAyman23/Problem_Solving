#include <stdio.h>

int max(int a, int b);
int min(int a, int b);
int main()
{
    int A, B, C;
    scanf("%d%d%d", &A, &B, &C);
    printf("%d %d",min(A, min(B, C)), max(A, max(B, C)));
    return 0;
}
int max(int a, int b)
{
    return (a > b ? a : b);
}
int min(int a, int b)
{
    return (a < b ? a : b);
}
