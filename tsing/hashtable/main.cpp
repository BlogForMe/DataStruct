/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2020. All rights reserved.
 ******************************************************************************************/

/******************************************************************************************
 * Test of Hashtable
 ******************************************************************************************/
#include <cstdio>
#include <rand.h>
#include <print.h>
#include "HashTable.h"
#include "HashTable_hashcode.h"
#include "HashTable_get.h"
#include "HashTable_put.h"
#include "HashTable_remove.h"

/******************************************************************************************
 * ����ɢ�б�
 ******************************************************************************************/
template <typename K, typename V> //key��value
void testHashtable ( int n ) {
//   Hashtable<K, V> ht ( n ); //print ( ht );
//   while ( ht.size() < 4 * n ) {
//      printf ( "\n" );
//      switch ( dice ( 3 ) ) {
//         case 0: { //���ң��ɹ��� <= 33.3%
//            K key = dice ( ( K ) n * 12 ); //[0, 3n)��Χ�ڵ�key
//            printf( "Searching " ); //print ( key ); printf( "(%04d) :\n", hashCode( key ) );
//            V* pValue = ht.get ( key );
//             if (pValue) {
//                 printf("Found with "), print(*pValue);
//             } else {
//                 printf("Not found");
//             }
//             printf("\n" );
//            break;
//         }
//         case 1: { //ɾ�����ɹ��� <= 33.3%
//            K key = dice ( ( K ) n * 12 ); //[0, 3n)��Χ�ڵ�key
//            printf( "Removing " ); //print ( key ); printf( "(%04d) :\n", hashCode( key ) );
//             if (ht.remove(key)) {
//                 printf("Done\n"), print(ht);
//             } else {
//                 printf("Entry not exists\n");
//             }
//            break;
//         }
//         default: {//���룬�ɹ��� == 100%
//            K key = dice ( ( K ) n * 12 ); V v = ( V ) 'A' + dice ( 26 ); //��[0, 2n)*['A'~'Z']��Χ�ڵĴ���
////            printf( "Inserting <" ); print( key ); printf( "(%04d)", hashCode( key ) ); printf( "," ); print ( v ); printf( ">\n" );
//             if (ht.put(key, v)) {
//                 printf("Done\n"), print(ht);
//             } else {
//                 printf("Dup key\n");
//             }
//            break;
//         }
//      } //switch
//   } //while
//   while ( ht.size() > 0 ) {
//      printf( "\n" );
//      K key = dice( ( K ) n * 12 ); //[0, 3n)��Χ�ڵ�key
//      printf( "Removing " ); print( key ); printf( " :\n" );
//       if (ht.remove(key)) {
//           printf("Done\n"), print(ht);
//       } else {
//           printf("Entry not exists\n");
//       }
//   }
}

#if 0

/******************************************************************************************
 * ������
 ******************************************************************************************/
int main ( int argc, char* argv[] ) {
//   if ( 2 > argc ) { printf ( "Usage: %s <size of test>\a\a\n", argv[0] ); return 1; }
//   srand( ( unsigned int ) time( NULL ) ); //�����������
   testHashtable<int, char>( 4  ); //Ԫ�����Ϳ�������������ѡ��
   return 0;
}


#endif