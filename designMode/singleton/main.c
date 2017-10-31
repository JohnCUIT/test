/*===============================================================
*   Copyright (C) 2017 All rights reserved.
*   
*   File Name:	main.c
*   Creater:		Johnny He
*   Create Date:	2017-08-22
*   Detail:		
*
*   Update Log:	
*
================================================================*/
#include "csingleton.h"  
#include <stdio.h>  

int main(int argc, char *argv[]) {  
    void *ps1 = GetInstance();  
    void *ps2 = GetInstance();  

    if (ps1 == ps2) {  
	fprintf(stdout, "ps1 = ps2\n");  
    }  
    return 0;  
} 
