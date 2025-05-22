#include <stdio.h>
#include <stdlib.h>
unsigned int *ptr = NULL;
unsigned int arr_size = 0;
unsigned int count = 0;
int main()
{
    printf("Enter size of array :");
    scanf("%i", &arr_size);
    ptr = (unsigned int *)calloc( arr_size, sizeof(unsigned int));
    if(NULL != ptr)
    {
        for(count = 0; count < arr_size; count++)
        {
            ptr[count]= count;
        }
        for(count = 0; count < arr_size; count++)
        {
            printf("The value num %i is = %i \n", count, (ptr[count]));
        }
        free(ptr);
    }
    else
    {
        printf("Valid pointer there is an error !!\n");
    }


    return 0;
}
