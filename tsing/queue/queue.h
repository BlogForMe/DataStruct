/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2020. All rights reserved.
 ******************************************************************************************/

#pragma once

#include "List.h"
#include "List_insert.h"
#include "list_remove.h"
#include "list_initialize.h"
#include "list_destructor.h"

template <typename T> class Queue: public List<T> { //����ģ���ࣨ�̳�Listԭ�нӿڣ�
public: //size()��empty()�Լ��������Žӿھ���ֱ������
   void enqueue ( T const& e ) { this->insertAsLast ( e ); } //��ӣ�β������
   T dequeue() { return this->remove ( this->first() ); } //���ӣ��ײ�ɾ��
   T& front() { return this->first()->data; } //����
};
