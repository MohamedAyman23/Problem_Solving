#include "PN532.h"

unsigned char Get_Reading(unsigned char arr[], unsigned int Length, void (*ptr)(void))
{
    printf("Every things is so good \n");
    Update_data(arr, Length, Network_status);
    ptr();
}
void Network_status(void)
{
    printf("the Network connection is done \n");
}
