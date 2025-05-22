#include <stdio.h>

int main()
{
    int A, B;
    char S;
    scanf("%d%c%d", &A, &S, &B);
    switch(S)
    {
    case '+':
        printf("%d\n", A + B);
        break;
    case '-':
        printf("%d\n", A - B);
        break;
    case '*':
        printf("%d\n", A * B);
        break;
    case '/':
        printf("%d\n", A / B);
        break;
    }
    return 0;
}
