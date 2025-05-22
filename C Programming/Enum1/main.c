#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef enum Day
{
    sat = 1,
    san,
    mon,
    tue,
    wed,
    thu,
    fri
}days;
enum Day day1 = sat;        /* we can access enum's members by create
                               object and assigned the value to it,
                                not the same as th struct and union   */
enum Day day2 = san;
enum Day day3 = mon;
enum Day day4 = tue;
enum Day day5 = wed;
enum Day day6 = thu;
enum Day day7 = fri;
days friday = fri;
days saturday = sat;
days sunday = san;
days monday = mon;
days tuesday = tue;


union uin {

char array[15];
char val1;
char val2;
char val3;

}mohamed;
typedef union student{

char array[15];
char val1;
char val2;
char val3;


}student_t;
student_t sami;
union student rami;

int main()
{
    days Days = 0;

    mohamed.val1= 22;
    union uin ahmed;
    ahmed.val2 = 55;
    rami.val2 = 77;
    strcpy(sami.array,"Sami Ahmed ");

    printf("%i \n", mohamed.val1);
    printf("%i \n", ahmed.val2);
    printf("%i \n", rami.val2);
    printf("%s \n", sami.array);
    printf("-----------------------\n");
    printf("%i \n", day1);
    printf("%i \n", day2);
    printf("%i \n", day3);
    printf("%i \n", day4);
    printf("%i \n", day5);
    printf("%i \n", day6);
    printf("%i \n", day7);
    printf("%i \n", friday);
    printf("%i \n", monday);
    for(Days = sat; Days <= fri; Days++)
    {
        printf("day = %i \n", Days);
    }


    return 0;
}
