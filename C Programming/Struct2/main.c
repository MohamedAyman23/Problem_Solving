#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char father_age;
    char mother_age;
}family;

typedef struct student
{
        family person;
        struct student *ptr;
        char slow_speed;
        char time;
        char length;
}str2;

str2 ahmed, mohamed;


int main()
{

    mohamed.person.father_age = 55;
    ahmed.person.father_age = 66;
    ahmed.person.mother_age = 50;
    ahmed.length = 44;
    ahmed.slow_speed = 60;
    ahmed.time = 9;
/*
    printf("--------------------------------\n");
    printf("student's father age %i \n", ahmed.person.father_age);
    printf("student's mother age %i \n", ahmed.person.mother_age);
    printf("student's length     %i \n", ahmed.length);
    printf("student's wake up    %i \n", ahmed.time);
*/
    printf("--------------------------------\n");
    mohamed.ptr = &ahmed;
    ahmed.ptr = &mohamed;
    printf("%i \n",ahmed.ptr->ptr->person.father_age);
    printf("%i \n",ahmed.ptr->person.father_age);
    printf("--------------------------------\n");





    return 0;
}
