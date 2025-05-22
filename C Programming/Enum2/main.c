#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef enum
{
    sat,
    san,
    mon,
    tue,
    wed,
    thu,
    fri
}weak_days;
weak_days day;

void print_weakday(weak_days daynum);
int main()
{
    print_weakday((day = fri));
    return 0;
}
void print_weakday(weak_days daynum)
{
    switch(daynum)
    {

        case sat: printf("the day is saterday\n");
        break;
        case san: printf("the day is sanday\n");
        break;
        case mon: printf("the day is Monday\n");
        break;
        default: printf("Invalid Day\n");
        break;
    }
}
