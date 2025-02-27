//比较数的大小
#include <stdio.h>
int main()
{
//初始化两个值a,b,max
 int a;
 int b;
 int max=0;
//输入值
printf("输入两个数");
scanf("%d %d",&a,&b);
//分类作比较
if (a>b)
{max=a;}
else{max=b;}
printf("大的是%d",max);
}
