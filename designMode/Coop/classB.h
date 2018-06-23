/*===============================================================
*   Copyright (C) 2017 All rights reserved.
*   
*   File Name:	classB.h
*   Creater:		Johnny He
*   Create Date:	2017-08-25
*   Detail:		
*
*   Update Log:	
*
================================================================*/
#ifndef __CLASSB_H_
#define __CLASSB_H_
#include "classA.h"

typedef struct
{
}VirtrulFunc;

typedef struct
{
    void (*action2)(void);
}NormalFunc;

typedef struct
{
    int id_B;
}Data;

typedef struct
{
    VirtrulFunc vfunc;
    NormalFunc nfunc;
    Data mdata;
}ClassB;

#endif //__CLASSB_H_

