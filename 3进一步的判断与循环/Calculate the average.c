//计算平均数

#include <stdio.h>
int main()
{
    //初始化  aver=sum/count
    int num;
    int sum=0;
    int count=0;
    printf("输入数字求平均值(输入-1结束)\n");
    scanf("%d",&num);
    while (num!=-1)
    {
        sum+=num;
        count++;
        scanf("%d",&num);
    }
    printf("结果为:%f",1.0*sum/count);

}