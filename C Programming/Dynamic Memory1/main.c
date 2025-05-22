#include <stdio.h>
#include <stdlib.h>
void GET_value(unsigned int *ptr, unsigned int num);
void print_ptr(unsigned int *ptr, unsigned int num);
unsigned int *ptr = NULL;
unsigned int num =0;

int main()
{

    printf("Enter the number of elements : ");

    scanf("%i", &num);

    printf("%i \n", num);
    ptr = (unsigned int *)malloc((num*sizeof(unsigned int)));
    printf("%i\n", num);
    GET_value(ptr, num);
    print_ptr(ptr, num);
    return 0;
}
void print_ptr(unsigned int *ptr, unsigned int num)
{
    unsigned int i = 0;
    if( NULL != ptr )
    {
        for( i = 0; i < (num); i++)
        {
            printf("0x%i \n", *(ptr + i));
        }
        free(ptr);
        printf("%i \n", *(ptr));/* Garbaga value stored in *ptr */
    }
    else
    {
        printf("Error !!\n");
    }
}
void GET_value(unsigned int *ptr, unsigned int num)
{
    unsigned int i =0;
    if( NULL != ptr )
    {
        for( i = 0; i < (num); i++)
        {

            printf("Enter the value : %i \n", i);
            fflush(stdin);
            scanf("%i", (ptr + i));


        }

    }
    else
    {
        printf("Error !!\n");
    }

}
