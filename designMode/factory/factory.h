/*===============================================================
*   Copyright (C) 2017 All rights reserved.
*   
*   File Name:	factory.h
*   Creater:		Johnny He
*   Create Date:	2017-10-26
*   Detail:		
*
*   Update Log:	
*
================================================================*/
#ifndef __FACTORY_H_
#define __FACTORY_H_

#include "operation.h"

typedef	struct
{
    Operation* (*CreateOperation)(void);
}Factory;


Factory* GetAddFactory();

Factory* GetSubFactory();

Factory* GetMulFactory();

Factory* GetDivFactory();

#endif //__FACTORY_H_

