#include <stdio.h>
#include <stdlib.h>
#define PRINT_NAME(F_N, L_N)    printf(#F_N" "#L_N"\n")
#define PRINT_NAME2(F_N, L_N)   printf(""#F_N" "#L_N"\n")
#define SUMMING(NUM1, NUM2) ((NUM1) + (NUM2))
#define SWEEP(X, Y) \
{   \
    *(X) = *(X) ^ *(Y); \
    *(Y) = *(X) ^ *(Y); \
    *(X) = *(X) ^ *(Y); \
}
int main()
{
    int x = 15, y = 20;
    int *ptr1, *ptr2;
    ptr1 = &x;
    ptr2 = &y;
    printf("Hello world!\n");
    printf("the sum of the numbers is = %i\n", SUMMING(3, 4));
    printf("the sum of the numbers is = %i\n", SUMMING("3", 4));
    printf("the sum is = %i\n", ("3" + 4));
    printf("the value of ""3"" is = %i\n", "3");
    printf("the value of \"3\" is = %c\n", "3");
    printf("x is = %i and y is = %i \n", x, y);
    SWEEP(ptr1, ptr2);
    printf("and now x is = %i and y = %i\n", x, y);
    PRINT_NAME(Mohammed, Ayman);
    PRINT_NAME2(Mohammed, Attia);
    return 0;
}
