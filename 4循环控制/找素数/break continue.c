//求一个数是否是素数
//素数：只可以被1和本身整除的数，不包括1,所以让一个数x除以 2到x-1 就可以判断x是否为素数
//这里需要使用for循环使i(除数)从2迭代到x-1; 可以整除就是一个数取余为0即x%i=0;
#include <stdio.h>
int main()
{
    int i;
    int x;

    printf("输入一个数字判断是否为素数");
    scanf("%d",&x);
    int a=0;
    for (i=2;i<x;i++){
        if (x%i==0)
        {
         a=0;
         break;   
        }
        else if (x%i!=0)
        {
         a=1;
        }
    }
    if (a=0)
    {
     printf("不是素数");
    }
    else if (a=1)
    {
     printf("是素数");
    }
    
    return 0;
    
}