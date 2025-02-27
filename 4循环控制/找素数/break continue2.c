#include <stdio.h>
int main()
{

    int x;
    int a=1;//注意默认为素数
    int i;
    printf("输入一个数,判断是否为素数:\n");
    scanf("%d",&x);

    for (i=2;i<x;i++){
        if (x%i==0)
        {
            a=0;
        }
        else if(x%i!=0);
        {
        continue;
        }
    }
    if (a==1)
    {
        printf("是素数");
    }else{printf("不是素数");}

    return 0;
}