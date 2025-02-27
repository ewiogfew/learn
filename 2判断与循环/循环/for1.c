//使用while循环设计阶乘
#include<stdio.h>
int main()
{
//初始化
int n;
int result=1;
int i=1;
printf("输入你的阶乘对象:\n");
scanf("%d",&n);

while(n>=i){
    result*=i;
    i+=1;
}
printf("结果为:%d",result);
}