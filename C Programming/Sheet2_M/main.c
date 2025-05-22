#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a, b, n, flag = 0;
   scanf("%i%i", &a, &b);
   for(int i = a; i <= b; i++)
   {
       n = i;
       while(n > 0)
       {
           int digit = n % 10;
           n = (n / 10);
           if(digit != 4 && digit != 7)
           {
               break;
           }
           else if ((digit == 4 && n == 0) || (digit == 7 && n == 0)){
            printf(" %i", i);
            flag ++;
           }
       }
       if((i == b && flag == 0))
        printf("-1\n");
   }
    return 0;
}
