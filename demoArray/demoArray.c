#include<stdio.h>
#include<string.h>
#define BUFFER_SIZE 10

/* 数组：
    1.一段连续的空间
    2.它里面存放的数据类型是相同的
 */
int main()
{
    int array[BUFFER_SIZE];
    #if 0
    int array[BUFFER_SIZE] = { 0 };
    int array[BUFFER_SIZE];

    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("array[%d] = %d\n",idx, array[idx]);
    }
    int len = sizeof(array);
    printf("len = %d\n", len );
    /* 地址 */
    printf("%p\n",&array);
    printf("%p\n",&array[0]);
    printf("%p\n",&array[1]);
    printf("%p\n",&array[9]);
    #endif
  

   #if 1
   memset(array, 1, sizeof(array));
   printf("=============\n");
   for (int idx = 0; idx < BUFFER_SIZE; idx++)
   {
    /* code */
    printf("array[%d] = %d\n",idx, array[idx]);
   }
   
   #endif
    return 0;
}