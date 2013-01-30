/**************************************************
*
*Copyright (c) 2012,�ɶ���Ϣ����ѧԺ,�����ѧԺ,���������091��,��ʤ��
*All rights reserved.
*
*�ļ�����	:list.c
*ժ    Ҫ	:������ʵ�ֳ���
*
*��ǰ�汾	:V1.0
*��    ��	:��ʤ��
*�������	:2012��9��2�� 13:35:28
*ʵ�ֹ���	:1.����һ��˫������������ݿ������������͵�ֵ��
*			 2.ɾ��һ���Ѵ�����˫������
*			 3.���β���һ����㣻
*
**************************************************/

#include <stdio.h>
#include <malloc.h>
#include "list.h"

struct st_Node
{
	void *Data;				//����������ָ��
	struct st_Node *Next;
	struct st_Node *Prev;
};


/**************************************************
*
*�� �� ��	:Creat_list
*��������	:����һ��˫������
*�������	:ST_Node *Head	:����ͷ���ָ�루ָ�������ֵ����û�г�ʼ����
*			 void *Data		:����ͷ�������ָ��
*�������	:ST_Node*		:�����ɹ����򷵻�����ͷ���ָ�룻����ʧ�ܣ��򷵻�ֵΪ��
*��    ��	:��ʤ��
*�������	:2012��9��1�� 22:13:34
*
**************************************************/
ST_Node *Creat_list(ST_Node *Head, void *Data)
{
	Head = (ST_Node*)malloc(sizeof(ST_Node));
	if (NULL == Head)
	{
		printf("Error:malloc failure!\n");			//�ݴ���,��ӡ������Ϣ
		return NULL;
	}
	Head->Data = Data;
	Head->Next = NULL;
	Head->Prev = NULL;

	return Head;
}

/**************************************************
*
*�� �� ��	:Add_node
*��������	:��һ��˫������ı�β���һ�����
*�������	:ST_Node *Head	:����ͷ���ָ��
*			 void *Data		:�½������ָ��
*�������	:int			:��ӳɹ����򷵻�0�����ʧ�ܣ��򷵻�-1
*��    ��	:��ʤ��
*�������	:2012��9��1�� 22:13:34
*
**************************************************/
int Add_node(ST_Node *Head, void *Data)
{
	ST_Node *Temp = NULL;
	ST_Node *New_node = NULL;
	
	New_node = (ST_Node*)malloc(sizeof(ST_Node));
	if (NULL == New_node)
	{
		printf("Error:malloc failure!\n");			//�ݴ���,��ӡ������Ϣ
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
*�� �� ��	:Delete_list
*��������	:ɾ��һ��˫������
*�������	:ST_Node *Head	:����ͷ���ָ��
*�������	:ST_Node*		:ɾ���ɹ�����NULL
*��    ��	:��ʤ��
*�������	:2012��9��1�� 22:13:34
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
*�� �� ��	:Print_list
*��������	:��ӡ˫�����������н�������
*�������	:ST_Node *Head	:����ͷ���ָ��
*�������	:��
*��    ��	:��ʤ��
*�������	:2012��9��1�� 22:13:34
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