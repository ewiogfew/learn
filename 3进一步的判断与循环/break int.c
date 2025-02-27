//数的逆序
//输入一个正整数,输出逆序的数,结尾的0的0处理
#include <stdio.h>
int main()
{
    //初始化
    int a;
    int result=0;
    int b;
    printf("输入你要逆序的数字");
    scanf("%d",&a);
    while (a>0)
    {
        b=a%10;
        result=result*10+b;
        a/=10;
    }
printf("结果为:%d",result);    
return 0;
}

