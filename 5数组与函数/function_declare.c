#include <stdio.h>

void sum(int x,int y); //函数声明,函数原型不是函数,只是告诉编译器名称,参数,返回类型

int main()
{   
    //调用sum(x,y):
    sum(1,5);
    sum(10,100);
    return 0;
}


void sum(int x,int y)       //定义    也可检查声明和定义是否正确
{
    int sum=0;
    int i;
    for (i=x;i<=y;i++){
        sum+=i;
    }
    printf("%d到%d的累加和:%d\n",x,y,sum);
}
