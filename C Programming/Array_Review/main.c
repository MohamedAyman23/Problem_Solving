#include <stdio.h>
#include <stdlib.h>
int arr_nums[5] = {0x11, 0x22, 0x33, 0x44, 0x55};
int number = 0x88;
int main()
{
    printf("Hello world!\n");

    printf("the number value is = 0x%x\n", number);
    arr_nums[5] = 0x66;
    printf("the array index 5 is = 0x%x \n", arr_nums[5]);
    printf("the array index 3 is = 0x%x \n", arr_nums[3]);
    printf("the number value is = 0x%x\n", number);

    return 0;
}
