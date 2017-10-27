/*===============================================================
*   Copyright (C) 2017 All rights reserved.
*   
*   File Name:	list.c
*   Creater:		Shengjiang He
*   Create Date:	2017-10-27
*   Detail:		
*
*   Update Log:	
*
================================================================*/
#include "list.h"

Node* CreateList(Node* node)
{
	List* list = (List*)malloc(sizeof(List));
	list->pHead = node;
}
