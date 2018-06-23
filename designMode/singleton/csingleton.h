/*===============================================================
*   Copyright (C) 2017 All rights reserved.
*   
*   File Name:	csingleton.h
*   Creater:		Johnny He
*   Create Date:	2017-08-22
*   Detail:		
*
*   Update Log:	
*
================================================================*/
#ifndef __CSINGLETON_H_
#define __CSINGLETON_H_

#include <stdlib.h>  

typedef struct {  
    void* (*ctor)(void *_self);  
    void* (*dtor)(void *_self);  
    void* (*createInstance)(void *self);  
    void *instance;  
} _CSingleton;  

extern const void *CSingleton;  

void *GetInstance(void);  


#endif //__CSINGLETON_H_

