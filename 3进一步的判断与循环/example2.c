#include <stdio.h>
int main()
{
    //初始化
    int x;
    int result=0;
    printf("输入一个x的值");
    scanf("%d",&x);
    int save=x;
    //实现算法
    for (result=0;x>1;result++){
        x/=2;
    }
printf("log2 of %d的结果是:%d",save,result);


}