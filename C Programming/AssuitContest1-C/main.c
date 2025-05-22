#include <stdio.h>

int main()
{
    char Alph;
    scanf("%c", &Alph);
    if(Alph == 122)
    {
        Alph = 97;
        printf("%c\n", Alph);
    }
    else
    {
        printf("%c\n", Alph + 1);
    }

    return 0;
}
