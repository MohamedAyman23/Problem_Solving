#include <stdio.h>

int main()
{
    int A, B, C;
    char S, Q;
    scanf("%i %c %i %c %i", &A, &S, &B, &Q, &C);
    switch(S)
    {
    case '+':
        {
            if((A + B) == C)
                printf("Yes\n");
            else
                printf("%i\n", A + B);
            break;
        }
    case '-':
        {
            if((A - B) == C)
                printf("Yes\n");
            else
                printf("%i\n", A - B);
            break;
        }
    case '*':
        {
            if((A * B) == C)
                printf("Yes\n");
            else
                printf("%i\n", A * B);
            break;
        }
    }
    return 0;
}
