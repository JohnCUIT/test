/*===============================================================
*   Copyright (C) 2017 All rights reserved.
*   
*   File Name:	main.c
*   Creater:		Johnny He
*   Create Date:	2017-08-25
*   Detail:		
*
*   Update Log:	
*
================================================================*/
#include "classA.h"

int main()
{
    ClassA a;
    getClassA(&a);
    a.nfunc.action2();

    return 0;
}
