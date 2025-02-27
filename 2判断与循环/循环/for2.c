#include<stdio.h>
int main()
{
    int n;
    int result=1;
    int i;
    printf("输入阶乘数字:");
    scanf("%d",&n);
    for (i=n;i>1;i--){//注意:执行条件代码顺序(符合条件)是result*=i,i--而不是先i--后在result*=i
        result*=i;
    }
    printf("阶乘结果为:%d",result);
}