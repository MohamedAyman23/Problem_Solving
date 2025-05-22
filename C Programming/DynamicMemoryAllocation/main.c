#include <stdio.h>
#include <stdlib.h>

int main()
{
   unsigned int *ptr = NULL;
   unsigned int *ptr1 = NULL;
   ptr1  = (unsigned int *)calloc(5, sizeof(int));
   ptr = (unsigned int *)malloc(sizeof(unsigned int ) * 4);
   *(ptr + 0) = 0x11;
   *(ptr + 1) = 0x22;
   *(ptr + 2) = 0x33;
   *(ptr + 3) = 0x44;
   printf("the value 1 is 0x%x \n", *(ptr + 0));
   printf("the value 1 is 0x%x \n", *(ptr + 1));
   printf("the value 1 is 0x%x \n", *(ptr + 2));
   printf("the value 1 is 0x%x \n", *(ptr + 3));
   free(ptr);
   ptr = NULL;
   *(ptr1 + 0) = 0x11;
   *(ptr1+ 1) = 0x22;
   *(ptr1 + 2) = 0x33;
   *(ptr1 + 3) = 0x44;
   *(ptr1 + 4) = 0x55;
   int i = 0;
   for(i = 0; i < 5; i++)
   {
       printf("the value %i is = 0x%x\n", i + 1, *(ptr1 + i));
   }
   free(ptr1);
   ptr1 = NULL;

    return 0;
}
