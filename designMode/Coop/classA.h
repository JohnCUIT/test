/*===============================================================
*   Copyright (C) 2017 All rights reserved.
*   
*   File Name:	classA.h
*   Creater:		Johnny He
*   Create Date:	2017-08-25
*   Detail:		
*
*   Update Log:	
*
================================================================*/
#ifndef __CLASSA_H_
#define __CLASSA_H_

typedef struct
{
    void (*action1)(void);
}VirtrulFunc;

typedef struct
{
    void (*action2)(void);
}NormalFunc;

typedef struct
{
    int id;
}Data;

typedef	struct
{
    VirtrulFunc vfunc;
    NormalFunc nfunc;
    Data mdata;
}ClassA;

void getClassA(ClassA *a);

#endif //__CLASSA_H_

