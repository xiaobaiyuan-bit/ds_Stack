//#pragma once
//
//#include <stdio.h>
//#include <assert.h>
//#include <windows.h>
//#include <stdlib.h>
//
//typedef int DataType;
//
//#define INIT_CAPACITY 3
//
//typedef struct SeqListD
//{
//	DataType *parray;
//	int capazcity;//顺序表的容量
//	int size;
//}SeqListD;
//
//
////初始化
//void SeqListDInit(SeqListD *pSeq)
//{
//	assert(pSeq);
//	pSeq->capazcity = INIT_CAPACITY;
//	pSeq->parray = (DataType *)malloc(pSeq->capazcity * sizeof(SeqListD));
//	assert(pSeq->parray);
//
//	pSeq->size = 0;
//}
//
////销毁
//void SeqListDDestroy(SeqListD *pSeq)
//{
//	assert(pSeq);
//	free(pSeq->parray);
//
//	pSeq->capazcity = 0;
//	pSeq->parray = NULL;
//	pSeq->size = 0;
//}
//
////扩容
//static void  ExpandIfRequired(SeqListD *pSeq)
//{
//	assert(pSeq);
//	//扩容判断条件
//	if (pSeq->size < pSeq->capazcity)
//	{
//		return;
//	}
//	//扩容
//	pSeq->capazcity *= 2;
//
//	//1 申请新空间
//	DataType *newArray = (DataType *)malloc(pSeq->capazcity * sizeof(DataType));
//	assert(newArray);
//	//2 数据搬移
//	for (int i = 0; i < pSeq->size; i++)
//	{
//		newArray[i] = pSeq->parray[i];
//	}
//	//3 释放老空间,关联新空间
//	free(pSeq->parray);
//	pSeq->parray = newArray;
//}
//
////尾插
//void SeqListDPushBack(SeqListD *pSeq, DataType data)
//{
//	assert(pSeq);
//	ExpandIfRequired(pSeq);//判断是否需要增容
//	
//	pSeq->parray[pSeq->size] = data;
//	pSeq->size++;
//}
//
////打印
//void SeqListDPrint(SeqListD *pSeq)
//{
//	assert(pSeq);
//	for (int i = 0; i < pSeq->size; i++)
//	{
//		printf("%d ", pSeq->parray[i]);
//	}
//	printf("\n");
//}
//
//void Test()
//{
//	SeqListD sld;
//	SeqListDInit(&sld);
//
//	SeqListDPushBack(&sld, 1);
//	SeqListDPushBack(&sld, 2);
//	SeqListDPushBack(&sld, 3);
//	SeqListDPushBack(&sld, 4);
//	SeqListDPushBack(&sld, 5);
//
//	SeqListDPrint(&sld);
//
//	SeqListDDestroy(&sld);
//}
