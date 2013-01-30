/**************************************************
*
*Copyright (c) 2012,成都信息工程学院,计算机学院,计算机工程091班,何胜江
*All rights reserved.
*
*文件名称	:list.c
*摘    要	:链表功能实现程序。
*
*当前版本	:V1.0
*作    者	:何胜江
*完成日期	:2012年9月2日 13:35:28
*实现功能	:1.创建一个双向链表，结点内容可以是任意类型的值；
*			 2.删除一个已创建的双向链表；
*			 3.向表尾添加一个结点；
*
**************************************************/

#include <stdio.h>
#include <malloc.h>
#include "list.h"

struct st_Node
{
	void *Data;				//链表结点数据指针
	struct st_Node *Next;
	struct st_Node *Prev;
};


/**************************************************
*
*函 数 名	:Creat_list
*函数功能	:创建一个双向链表
*输入参数	:ST_Node *Head	:链表头结点指针（指针变量的值可以没有初始化）
*			 void *Data		:链表头结点数据指针
*输出参数	:ST_Node*		:创建成功，则返回链表头结点指针；创建失败，则返回值为空
*作    者	:何胜江
*完成日期	:2012年9月1日 22:13:34
*
**************************************************/
ST_Node *Creat_list(ST_Node *Head, void *Data)
{
	Head = (ST_Node*)malloc(sizeof(ST_Node));
	if (NULL == Head)
	{
		printf("Error:malloc failure!\n");			//容错处理,打印错误信息
		return NULL;
	}
	Head->Data = Data;
	Head->Next = NULL;
	Head->Prev = NULL;

	return Head;
}

/**************************************************
*
*函 数 名	:Add_node
*函数功能	:向一个双向链表的表尾添加一个结点
*输入参数	:ST_Node *Head	:链表头结点指针
*			 void *Data		:新结点数据指针
*输出参数	:int			:添加成功，则返回0；添加失败，则返回-1
*作    者	:何胜江
*完成日期	:2012年9月1日 22:13:34
*
**************************************************/
int Add_node(ST_Node *Head, void *Data)
{
	ST_Node *Temp = NULL;
	ST_Node *New_node = NULL;
	
	New_node = (ST_Node*)malloc(sizeof(ST_Node));
	if (NULL == New_node)
	{
		printf("Error:malloc failure!\n");			//容错处理,打印错误信息
		return -1;
	}
	New_node->Data = Data;
	New_node->Next = NULL;
	New_node->Prev = NULL;

	Temp = Head;
	while (NULL != Temp->Next)
	{
		Temp = Temp->Next;
	}
	Temp->Next = New_node;
	New_node->Prev = Temp;

	return 0;
}


/**************************************************
*
*函 数 名	:Delete_list
*函数功能	:删除一个双向链表
*输入参数	:ST_Node *Head	:链表头结点指针
*输出参数	:ST_Node*		:删除成功返回NULL
*作    者	:何胜江
*完成日期	:2012年9月1日 22:13:34
*
**************************************************/
ST_Node *Delete_list(ST_Node *Head)
{
	ST_Node *Temp = NULL;
	ST_Node *Del = NULL;

	Temp = Head->Next;
	Del = Head;
	free(Head);
	while (NULL != Temp)
	{
		Del = Temp;
		Temp = Temp->Next;
		free(Del->Data);
		free(Del);
	}
	return NULL;
}


/**************************************************
*
*函 数 名	:Print_list
*函数功能	:打印双向链表中所有结点的数据
*输入参数	:ST_Node *Head	:链表头结点指针
*输出参数	:无
*作    者	:何胜江
*完成日期	:2012年9月1日 22:13:34
*
**************************************************/
void Print_list(ST_Node *Head)
{
	ST_Node *Temp = NULL;
	int *data = NULL;

	Temp = Head;
	while (NULL != Temp)
	{
		data = (int*)Temp->Data;
		printf("%d", *data);
		Temp = Temp->Next;
		if (NULL != Temp)
		{
			printf("<-->");
		}
	}
	printf("\n");
}


//ST_Node *Delete_node(ST_Node *Head, );