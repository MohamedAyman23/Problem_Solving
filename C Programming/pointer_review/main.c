#include <stdio.h>
#include <stdlib.h>
unsigned int *ptr1 = NULL;
unsigned int *ptr2 = NULL;
void print_name(void);
unsigned int Swap(unsigned int *num1, unsigned int *num2);
int main()
{
    unsigned int x[5] = {1, 2, 3, 4, 5};
    const unsigned int num = 33;
    printf("Hello world!\n");
    ptr1 = &x[0];
    ptr2 = (ptr1 + 1);
    printf("ptr1 %u---> \n", ptr1[0]);
    printf("ptr2 %u---> \n", *ptr2);
    printf("ptr1 0x%x \n", ptr1++);
    printf("ptr1 0x%x \n", ++ptr1);
    printf("num + 1 is %u\n", num + 2);
    unsigned int *const ptr3 = &num;
    *ptr3 = x[4];
    *ptr3 = 55 + x[4];
    printf("num + 2 = %u\n",(*ptr3));
    unsigned int (*pptr)[2][20] = {"Ahmed Sayed","Mohamed Ayman"};
    unsigned char names[2][20] = {"Mohammed Ayman","Hamdy Mahmoud"};
    char *Names[2] = {"Mohammed","Ahmed"};
    char *(*pt)[2] = Names;
    unsigned char (*pttr)[20] = names;
    printf("address of the pointer is 0x%x\n", pptr);
    printf("---%s \n", pptr[0]);
    printf("---%c \n", *(pptr[0][0]));
    printf("---%c\n", pttr[1][10]);
    printf("---%s\n", (*pt)[0]);
    printf("---%s\n", (*pt)[1]);
    printf("---%c\n", *((*pt)[0] + 0 ));
    unsigned int v1 = 22, v2 = 99;
    unsigned int Status = 0;
    void (*ptr_print)(void) = print_name;
    unsigned int (*ptr_swap)(unsigned int *, unsigned int *) = Swap;
    printf("v1 is %u and v2 is %u\n", v1, v2);
    ptr_print();
    Status = ptr_swap(&v1, &v2);

    if(0 == Status)
    {
        printf("the function has an error!!\n");
    }
    else
    {
        printf("the function work well\n");

    }
    printf("v1 is %u and v2 is %u\n", v1, v2);

    return 0;
}
void print_name(void)
{
    printf("the name is Mohammed\n");
}
unsigned int Swap(unsigned int *num1, unsigned int *num2)
{
    unsigned int temp = 0;
    if(NULL != num1 || NULL != num2)
    {
         temp = *num1;
        *num1 = *num2;
        *num2 = temp;
        return 1;
    }
    else
    {
        printf("Error!!\n");
        return 0;
    }

}
