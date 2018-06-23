/*===============================================================
*   Copyright (C) 2017 All rights reserved.
*   
*   File Name:	operation.h
*   Creater:		Johnny He
*   Create Date:	2017-10-26
*   Detail:		
*
*   Update Log:	
*
================================================================*/
#ifndef __OPERATION_H_
#define __OPERATION_H_

typedef struct
{
    int numA;
    int numB;
    int (*GetResult)(void* this);
}Operation;


int GetAddResult(void* this);
int GetSubResult(void* this);
int GetMulResult(void* this);
int GetDivResult(void* this);

#endif //__OPERATION_H_

