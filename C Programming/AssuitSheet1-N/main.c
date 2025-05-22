#include <stdio.h>
int main()
{
    char X;
    scanf("%c", &X);
    if(X >= 65 && X <= 90)
        printf("%c\n", X + 32);
    else if(X >= 97 && X <= 122)
        printf("%c\n", X - 32);
    return 0;
}
