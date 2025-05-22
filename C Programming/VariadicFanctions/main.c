#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h> /* library to make the variadic functions that take one fixed parameter and the other parameters ...*/
int sum(int count, ...)
{
    int summ = 0;
    va_list(ptr);/*list pointer to the  parameters of the function*/
    va_start(ptr, count);/* count is the number of the parameters*/
    int i = 0;
    for(i = 0; i < count ; i++)
        summ += va_arg(ptr, int);

    va_end(ptr);/*end the pointer ptr that point to the parameters*/
    return summ;
}

int main()
{
    int ret = 0;
    ret = sum(3, 2, 4, 5);
    printf("%i \n", ret);

    return 0;
}
