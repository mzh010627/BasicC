#include<stdio.h>


int main()
{
    /*变量的命名：数字，字母，下划线。只能以字母和下划线开头*/
    /*数据类型对应的是内存的存储空间*/
    //printf("hello world!\n");
   
   #if 0 
     /*整型*/
    int age = 6 ;
    int len = sizeof(age);
    printf("len: %d,age = %d\n", len, age);  

    /*浮点型*/
    float weight = 50.5;
    len = sizeof(weight);
    printf("len :%d, a = %f\n", len, weight);   /* %f就是打印小数 */

    double weight = 50.5;
    len = sizeof(weight);
    printf("len :%d, a = %f\n", len, weight);   /* %f就是打印小数 */
   #endif

   #if 0
    char sex = 'm';
    len =sizeof(sex);
    printf("len: %d, sex = %c\n", len, sex);



    char sex = 65;
    int len = sizeof(sex);
    printf("len: %d, sex = %c sex = %d\n", len, sex, sex);
   #endif

    /*有符号*/
    char sex = -1;
    int len = sizeof(sex);
    printf("len: %d,sex = %c sex = %d\n", len, sex, sex);

    char default_value = 137;
    len = sizeof(default_value);
    printf("len: %d, default_value = %c default_value = %d\n", len, default_value, default_value);


    /*无符号和有符号的区别*/
    unsigned char m_value = 137;
    len = sizeof(m_value);
    printf("len: %d, sex = %c sex = %d\n", len, m_value, m_value);

    /* 表达式 & 运算符 */
    /* 运算符 + - * / */
    
    #if 0
    int val = 3 - 5 * 2;
    printf("val:%d\n", val);


    /*括号的优先级最高，运算符的优先级用括号控制*/
    /* 后置++ */
    val++;  //val = vall + 1
    printf("val:%d\n", val);

    val--;
    printf("val:%d\n", val);


    /* 前置++ */
    ++val;
    printf("val:%d\n", val);

    --val;
    printf("val:%d\n", val);



    /* 随机数 */
    int randomVal = rand();
    printf("randomVal:%d", randomVal);
    
    /* 中奖率是25% */
    int lotteryRate = randomVal % 4;
    printf("lotteryRate:%d\n",lotteryRate);


    int a = 5 << 1; //a = 5 * 2
    printf("%d\n",a);

    int val = 51;
    int orVal = val | 7;
    int andVal = val & 2;

    printf("orVal:%d\n", orVal);
    printf("andVal:%d\n",andVal);
    #endif

#if 0

    /* 运算符：双目运算符 & 三目运算符 */
    /* 双目运算符 */
    //int a = 7 + 8;

    /* */
    int num1 = 40;
    int num2 = 30;

    /* 三目运算符 */
    
#endif







    return 0;
}