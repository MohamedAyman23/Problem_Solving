#include <stdio.h>
#include <stdlib.h>
unsigned int funcionptr(void);
typedef unsigned int (*ptrfunction)(void);
typedef ptrfunction (*pptr)[4];
int main()
{
    ptrfunction ptrr = funcionptr;
    ptrfunction array[4];      /* array of 4 elements each
                                  one is a pointer to function*/
    printf("%i \n", ptrr());
    ptrfunction (*ptr)[4];

    printf("---------------\n");
    pptr pttr;                /* pointer to array of 4 elements
                                 each one is a pointer to function*/

    return 0;
}
unsigned int funcionptr(void)
{
    return 99;
}
