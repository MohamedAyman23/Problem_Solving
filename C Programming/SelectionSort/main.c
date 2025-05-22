#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10
void Selection_Sort(unsigned int my_data[], unsigned int array_length);
void swap_2elemnts(unsigned int *Num1, unsigned int *Num2);
void print_data(unsigned int my_data[],unsigned int array_length);
unsigned int my_data[MAX_SIZE] = {5, 2, 9, 4, 8, 6, 1, 7, 10, 3};
int main()
{
    print_data(my_data, MAX_SIZE);
    Selection_Sort(my_data, MAX_SIZE);
    print_data(my_data, MAX_SIZE);
    return 0;
}
void Selection_Sort(unsigned int my_data[], unsigned int array_length)
{
    unsigned int iteration_counter = 0;
    unsigned int comparsion_counter = 0;
    unsigned int minelem_index = 0;
    for(iteration_counter = 0; iteration_counter < array_length - 1 ; iteration_counter++)
    {
        minelem_index = iteration_counter;
        for(comparsion_counter = iteration_counter + 1; comparsion_counter < array_length; comparsion_counter++)
        {
           if(my_data[comparsion_counter] < my_data[minelem_index])
           {
               minelem_index = comparsion_counter;
           }

        }
        swap_2elemnts(&my_data[minelem_index], &my_data[iteration_counter]);
    }
}
void swap_2elemnts(unsigned int *Num1, unsigned int *Num2)
{
    unsigned int Temp = *Num1;
    *Num1 = *Num2;
    *Num2 = Temp;
}
void print_data(unsigned int my_data[],unsigned int array_length)
{
    unsigned int i = 0;
    for(i = 0 ; i < array_length; i++)
    {
        printf("%i \t", my_data[i]);
    }
    printf("\n");
}
