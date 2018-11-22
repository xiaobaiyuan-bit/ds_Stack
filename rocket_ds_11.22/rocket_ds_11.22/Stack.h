#pragma once 

typedef int StackTypeData;

#define MAX_SIZE 100

typedef struct Stack
{
	StackTypeData array[MAX_SIZE];
	int top;//栈的元素个数
}Stack;

//初始化、销毁
//增（只能从栈顶）删（只能删除栈顶）查（只能查看栈顶元素）
//个数、是否空、是否满
//增->顺序表的尾插
//删->顺序表的尾删

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
	assert(pStack->top < MAX_SIZE);//满了就不能压栈了
	pStack->array[pStack->top] = data;
	pStack->top++;
}

void StackPop(Stack *pStack)
{
	assert(pStack);
	assert(pStack->top > 0);//空了就不能出栈了
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