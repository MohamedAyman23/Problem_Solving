#include "Network.h"

void Join_Network(void)
{
    printf("connecting to join Network ....\n");
}

void Update_data(unsigned char arr[], unsigned int Length,void (*Ptr_Network_status)(void))
{
    unsigned char count = 0;
        for(count = 0; count < Length ; count++)
        {
            printf("the id card value num %i = %i \n", count, arr[count]);
        }
        Ptr_Network_status();
}
