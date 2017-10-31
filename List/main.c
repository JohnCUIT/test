/*===============================================================
*   Copyright (C) 2017 All rights reserved.
*   
*   File Name:	main.c
*   Creater:		Johnny He
*   Create Date:	2017-10-31
*   Detail:		
*
*   Update Log:	
*
================================================================*/
#include "list.h"

int main(int argc, char* argv[])
{
    char* str1 = "yes";
    char* str2 = "no";
    char* str3 = "heshengjiang";
    Node* node1 = CreateNode((void*)str1);
    Node* node2 = CreateNode((void*)str2);
    Node* node3 = CreateNode((void*)str3);
    List* list = CreateList(node1);
    list->AppendNode(list, node2);
    list->AppendNode(list, node3);

    list->PrintNodes(list);
    return 0;
}
