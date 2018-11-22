#pragma once 

typedef int StackTypeData;

#define MAX_SIZE 100

typedef struct Stack
{
	StackTypeData array[MAX_SIZE];
	int top;//ջ��Ԫ�ظ���
}Stack;

//��ʼ��������
//����ֻ�ܴ�ջ����ɾ��ֻ��ɾ��ջ�����飨ֻ�ܲ鿴ջ��Ԫ�أ�
//�������Ƿ�ա��Ƿ���
//��->˳����β��
//ɾ->˳����βɾ

void StackInit(Stack *pStack)
{
	assert(pStack);
	pStack->top = 0;
}

void StackDestroy(Stack *pStack)
{
	assert(pStack);
	pStack->top = 0;
}

void StackPush(Stack *pStack, StackTypeData data)
{
	assert(pStack);
	assert(pStack->top < MAX_SIZE);//���˾Ͳ���ѹջ��
	pStack->array[pStack->top] = data;
	pStack->top++;
}

void StackPop(Stack *pStack)
{
	assert(pStack);
	assert(pStack->top > 0);//���˾Ͳ��ܳ�ջ��
	pStack->top--;
}

StackTypeData StackTopFind(const Stack *pStack)
{
	assert(pStack);
	assert(pStack->top > 0);
	return pStack->array[pStack->top - 1];
}

int StackSize(const Stack *pStack)
{
	assert(pStack);
	return pStack->top;
}

int StackFull(const Stack *pStack)
{
	assert(pStack);
	return pStack->top >= MAX_SIZE;
}

int StackEmpty(const Stack *pStack)
{
	assert(pStack);
	return pStack->top > 0;
}