#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    scanf("%i%i%i", &a, &b, &c);
    if(a >= b && a >= c)
    {
        if(b >= c)
        {
            printf("%i\n%i\n%i\n\n", c, b, a);
            printf("%i\n%i\n%i\n", a, b, c);
        }
        else
        {
            printf("%i\n%i\n%i\n\n", b, c, a);
            printf("%i\n%i\n%i\n", a, b, c);
        }
    }
    else if(b >= a && b >= c)// -199320 -83881 -638945
    {
        if(a >= c)
        {
            printf("%i\n%i\n%i\n\n", c, a, b);
            printf("%i\n%i\n%i\n", a, b, c);
        }
        else
        {
            printf("%i\n%i\n%i\n\n", a, c, b);
            printf("%i\n%i\n%i\n", a, b, c);
        }
    }
    else if(c >= a && c >= b)
    {
        if(a >= b)
        {
            printf("%i\n%i\n%i\n\n", b, a, c);
            printf("%i\n%i\n%i\n", a, b, c);
        }
        else
        {
            printf("%i\n%i\n%i\n\n", a, b, c);
            printf("%i\n%i\n%i\n", a, b, c);
        }
    }
    return 0;
}
