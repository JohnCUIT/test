/*===============================================================
*   Copyright (C) 2017 All rights reserved.
*   
*   File Name:	classA.c
*   Creater:		Johnny He
*   Create Date:	2017-08-25
*   Detail:		
*
*   Update Log:	
*
================================================================*/
#include "classA.h"
#include <stdio.h>

void Action2(void);

VirtrulFunc VFunc = {0};

NormalFunc NFunc=
{
    .action2 = Action2,
};

Data data = {0};

void Action2(void)
{
    if (NULL != VFunc.action1)
    {
	VFunc.action1();
    }
    printf("this is ClassA::Action2.\n");
}

void getClassA(ClassA *a)
{
    a->vfunc = VFunc;
    a->nfunc = NFunc;
    a->mdata = data;
}
