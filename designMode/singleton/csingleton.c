/*===============================================================
*   Copyright (C) 2017 All rights reserved.
*   
*   File Name:	csingleton.c
*   Creater:		Johnny He
*   Create Date:	2017-08-23
*   Detail:		
*
*   Update Log:	
*
================================================================*/
#include "csingleton.h"  
#include <stdlib.h>  

static void *csingletonCtor(void *_self)
{
    _CSingleton *self = (_CSingleton *)_self;  

    self->instance = _self;  

    return self;  
}  

static void *csingletonDtor(void *_self)
{  
    _CSingleton *self = (_CSingleton *)_self;  

    self->instance = NULL;  

    return self;  
}  

static void *csingletonCreateInstance(void *_self)
{  
    _CSingleton *self = (_CSingleton *)_self;  

    self->instance = _self;  

    return self;  
}  

static _CSingleton _csingleton =
{  
    csingletonCtor,
    csingletonDtor,
    csingletonCreateInstance,
    NULL  
};  

const void *CSingleton = &_csingleton;  

void *GetInstance(void)
{  
    if (NULL == ((_CSingleton*)CSingleton)->instance) {  
	return csingletonCtor((void*)CSingleton);  
    } else {  
	return ((_CSingleton*)CSingleton)->instance;  
    }  
}
