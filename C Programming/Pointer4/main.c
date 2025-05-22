#include <stdio.h>
#include <stdlib.h>
void *my_memset(void *startaddress, unsigned char value, unsigned int Length);
void *my_memcpy(void *destination, const void *source, unsigned int Length);
int my_memcmp(const void *destination, const void *source, unsigned int Length);
int main()
{
    char Numbers[30];
    char Num2[30];
    char Num1[5] ={1, 2, 3, 4, 5};
    char Num3[5] ={1, 2, 3, 4, 5};

    my_memset(Numbers, '*', 30);
    printf("%s \n", Numbers);
    my_memcpy(Num2, Numbers, 30);
    printf("%s -->\n", Num2);

    unsigned char status = my_memcmp(Num1, Num3, 5);
    printf("status = %i \n", status);

    return 0;
}
void *my_memset(void *startaddress, unsigned char value, unsigned int Length)
{
    unsigned char *Tempstartaddress = startaddress;
    if(NULL == Tempstartaddress)
    {
        printf("Function failed \n");
    }
    else
    {
        while(Length--)
        {
            *Tempstartaddress++ = value;
        }
    }
    return (startaddress);
}

void *my_memcpy(void *destination, const void *source, unsigned int Length)
{
    unsigned char *Tempdestination = destination;
    unsigned char *Tempsource = source;
     if((NULL == destination) || (NULL == source))
    {
        printf("Function failed due to NULL pointer \n");
    }
    else
    {
        while(Length--)
        {
            *Tempdestination++ = *Tempsource++;
        }
    }
    return (destination);

}

int my_memcmp(const void *destination, const void *source, unsigned int Length)
{
    unsigned char *Tempdestination = destination;
    unsigned char *Tempsource = source;
    unsigned char Retstatus = 0;

    if((NULL == destination) || (NULL == source))
    {
        printf("Function failed due to NULL pointer \n");
    }
    else
    {
        if(Tempdestination == Tempsource)
        {
           Retstatus = 0;
        }
        else
        {
            while(Length)
            {
                if((*Tempdestination) != (*Tempdestination))
                {
                    Retstatus = ((*Tempdestination) < (*Tempdestination)) ? -1 : 1;
                    break;
                }
                else
                {
                    Length--;
                    Tempdestination++;
                    Tempdestination++;
                }
            }
        }
    }
    return (Retstatus);
}

