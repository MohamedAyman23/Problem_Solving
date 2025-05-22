#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n = 0, oringinalN = 0, reversN = 0, reminder = 0;
    printf("Enter the integer Number\n");
    scanf("%u", &n);
    oringinalN = n;
    while(n != 0)
    {
        reminder = n % 10;
        reversN = reversN * 10 + reminder;
        n /= 10;
    }
    if(oringinalN == reversN)
        printf("the %u is plindrome number\n", oringinalN);
    else
        printf("the %u is not plindrome number\n", oringinalN);
    return 0;
}
