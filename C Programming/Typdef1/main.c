#include <stdio.h>
#include <stdlib.h>
unsigned int printfun1(void);
unsigned int printfun2(void);
unsigned int printfun3(void);
unsigned int printfun4(void);
unsigned int (*(*ptr(void))[4])(void);  /* ptr function take void and return pointer to array of
                                            4 elements each element is pointer to funcuion which take
                                              void and return unsigned int */

unsigned int (*ptrReturnfuncion[4])(void) = {printfun1, printfun2, printfun3, printfun4};
unsigned int (*(*myfunction(void))[4])(void);


int main()
{

    unsigned int (*(*ptrmain)[4])(void) = myfunction();/*  pointer to array of
                                            4 elements each element is pointer to funcuion which take
                                              void and return unsigned int */
    printf("%i \n", (*ptrmain)[0]());
    printf("%i \n", (*ptrmain)[1]());
    printf("%i \n", (*ptrmain)[2]());
    printf("%i \n", (*ptrmain)[3]());
    printf("------------------------\n");
    printf("%i \n", (*ptrReturnfuncion[0])());
    printf("%i \n", (*ptrReturnfuncion[1])());
    printf("%i \n", (*ptrReturnfuncion[2])());
    printf("%i \n", (*ptrReturnfuncion[3])());

    return 0;
}
unsigned int (*(*myfunction(void))[4])(void)
{
    unsigned int (*(*localptr)[4])(void) = &ptrReturnfuncion;
    return (localptr);

}
unsigned int printfun1(void)
{
    return 11;
}
unsigned int printfun2(void)
{
    return 22;
}
unsigned int printfun3(void)
{
    return 33;
}
unsigned int printfun4(void)
{
    return 44;
}

