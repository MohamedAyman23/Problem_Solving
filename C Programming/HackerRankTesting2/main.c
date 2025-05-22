#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    printf("%s\n", s);
    int i = 0;
    while(s[i] != '\0')
    {
        if(s[i] != 32)
        {
            printf("%c",s[i]);
        }
        else
        {
            printf("\n");
        }
        i++;
    }

    return 0;
}
