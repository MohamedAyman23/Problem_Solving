#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma pack(1)
struct student
{
    float student_degree;
    char student_name[40];
    unsigned int student_id;
};
#pragma pack(1)

typedef struct student_t1{
    float student_degree;
    char student_name[40];
    unsigned int student_id;

}student_t2;
student_t2 *student_data(void);
void print_data(student_t2 *ptr1);

int main()
{

    student_t2 *ptr = NULL;

    ptr = student_data();

    print_data(ptr);
    return 0;
}
void print_data(student_t2 *ptr1)
{
    printf("Student name is = %s\n", ptr1->student_name);
    printf("Student degree is = %4.2f\n", ptr1->student_degree);
    printf("Student id is = %i\n", ptr1->student_id);
    printf("--------------------------------\n");

}
student_t2 *student_data(void)
{
    static student_t2 person;
    printf("Enter student Name \n");
    gets(person.student_name);
    printf("Enter student Degree \n");
    scanf("%f", &(person.student_degree));
    printf("Enter student ID \n");
    scanf("%i", &(person.student_id));
    return &(person);
}
