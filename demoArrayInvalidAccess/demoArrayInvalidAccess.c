#include<stdio.h>
#define BUFFER_SIZE 10
int main()
{
    int array[BUFFER_SIZE] = { 0 };
   #if 0
   /* 数组的月结访问*/
   /* 判断索引的有效性*/
   printf("array[-1]: %d\n", array[-1]);
   printf("array[10]: %d\n", array[10]);
   printf("array[15]: %d\n", array[15]);
    return 0;

   #endif

   #if 0
    /* 静态数组 */
     int desk[BUFFER_SIZE] = { 0 };

   #endif

   return 0;
}