#include <stdio.h>
int main()
{
    int i=0;
    int num;
    //输入
    printf("输入数");
    scanf("%d",&num);

    //for循环检测次数
    //for (i=1;i<=num;i++)
    //for (i=1;i<num++;i++)//会无限循环
    for (i=1;i<num;i++)
    {
        printf("%d循环第%d次\n",num,i);

    }
    printf("i=%d",i);
}