#include <stdio.h>
#include <stdlib.h>

#include "PN532.h"
unsigned char array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9 , 10};
void Get_pn_reading(void);
int main()
{
    Get_Reading(array, 10, Get_pn_reading);

    return 0;
}
void Get_pn_reading(void)
{
    printf("PN Reading is ok \n");
}
