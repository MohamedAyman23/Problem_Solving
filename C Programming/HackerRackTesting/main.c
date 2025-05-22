#include <stdio.h>
#include <stdlib.h>
#include <math.h>
unsigned int max(unsigned int num1, unsigned int num2)
{
    return num1 < num2 ? num2 : num1;
}
int main()
{
    unsigned int n = 0;
    printf("Enter the number :");
    scanf("%i", &n);
    unsigned int i = 0, j = 0;
    for(i = 0; i < 2 * n - 1; i++)
    {
        for(j = 0; j < 2 * n - 1; j++)
        {
            printf("%i ", max(abs(n - i - 1),abs(n - j - 1)) + 1);
        }
        printf("\n");
    }
    return 0;

}
