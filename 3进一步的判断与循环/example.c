//计算一个log2 of x的值
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
    while (x>1){
        x/=2;
        result++;

    }
    printf("log2 of %d的结果是:%d",save,result);
}

// 计算一个log2 of x的值
// #include <stdio.h>
// int main()
// {
    // 初始化
    // int x;
    // int result=-1;
    // printf("输入一个x的值");
    // scanf("%d",&x);
    // int save=x;
    // 实现算法
    // while (x>0){
        // x/=2;
        // result++;

    // }
    // printf("log2 of %d的结果是:%d",save,result);
// }

