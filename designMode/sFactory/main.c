/*===============================================================
*   Copyright (C) 2017 All rights reserved.
*   
*   File Name:	main.c
*   Creater:		Johnny He
*   Create Date:	2017-10-19
*   Detail:		
*
*   Update Log:	
*
================================================================*/
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int (*GetResult)(int numA, int numB);
}Operation;

int GetAddResult(int numA, int numB)
{
    int res = 0;
    res = numA + numB;
    return res;
}
int GetSubResult(int numA, int numB)
{
    int res = 0;
    res = numA - numB;
    return res;
}
int GetMulResult(int numA, int numB)
{
    int res = 0;
    res = numA * numB;
    return res;
}
int GetDivResult(int numA, int numB)
{
    int res = 0;
    if (0 == numB)
    {
	printf("除数不能为0!\n");
	return 0;
    }
    res = numA / numB;
    return res;
}

int CreateOperation(Operation *oper, char oprate)
{
    if (NULL == oper)
    {
	printf("null point!\n");
	return -1;
    }
    switch (oprate)
    {
	case '+':
	    oper->GetResult = GetAddResult;
	    break;
	case '-':
	    oper->GetResult = GetSubResult;
	    break;
	case '*':
	    oper->GetResult = GetMulResult;
	    break;
	case '/':
	    oper->GetResult = GetDivResult;
	    break;
	default:
	    oper->GetResult = NULL;
	    return -1;
    }
    return 0;
}

int main(int argc, char* argv[])
{
    Operation oper;
    int numA = 0;
    int numB = 0;
    int res = 0;

    numA = atoi(argv[1]);
    numB = atoi(argv[3]);

    if (0 != CreateOperation(&oper, argv[2][0]))
    {
	printf("创建运算失败.\n");
	return -1;
    }
    res = oper.GetResult(numA, numB);
    printf("result is %d.\n", res);
    return 0;
}
