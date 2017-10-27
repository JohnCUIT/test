/*===============================================================
*   Copyright (C) 2017 All rights reserved.
*   
*   File Name:	list.h
*   Creater:		Shengjiang He
*   Create Date:	2017-10-27
*   Detail:		
*
*   Update Log:	
*
================================================================*/
#ifndef __LIST_H_
#define __LIST_H_
#include "node.h"

typedef	struct
{
	Node* pHead;
	int curNodeindex;
	int (*GetSize)(void* this);
	Node* (*GetCurNode)(void* this);
}List;


#endif //__LIST_H_

