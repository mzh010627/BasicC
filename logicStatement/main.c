#include<stdio.h>
/* 宏不允许使用小写，必须全部大写 */
#define COUNT_NUM 10
#define RANGE_NUM 200

/* 状态码 */
enum STATUS_CODE
{
    REGISTER = 1,
    LOGIN,
    QUIT,
};
int main()
{
#if 0
    /* 判断语句 */
    int budget = 5000;

    int applephone = 8999;
    int mi14pro = 4399;
    int huaweip60 = 6000;

    if (budget > applephone)
    {
        printf("get a applephone!\n");
    }
    else if (budget > mi14pro)
    {
        printf("get a mi14pro!\n");
    }
    else if (budget > huaweip60)
    {
        /* code */
        printf("get a huaweip60!\n");
    }
    
    
    
#endif

#if 0
int budget = 5000;

    int minbudget = 4000;
    int maxbudget = 6000;

    int applephone = 8999;
    int mi14pro = 4399;
    int huaweip60 = 6000;

    /* 只要有一个条件被满足，那么就为1 （成立） */
    if(budget < applephone || budget > mi14pro)
    {
        printf("i am happy, get a phone\n");
    }
    else
    {
        printf("i am sad, no phone\n");
    }

    /* &&: 两边都是1（成立）才是1 */
    if (minbudget < budget && budget < maxbudget) 
    {
        /* code */
        printf("success get a phone\n");
    }
    else
    {
        printf("error get a phone\n");
    }
#endif

    /* 代码规范1：一个函数尽量不要超过80行 最多不要超过120行 */

#if 0
    /* 坑1： 每一个case都需要有break；*/
    int choice = 0;
    printf("请输入你的选项:");
    scanf("%d", &choice);
    /* switch */
switch (choice)
{
case REGISTER:
    {
        /* 坑2：如果case里面的语句过多，一定要加上{}来包含*/
    printf("welcome to 1 city\n");
    }
    break;
case LOGIN:
    printf("welcome to 2 city\n");
    break;
case QUIT:
    printf("welcome to 3 city\n");
    break;
default:
    printf("input choice invalid");
    break;
}
#endif
#if 1
    /* 循环 */

    /* 请你写一个100以内的数 1 - 100*/
    srand(time(NULL));
    /* 循环不允许使用魔鬼数字，不能用i*/
    int randomNum = 0;
    for(int idx = 0;idx < COUNT_NUM; idx++)
    {
        randomNum = rand() % RANGE_NUM + 1;
        printf("randomNum:%d\n",randomNum);
    }

    /* 请你写一个100以内的数 1 - 100*/
    
#endif


#if 1
    
    int circleTimes = COUNT_NUM >> 1;
    int randomNum = 0;
    while (--circleTimes)
    {
        randomNum = rand() % RANGE_NUM + 1;
        printf("randomNum:%d\n", randomNum);
    }
    
#endif



    return 0;
}