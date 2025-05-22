#include <stdio.h>
#include <stdlib.h>
#define TEST(x) (!((x)&((x)-1)))
struct status
{
    unsigned int set1:3;
    unsigned int      :4;
    unsigned int set2 :3;
} current;
int main()
{
    int var = 5;
    int x = 0xFE;
    var = TEST(0);
    char array[][10]= {"apple"
                       ,"Orang"
                       ,"Banana"
                      };
    const char * pointer = array[0];
    printf("%d\n", sizeof(array[1]));
    printf("%d\n", sizeof(array));
    printf("%d\n", var);
    printf("Hello world!\n");
    current.set1 = 15;
    current.set1 = current.set1 >> 2;
    printf("%d\n", current.set1);
    printf("%d\n", x);
    printf("what is the \\f \f\n");
    printf("my number is 01028869317\n");
    printf("welcome mido\b ayman\b\n");
    printf("welcome mido ayman\r\n");
    int num1 = 5,num2 = 4;
    printf("%i\n", ++num1);//preincrement is executed first and then the printf function
    printf("%i\n", num1++);
    printf("%i\n", num1);
    int a = printf("the result is = %i\n",(num1 != num2));
    int b = printf("%i\n",a);
    printf("%i\n",b);
    char c = '\0';
    printf("Enter the char to check it\n");
    scanf("%c", &c);
    int islower, isuper;
    islower = (c=='a'|| c == 'i' || c == 'u' || c == 'o' || c == 'e');// return either true 1 or false 0
    isuper = (c=='A'|| c == 'I' || c == 'U' || c == 'O' || c == 'E');// not return value it is just a condition operator
    if(islower || isuper)
        printf("the char %c is vowel\n", c);
    else
        printf("the char %c is not vowel\n", c);
    switch(c)
    {
        case 'a' :
            printf("the char is vowel\n");
            printf("the char is %c\n", c);
            break;
        case 'i' :
            printf("the char is vowel\n");
            printf("the char is %c \n", c);
            break;
        default :
            printf("the char is not vowel\n");
    }
    return 0;
}
