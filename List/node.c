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

Node* CreateNode(void* data)
{
    Node* node = (Node*)malloc(sizeof(Node));
    memset(node, 0, sizeof(Node));
    node->pNext = NULL;
    node->pPrev = NULL;
    node->pData = data;
    return node;
}
