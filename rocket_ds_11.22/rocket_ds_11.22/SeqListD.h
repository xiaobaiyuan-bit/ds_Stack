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
//	int capazcity;//˳��������
//	int size;
//}SeqListD;
//
//
////��ʼ��
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
////����
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
////����
//static void  ExpandIfRequired(SeqListD *pSeq)
//{
//	assert(pSeq);
//	//�����ж�����
//	if (pSeq->size < pSeq->capazcity)
//	{
//		return;
//	}
//	//����
//	pSeq->capazcity *= 2;
//
//	//1 �����¿ռ�
//	DataType *newArray = (DataType *)malloc(pSeq->capazcity * sizeof(DataType));
//	assert(newArray);
//	//2 ���ݰ���
//	for (int i = 0; i < pSeq->size; i++)
//	{
//		newArray[i] = pSeq->parray[i];
//	}
//	//3 �ͷ��Ͽռ�,�����¿ռ�
//	free(pSeq->parray);
//	pSeq->parray = newArray;
//}
//
////β��
//void SeqListDPushBack(SeqListD *pSeq, DataType data)
//{
//	assert(pSeq);
//	ExpandIfRequired(pSeq);//�ж��Ƿ���Ҫ����
//	
//	pSeq->parray[pSeq->size] = data;
//	pSeq->size++;
//}
//
////��ӡ
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
