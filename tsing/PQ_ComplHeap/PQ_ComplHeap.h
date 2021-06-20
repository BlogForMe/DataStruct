/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2020. All rights reserved.
 ******************************************************************************************/

#pragma once

#include <PQ.h> //�������ȼ�����ADTʵ�ֵ�
#include <vector.h> //�������ؼ̳л��ƣ���������
#include "vector_constructor_by_copying.h"
#include "PQ_ComplHeap_Heapify.h"


template <typename T> void heapify ( T* A, Rank n ); //Floyd�����㷨
template <typename T> Rank percolateDown ( T* A, Rank n, Rank i ); //����
template <typename T> Rank percolateUp ( T* A, Rank i ); //����


template <typename T> struct PQ_ComplHeap : public PQ<T>, public Vector<T> { //��ȫ�����
    /*DSA*/friend class UniPrint; //��ʾ���ʹ�ã����򲻱���������
    PQ_ComplHeap() { } //Ĭ�Ϲ���
    PQ_ComplHeap ( T* A, Rank n ) { this->copyFrom ( A, 0, n ); heapify (this->_elem, n ); } //��������
    void insert ( T ); //���ձȽ���ȷ�������ȼ����򣬲������
    T getMax(); //��ȡ���ȼ���ߵĴ���
    T delMax(); //ɾ�����ȼ���ߵĴ���
}; //PQ_ComplHeap
/*DSA*/#include "PQ_ComplHeap_macro.h"
#include "PQ_ComplHeap_implementation.h"
