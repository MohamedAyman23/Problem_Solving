#include <stdio.h>
#include <stdlib.h>

int main()
{
    char X ;
    scanf("%c", &X);
    if(X >= 48 && X <= 57)
        printf("IS DIGIT\n");
    else if(X >= 65 && X <= 90)
        printf("ALPHA\nIS CAPITAL\n");
    else if(X >= 97 && X <= 122)
        printf("ALPHA\nIS SMALL\n");
    return 0;
}
