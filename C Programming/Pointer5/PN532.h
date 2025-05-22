#ifndef _PN532_H_
#define _PN532_H_

unsigned char Get_Reading(unsigned char arr[], unsigned int Length, void (*ptr)(void));
void Network_status(void);
#endif // _PN532_H_
