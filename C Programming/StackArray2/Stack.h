#ifndef STACK_H
#define STACK_H
#include "patformS_Types.h"

typedef struct
{
    void **StackArray;
    uint32 elementcount;
    uint32 StackMaxSize;
    sint32 StackTop;

}stack_t;
typedef enum
{
    STACK_NOK,
    STACK_OK,
    STACK_EMPTY,
    STACK_FULL,
    STACK_NULL_POITER

}StackStatus_t;



#endif // STACK_H
