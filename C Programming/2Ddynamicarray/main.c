#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int **ptr = NULL;
    unsigned int row_num = 0;
    unsigned int column_num = 0;
    unsigned int counter = 0;
    unsigned int counter1 = 0;
    printf("Enter the rows Numbers !!\n");
    scanf("%u", &row_num);
    printf("Enter the column Numbers !!\n");
    scanf("%u", &column_num);
    ptr = (unsigned int **)malloc(row_num * sizeof(unsigned int *));
    for(counter = 0; counter < column_num; counter++)
    {
       ptr[counter] = (unsigned int *)malloc(column_num * sizeof(unsigned int ));
    }
    for(counter = 0; counter < row_num; ++counter)
    {
        for(counter1 = 0; counter1 < column_num; ++counter1)
        {
            ptr[counter][counter1] = 0x11;
        }
    }
    for(counter = 0; counter < row_num; ++counter)
    {
        for(counter1 = 0; counter1 < column_num; ++counter1)
        {
            printf("The value of row %u and column %u is = %x\n", counter, counter1, ptr[counter][counter1]);
        }
        printf("\n");
    }
    for(counter = 0; counter < row_num; counter++)
    {
        free(ptr[counter]);
    }
    free(ptr);
    return 0;
}
