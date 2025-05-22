#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Names[2][10] = {"Mohammed","Ayman  "};
    char (*ptr)[10] = Names;
    char (*ptr1)[2][10] = &Names;

    printf("%c \n", (ptr[0][0]));

    printf("%c \n", *(*(ptr + 1) + 2));

    printf("%c \n", ((*ptr1)[1][2]));

    return 0;
}
