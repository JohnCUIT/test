/*===============================================================
*   Copyright (C) 2017 All rights reserved.
*   
*   File Name:	main.c
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
#include "operation.h"



int main(int argc, char* argv[])
{
    int res = 0;
    Factory* fac = GetSubFactory();
    Operation* oper = fac->CreateOperation();
    oper->numA = 12;
    oper->numB = 4;
    res = oper->GetResult((void*)oper);
    printf("res = %d\n", res);
}
