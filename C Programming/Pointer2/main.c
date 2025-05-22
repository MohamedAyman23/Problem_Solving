#include <stdio.h>
#include <stdlib.h>
#define NUMBERS2_1D_SIZE 4
#define NUMBERS2_2D_SIZE 3
int main()
{
    unsigned int Numbers_2[NUMBERS2_1D_SIZE][NUMBERS2_2D_SIZE] = {{11, 22, 33},
                                                              {88, 88, 88},
                                                              {44, 55, 66},
                                                              {77, 88, 99}};

    unsigned int Arr_Number1[3] = {11, 22, 33};
    unsigned int Arr_Number2[3] = {44, 55, 66};
    unsigned int *const PtrArr[2] = {&Arr_Number1[0], &Arr_Number2[0]};

    printf("0x%x \n", PtrArr[0]);
    printf("0x%x \n", Arr_Number1);
    printf("%i \n", *PtrArr[0]);
    printf("%i \n", Arr_Number1[0]);
    printf("%i \n", *(PtrArr[0] + 1));
    printf("%i \n", *(PtrArr[0] + 2));
    printf("%i \n", Arr_Number1[1]);
    printf("%i \n", Arr_Number1[2]);



    printf("--------------------------\n");
    char *Name1[1] = {"Ahmed Abd El-Ghafar"};
    char *Names[2] = {"Mohammed Ayman","Mohammed Attia"};
    printf("%s \n", Names[0]);
    printf("%s \n", (Names[1]));
   // printf("%i \n", *(arr[0]+1));
    printf("%c \n", *(Name1[0]+10));

     printf("--------------------------\n");
     printf("--------------------------\n");
     printf("--------------------------\n");

    unsigned int Numbers[2][3] = {{11, 22, 33}, {44, 55, 66}};
    unsigned int (*PtrNumbers)[3] = Numbers;
    printf("Value = %x \n", *(*PtrNumbers));
    printf("Value = %i \n", *(*(PtrNumbers+1)+2));
    printf("Value = %i \n", *PtrNumbers[0]);
    printf("Value = %i \n", *(PtrNumbers[0]));
    PtrNumbers++;
    printf("Value = %i \n", *(*PtrNumbers));
    printf("Value = %i \n", *PtrNumbers[0]);
    printf("Value = %i \n", *(PtrNumbers[0]));
    printf("Value = %i \n", *(PtrNumbers[0] + 1));
    printf("Value = %i \n", *(PtrNumbers[0] + 2));
    printf("Value = %i \n", *PtrNumbers[0] + 1);

    char Names_2D[2][20] = {"Ahmed Abd El-Ghafar","Mohammed Sayed"};
    char (*Ptr)[20] = Names_2D;
    char (*PtrNames_2D_1)[2][20] = Names_2D;


    printf("---------------------\n");
    printf("---------------------\n");

    printf("%c \n", *(PtrNames_2D_1[0][0]));
    printf("%c \n", *(PtrNames_2D_1[0][0] + 1));
    printf("%c \n", *(PtrNames_2D_1[0][1] + 0));
    printf("%c \n", *(PtrNames_2D_1[0][1] + 1));
    printf("---------------------\n");
    printf("---------------------\n");
    printf("%i \n", (*(&Arr_Number1 + 1) - Arr_Number1));



    return 0;
}
