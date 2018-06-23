/*===============================================================
*   Copyright (C) 2017 All rights reserved.
*   
*   File Name:	factory.c
*   Creater:		Johnny He
*   Create Date:	2017-10-26
*   Detail:		
*
*   Update Log:	
*
================================================================*/
#include <stdio.h>
#include <stdlib.h>
#include "factory.h"

Operation* CreateAddOperation()
{
    Operation* oper = (Operation*)malloc(sizeof(Operation));
    if (NULL != oper)
    {
	oper->numA = 0;
	oper->numB = 0;
	oper->GetResult = GetAddResult;
    }
    else
    {
	printf("CreateAddOperation failed!\n");
    }
    return oper;
}

Operation* CreateSubOperation()
{
    Operation* oper = (Operation*)malloc(sizeof(Operation));
    if (NULL != oper)
    {
	oper->numA = 0;
	oper->numB = 0;
	oper->GetResult = GetSubResult;
    }
    else
    {
	printf("CreateSubOperation failed!\n");
    }
    return oper;
}
Operation* CreateMulOperation()
{
    Operation* oper = (Operation*)malloc(sizeof(Operation));
    if (NULL != oper)
    {
	oper->numA = 0;
	oper->numB = 0;
	oper->GetResult = GetMulResult;
    }
    else
    {
	printf("CreateMulOperation failed!\n");
    }
    return oper;
}
Operation* CreateDivOperation()
{
    Operation* oper = (Operation*)malloc(sizeof(Operation));
    if (NULL != oper)
    {
	oper->numA = 0;
	oper->numB = 0;
	oper->GetResult = GetDivResult;
    }
    else
    {
	printf("CreateDivOperation failed!\n");
    }
    return oper;
}

Factory* GetAddFactory()
{
    Factory* fac = (Factory*)malloc(sizeof(Factory));
    if (NULL != fac)
    {
	fac->CreateOperation = CreateAddOperation;
    }
}
Factory* GetSubFactory()
{
    Factory* fac = (Factory*)malloc(sizeof(Factory));
    if (NULL != fac)
    {
	fac->CreateOperation = CreateSubOperation;
    }
}
Factory* GetMulFactory()
{
    Factory* fac = (Factory*)malloc(sizeof(Factory));
    if (NULL != fac)
    {
	fac->CreateOperation = CreateMulOperation;
    }
}
Factory* GetDivFactory()
{
    Factory* fac = (Factory*)malloc(sizeof(Factory));
    if (NULL != fac)
    {
	fac->CreateOperation = CreateDivOperation;
    }
}
