/*===============================================================
*   Copyright (C) 2017 All rights reserved.
*   
*   File Name:	node.h
*   Creater:		Shengjiang He
*   Create Date:	2017-10-27
*   Detail:		
*
*   Update Log:	
*
================================================================*/
#ifndef __NODE_H_
#define __NODE_H_

typedef	struct
{
	void* pNext;
	void* pPrev;
	void* pData;
	void* (*GetData)(void* this);
	void* (*GetNextNode)(void* this);
	void* (*GetPrevNode)(void* this);
}Node;

Node* CreateNode(void* data);

#endif //__NODE_H_

