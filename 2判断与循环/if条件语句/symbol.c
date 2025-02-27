#include <stdio.h>
int main()
{
    int a=4;
    int b=5;
    int c=6;
    printf("4<5<6的结果是%d\n",4<5<6);
    printf("4==5<6的结果是%d\n",4==5<6);
    printf("a==b>0的结果是%d",a==b>0);
}

//赋值号=优先级最低,其次是比较运算符==,连续关系运算是从左到右的