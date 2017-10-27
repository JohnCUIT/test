/*===============================================================
*   Copyright (C) 2017 All rights reserved.
*   
*   File Name:	node.c
*   Creater:		Shengjiang He
*   Create Date:	2017-10-27
*   Detail:		
*
*   Update Log:	
*
================================================================*/
#include "node.h"
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

void* NodeGetData(void* this)
{
	if (NULL == this)
		return NULL;
	return ((Node*)this)->pData;
}

void* NodeGetNextNode(void* this)
{
	if (NULL == this)
		return NULL;
	return (Node*)((Node*)this)->pNext;
}

void* NodeGetPrevNode(void* this)
{
	if (NULL == this)
		return NULL;
	return (Node*)((Node*)this)->pPrev;
}

Node* CreateNode(void* data)
{
	Node* node = (Node*)malloc(sizeof(Node));
	memset(node, 0, sizeof(Node));
	node->pNext = NULL;
	node->pPrev = NULL;
	node->pData = data;
	node->GetData = NodeGetData;
	node->GetNextNode = NodeGetNextNode;
	node->GetPrevNode = NodeGetPrevNode;
	return node;
}
