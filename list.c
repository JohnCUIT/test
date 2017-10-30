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
#include <stdio.h>
#include <stdlib.h>

int ListGetSize(void* this)
{
    int res = 0;
    Node* curNode = ((List*)this)->pHead;

    while(NULL != curNode)
    {
	curNode = curNode->pNext;
	res ++;
    }
    return res;
}

Node* ListGetNodeByIndex(void* this, int index)
{
    Node* curNode = ((List*)this)->pHead;

    while (NULL != curNode && 0 != index)
    {
	curNode = curNode->pNext;
	index --;
    }
    return curNode;
}

Node* ListInsertNodeByIndex(void* this, int index, Node* newNode)
{
    Node* curNode = ((List*)this)->pHead;

    while (NULL != curNode && 0 != index)
    {
	curNode = curNode->pNext;
	index --;
    }
    if (NULL == curNode)
    {
	return NULL;
    }
    else
    {
	newNode->pNext = curNode->pNext;
	newNode->pPrev = curNode;
	((Node*)(newNode->pNext))->pPrev = newNode;
	curNode->pNext = newNode;
    }
    return curNode->pNext;
}

Node* ListAppendNode(void* this, Node* newNode)
{
    Node* curNode = ((List*)this)->pHead;

    if (NULL == curNode)
    {
	curNode = newNode;
	return curNode;
    }

    while (NULL != curNode->pNext)
    {
	curNode = curNode->pNext;
    }
    curNode->pNext = newNode;
    return curNode->pNext;

}

void ListPrintNodes(void* this)
{
    Node* curNode = ((List*)this)->pHead;
    printf("List:\t");
    if (NULL == curNode)
    {
	printf("NULL");
    }
    while (NULL != curNode)
    {
	printf("%s,", (char*)(curNode->pData));
	curNode = curNode->pNext;
    }
    printf("\n");
}

List* CreateList(Node* node)
{
    List* list = (List*)malloc(sizeof(List));
    list->pHead = node;
    list->GetSize = ListGetSize;
    list->GetNodeByIndex = ListGetNodeByIndex;
    list->InsertNodeByIndex = ListInsertNodeByIndex;
    list->AppendNode = ListAppendNode;
    list->PrintNodes = ListPrintNodes;
}

