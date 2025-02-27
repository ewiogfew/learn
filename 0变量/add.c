//定义一个函数,可以求2个式子相加
#include <stdio.h>

//定义一个可以相加的函数
int add(int num1,int num2)
{
    return num1+num2;
}
int main()
{
    int e=0;
    int f=0;
    printf("输入你的第一个数字:");
    scanf("%d",&e);
    printf("输入你的第二个数字:");
    scanf("%d",&f);
    int c=add(e,f);//调用函数add完成相加
    printf ("%d",c);//注意不能printf(c),因为c是int不是格式字符串
    return 0;//返回0表示成功
}