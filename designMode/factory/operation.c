/*===============================================================
*   Copyright (C) 2017 All rights reserved.
*   
*   File Name:	operation.c
*   Creater:		Johnny He
*   Create Date:	2017-10-26
*   Detail:		
*
*   Update Log:	
*
================================================================*/
#include <stdio.h>
#include <stdlib.h>
#include "operation.h"

int GetAddResult(void* this)
{
    return ((Operation*)this)->numA + ((Operation*)this)->numB;
}

int GetSubResult(void* this)
{
    return ((Operation*)this)->numA - ((Operation*)this)->numB;
}

int GetMulResult(void* this)
{
    return ((Operation*)this)->numA * ((Operation*)this)->numB;
}

int GetDivResult(void* this)
{
    return ((Operation*)this)->numA / ((Operation*)this)->numB;
}
