#include <stdio.h>
#include <stdlib.h>

typedef union{
unsigned char studentId;
float studentDegree;


}student_t;
enum Days{
Mon = 1,
Tue,
Wed,
Thu = 5,
Fri,
Sat,
San

};
void printenum(enum Days day);
int main()
{
   student_t Ahmed;
   student_t *ptr = &Ahmed;
   enum Days day1 = Mon;
   enum Days day4 = Thu;
   enum Days day5 = Fri;

   ptr->studentDegree = 55.5;
   printf("student degree is = %2.2f\n", ptr->studentDegree);
   (*ptr).studentDegree = 99.9;
   printf("student degree is = %2.1f\n", ptr->studentDegree);
   printf("the Day 1 is = %i\n", day1);
   printf("the Day 1 is = %i\n", day4);
   printf("the Day 1 is = %i\n", day5);
   printenum(day5);
    return 0;
}
void printenum(enum Days day)
{
    //day = Mon;
    printf("the day is = %i\n", day);
}
