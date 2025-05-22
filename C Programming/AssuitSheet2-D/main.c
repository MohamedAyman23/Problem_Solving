#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Find_password = 0;//2200 1020 1999 1000 9999




    while(1)
    {
        scanf("%d", &Find_password);
        if(1999 == Find_password)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }
    return 0;
}
