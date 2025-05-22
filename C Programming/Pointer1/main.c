#include <stdio.h>
#include <stdlib.h>

unsigned int *Return_adress(void);

int main()
{
    char count1;
    unsigned char *ptr4 = NULL;
    unsigned char array[3][3] = {{11,12,13},
                                 {14,15,16},
                                 {17,18,19}};

     ptr4 = array;
     printf("%i \n", *(*(array+2)+1));
     printf("%x\n", (ptr4 + 6));
     for(count1 = 0; count1 < 9 ; count1++)
    {
        printf("%i \n", *(ptr4+count1));
    }
     printf("--------------------------\n");
     char count;
     char Number1 = 33;
     char *ptr1 = &Number1;
     char **ptr2 = &ptr1;
     char *ptr = "Mohammed Ayman Mohammed";
     printf("0x%x \n", ptr2);
     printf("0x%x \n", &ptr1);
     printf("0x%x \n", ptr1);
     printf("0x%x \n", *ptr2);
     printf("0x%x \n", &Number1);
     printf("%i \n", **ptr2);
     printf("%i \n", Number1);
     printf("%i \n", *ptr1);

     printf("--------------------------\n");
     printf("%s \n", (ptr + 0));

    unsigned int *ptr3 = Return_adress();
    printf("0x%x \n", ptr3);
    printf("%i \n", *ptr3);
    printf("%i \n", *(ptr3+1));
    printf("%i \n", *(ptr3+2));
    printf("%i \n", *(ptr3+3));
    printf("%i \n", *(ptr3+4));
    printf("%i \n", *(ptr3+5));
    printf("%i \n", *ptr3);
    printf("--------------------------\n");
    for(count = 0; count < 6 ; count++)
    {
        printf("%i \n", *(ptr3+count));
    }

    return 0;
}
unsigned int *Return_adress(void)
{
    static unsigned int arr[] = {1,2,3,4,5,6};
    return (arr);
}
