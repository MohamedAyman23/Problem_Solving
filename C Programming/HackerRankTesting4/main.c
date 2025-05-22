#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[1000] = {'\0'};
    char num[10] = "0123456789";
    scanf("%s", s);
    char i = 0;
    int j = 0, x =0;
    for(i = 0; i <= 9; i++)
    {
        while(s[j] != '\0')
        {
            if(s[j] == num[i])
            {
                x++;
            }
            else
            {
                /* Nothing */
            }
            j++;
        }
        printf("%i ", x);
        x = 0;
        j = 0;
    }
    return 0;
}
