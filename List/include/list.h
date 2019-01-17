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
    int (*GetSize)(void* this);
    Node* (*GetNodeByIndex)(void* this, int index);
    Node* (*InsertNodeByIndex)(void* this, int index, Node* newNode);
    Node* (*AppendNode)(void* this, Node* newNode);
    void (*PrintNodes)(void* this);
}List;

List* CreateList(Node* node);

#endif //__LIST_H_

