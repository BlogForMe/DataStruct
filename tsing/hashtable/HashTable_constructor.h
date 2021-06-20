/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2020. All rights reserved.
 ******************************************************************************************/

#pragma once

/*DSA*/#include <Entry.h>
#include "HashTable.h"
#include "../prime/primeNLT.h"

template <typename K, typename V> Hashtable<K, V>::Hashtable ( int c ) { //����ɢ�б�������Ϊ
   M = primeNLT ( c, 1048576, "/home/mc/CLionProjects/datastruct/tsing/_input/prime-1048576-bitmap.txt" ); //��С��c������M
   N = 0; ht = new Entry<K, V>*[M]; //����Ͱ���飨�ٶ��ɹ���
   memset ( ht, 0, sizeof ( Entry<K, V>* ) * M ); //��ʼ����Ͱ
   removed = new Bitmap ( M ); L = 0; //��Bitmap��¼����ɾ��
   //*DSA*/printf("A bucket array has been created with capacity = %d\n\n", M);
}