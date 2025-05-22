#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct students{
    char studentName[30];
    float studentDegree;
    unsigned short studentId;
};
typedef struct{
char fatherName[30];
char MotherName[30];

}student_details;
typedef struct student{
    student_details student_det;
    char studentName[30];
    float studentDegree;
    unsigned short studentId;
}student_t;//typedef make the code more clean...

typedef struct {
    unsigned char pin0 :1;
    unsigned char pin1 :1;
    unsigned char pin2 :1;
    unsigned char pin3 :1;
    unsigned char pin4 :1;
    unsigned char pin5 :1;
    unsigned char pin6 :1;
    unsigned char pin7 :1;
}port;
typedef union{
    struct {
    unsigned char pin0 :1;
    unsigned char pin1 :1;
    unsigned char pin2 :1;
    unsigned char pin3 :1;
    unsigned char pin4 :1;
    unsigned char pin5 :1;
    unsigned char pin6 :1;
    unsigned char pin7 :1;
    }Pins;
    unsigned char AllPort;
}port_t;
student_t *getstudentdata(student_t *student);
// student_t is an alias name
unsigned char name[20] = "mohamed ayman";
extern unsigned NumberOne;
extern void printName(void);
int main()
{
    struct students Rami = {
        .studentName = "Rami Ali",
        .studentDegree = 3.5,
        .studentId = 233
    };//not recommended
    struct students Ali ={"Ali", 3.7, 23};
    student_t Ahmed;
    student_t *pttr;
    pttr = getstudentdata(&Ahmed);
    printf("the student name is %s\n", Ali.studentName);
    printf("the student degree is %0.2f \n", Ali.studentDegree);
    printf("the studentId is %u \n", Ali.studentId);
    Ali.studentName[30] = "AliMohammed";/*not recommended illegal*/
    Ali.studentDegree =4;
    Ali.studentId = 222;
    student_t Mohamed ={"Mohammed Amyan", 33.33, 332};

    printf("the student name is %s\n", Ali.studentName);
    printf("the student degree is %0.2f \n", Ali.studentDegree);
    printf("the studentId is %u \n", Ali.studentId);
    strcpy(Ali.studentName, "Ali Ahmed");/*the legal method*/
    printf("the student name is %s \n", Ali.studentName);
    printf("Hello world!\n");
    printf("the number is %i\n", NumberOne);
    printf("the student name is %s\n", Rami.studentName);
    printName();
    student_t *ptr = NULL;
    ptr = &Rami;
    ptr->studentDegree = 55.66;
    ptr->studentId = 232;
    strcpy(ptr->studentName, "Rami mohammed");
    printf("the student name is %s\n", Rami.studentName);
    printf("the student degree is %0.2f \n", Rami.studentDegree);
    printf("the studentId is %u \n", Rami.studentId);
    student_t students[2]= {{"Mohammed", 77.33, 899},{"Hesham", 88.4, 843}};
    students[0].studentDegree = 89.3;
    students[1].studentDegree = 99;
    port pins;
    pins.pin0 = 0;
    pins.pin1 = 1;
    port_t Port;
    Port.AllPort = 0x00;
    Port.Pins.pin0 =0x1;
    Port.Pins.pin1 = 0x2;
    student_t Sara;
    strcpy(Sara.student_det.fatherName, "Ahmed Ali");
    strcpy(Sara.student_det.MotherName, "Mona mohamed ayman");

    return 0;
}
student_t *getstudentdata(student_t *student)
{
    student_t *ptr = NULL;
    student->studentDegree = 55.5;
    strcpy(student->studentName, "Ahmed Mohammed");
    student->studentId =2321;
    ptr = student;
    return ptr;

}
