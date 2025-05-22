#include <stdio.h>

int main()
{
    char s;
    int N;
    scanf("%c", &s);
    scanf("%i", &N);
    for(int i = 1; i <= N ; i++)
    {
        int x;
        scanf("%i", &x);
        for(int y = 1; y <= x; y++)
        {
            printf("%c", s);

        }
        printf("\n");
    }
    return 0;
}
