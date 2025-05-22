#include <stdio.h>
#include <stdlib.h>
#include "motor.h"

#define SIZE 5
#define MY_NAME "Mohamed Ayman"
#define MY_AGE 23
#define SWAAP(X, Y) \
{\
X = X ^ Y; \
Y = X ^ Y; \
X = X ^ Y; \
}

void printarray(unsigned array[SIZE],unsigned int arr_len);
void *my_memset(void *ptr, int value, unsigned int len);
void *my_memcpy(void *ptr1, void *ptr2, unsigned int count);
int main()
{
    unsigned int myarray[2][2]={{11, 12},
                                {13, 14}};
    unsigned int array[SIZE] = {11, 22, 33, 44, 55};
    char *Names[2] = {"Mohamed", "Ayman"};
    char names[2][10] = {"Mohamed", "Ayman"};
    unsigned char name[30] = {"Mohamed Aymanmmmmmmmm"};
    unsigned char name2[30];
    char (*ptr)[10] = NULL;
    char (*ptr2)[2][10] = NULL;// is equal to char *(*ptr)[10] = NULL;
    unsigned int index_num1 = 0;
    unsigned int index_num2 = 0;
    unsigned int arraysize = 2;
    unsigned int x = 5, y = 8;
    printf("Hello world!\n");
    motor_forward_move();
    printf("my name is %s\n", MY_NAME);
    printf("my age is %i\n", MY_AGE);
    printf("x = %i and y = %i\n",x ,y);

    SWAAP(x, y);
    printf("x = %i and y = %i\n",x ,y);
    printf("Enter the new values of the array elements \n");
    /*for(index_num1 = 0; index_num1 < arraysize; index_num1++)
    {
        for(index_num2 = 0; index_num2 < arraysize; index_num2++)
        {
            scanf("%i", &myarray[index_num1][index_num2]);
        }
    }
    for(index_num1 = 0; index_num1 < arraysize; index_num1++)
    {
        for(index_num2 = 0; index_num2 < arraysize; index_num2++)
        {
            printf("%i\t", myarray[index_num1][index_num2]);
        }
        printf("\n");
    }*/

    ptr = names;
    ptr2 = names;
    printf("%c\n", *(*(Names + 1) + 4));
    printf("%c\n", *(ptr[0] + 6));
    printf("%s\n", (*ptr2)[0]);
    printf("%c\n", *((*(*ptr2) + 0)+ 0));// pointer to an array of 10 elements 2d array

    printarray(array, SIZE);
    my_memset(name + 15,'*', 5);
    printf("the name is %s\n", name);
    my_memcpy(name2, name, 5);
    printf("the name2 is %s\n", name2);
    return 0;
}

void printarray(unsigned array[SIZE],unsigned int arr_len)
{
    unsigned int index = 0;
    if(NULL == array)
    {
        printf("Error NULL pointer!!\n");
    }
    else
    {
        for(index = 0; index < SIZE; index++)
        {
            printf("the value %i is = %i\n", index + 1, array[index]);
        }
    }
}

void *my_memset(void *ptr, int value, unsigned int len)
{
    unsigned char *temp = ptr;
    if(NULL == ptr)
    {
        printf("Error NULL pointer!!\n");

    }
    else
    {
        while(len--)
        {
            *temp++ =(unsigned char)value;
        }
    }
    return ptr;
}
void *my_memcpy(void *ptr1, void *ptr2, unsigned int count)
{
   unsigned char *temp1 = (unsigned char*)ptr1;
   unsigned char *temp2 = (unsigned char*)ptr2;
   if(NULL == ptr1 || NULL == ptr2)
   {
       printf("Error NULL pointer!!\n");
   }
   else
   {
       while(count--)
       {
           *(temp1++) = *(temp2++);
       }
   }
   return ptr1;
}
