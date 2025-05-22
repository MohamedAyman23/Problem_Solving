/* 2D array by using dynamic memory allocation Calloc function */
#include <stdio.h>
#include <stdlib.h>
unsigned int **ptr = NULL;
unsigned int rows_num = 0;
unsigned int columns_num = 0;
unsigned int num = 0;
int main()
{
    unsigned int i = 0,j = 0;
    printf("Enter the number of rows :");
    scanf("%i",&rows_num);
    fflush(stdin);
    printf("Enter the number of columns :");
    scanf("%i",&columns_num);
    ptr = (unsigned int **)calloc(rows_num, sizeof(unsigned int *));
    if(NULL != ptr)
    {
        for(i = 0; i < rows_num; i++)
        {
            *(ptr + i) = (unsigned int *)calloc(columns_num, sizeof(unsigned int));

        }
    }
    else
    {
        printf("Calloc function failed to allocate memory\n");
    }
    for(i = 0; i < rows_num; i++)
    {
        for(j = 0; j < columns_num; j++)
        {
            *(*(ptr + i) + j) = (++num);
        }
    }
    for(i = 0; i < rows_num; i++)
    {
        for(j = 0; j < columns_num; j++)
        {
            printf("%i\t",(*(*(ptr + i) + j)));
        }
        printf("\n");
    }
    for(j = 0; j < columns_num; j++)
    {
        free(ptr[j]);
    }
    free(ptr);

    return 0;
}
