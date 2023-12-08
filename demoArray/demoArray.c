#include<stdio.h>
#include<string.h>
#define BUFFER_SIZE 10

/* 数组：
    1.一段连续的空间
    2.它里面存放的数据类型是相同的
 */
int main()
{
    #if 0
    int arry[BUFFER_SIZE] = { 0 };
    #endif
    int arry[BUFFER_SIZE];

    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("arry[%d] = %d\n",idx, arry[idx]);
    }
    int len = sizeof(arry);
    printf("len = %d\n", len );
    /* 地址 */
    printf("%p\n",&arry);
    printf("%p\n",&arry[0]);
    printf("%p\n",&arry[1]);
    printf("%p\n",&arry[9]);

    return 0;
}