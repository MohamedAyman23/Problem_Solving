#ifndef _STACK_H_
#define _STACK_H_
#include "Platform_Types.h"


#define ZERO o
#define MAX_SIZE 5


typedef struct
{
    uint32 Stack_pointer;
    uint32 data[MAX_SIZE];

}stack_ds_t;
typedef enum
{
    STACK_EMPTY = 0,
    STACK_FULL = 1,
    STACK_NOT_FULL =0

}Stack_status_t;

typedef enum
{
    R_NOk,
    R_OK

}Ret_status;


/**
  * @brief   Initialization of stack based on array
  * @param  (stack_ds_t *stack1) pointer to stack array
  * @retval  Ret_status return if functionality is done or not
  */
Ret_status Stack_init(stack_ds_t *stack1);

/**
  * @brief   Stack_push of stack based on array
  * @param  (stack_ds_t *stack1) pointer to stack array
  * @retval  Ret_status return if functionality is done or not
  */

Ret_status Stack_push(stack_ds_t *stack1, uint32 value);
/**
  * @brief   Stack_pop of stack based on array
  * @param  (stack_ds_t *stack1) pointer to stack array
  * @retval  Ret_status return if functionality is done or not
  */
Ret_status Stack_pop(stack_ds_t *stack1, uint32 *value);
/**
  * @brief   Stack_display of stack based on array
  * @param  (stack_ds_t *stack1) pointer to stack array
  * @retval  Ret_status return if functionality is done or not
  */
Ret_status Stack_display(stack_ds_t *stack1);
/**
  * @brief   Stack_Top of stack based on array
  * @param  (stack_ds_t *stack1) pointer to stack array
  * @retval  Ret_status return if functionality is done or not
  */
Ret_status Stack_Top(stack_ds_t *stack1, uint32 *value);
/**
  * @brief   Stack_display of stack based on array
  * @param  (stack_ds_t *stack1) pointer to stack array
  * @retval  Ret_status return if functionality is done or not
  */
Ret_status Stack_Size(stack_ds_t *stack1, uint32 *value);







#endif // _STACK_H_
