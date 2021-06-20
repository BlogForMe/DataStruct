/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2020. All rights reserved.
 ******************************************************************************************/

#pragma once

#include "HashTable.h"
#include "HashTable_hashcode.h"

/******************************************************************************************
 * 沿关键码k的试探链，找到与之匹配的桶；实践中有多种试探策略可选，这里仅以线性试探为例
 ******************************************************************************************/
template <typename K, typename V> int Hashtable<K, V>::probe4Hit ( const K& k ) {
   int r = hashCode( k ) % M; //按除余法确定试探链起点
   while ( ( ht[r] && ( k != ht[r]->key ) ) || ( !ht[r] && removed->test(r) ) )
      r = ( r + 1 ) % M; //线性试探（跳过带懒惰删除标记的桶）
   return r; //调用者根据ht[r]是否为空及其内容，即可判断查找是否成功
}
