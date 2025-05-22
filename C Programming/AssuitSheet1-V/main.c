#include <stdio.h>
int main()
{
    char S;
    int A = 0, B = 0;
    scanf("%i %c %i", &A, &S, &B);
    switch(S)
    {
    case '>':
    {
        if(A > B)
            printf("Right\n");
        else
            printf("Wrong\n");
        break;
    }
    case '<':
    {
        if(A < B)
            printf("Right\n");
        else
            printf("Wrong\n");
        break;
    }
    case '=':
    {
        if(A == B)
            printf("Right\n");
        else
            printf("Wrong\n");
        break;
    }

    }
    return 0;
}
