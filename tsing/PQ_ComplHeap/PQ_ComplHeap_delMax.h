/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2020. All rights reserved.
 ******************************************************************************************/

#pragma once

#include "PQ_ComplHeap.h"

template <typename T> T PQ_ComplHeap<T>::delMax() { //ɾ���ǿ���ȫ����������ȼ���ߵĴ���
   T maxElem = this->_elem[0]; this->_elem[0] = this->_elem[ --this->_size ]; //ժ���Ѷ����״���������֮��ĩ����
   percolateDown ( this->_elem, this->_size, 0 ); //���¶Ѷ�ʵʩ����
   return maxElem; //���ش�ǰ���ݵ�������
}
