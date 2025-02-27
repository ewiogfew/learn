//可以计算平均值,输入-1停止计数

#include <stdio.h>
int main()
{
    int x;
    double sum=0;
    //cnt表示:有效数值的个数
    int cnt=0;
    //定义数组number使其存放100个整数,作用就是记录对应索引的数值
    int number[100];
    scanf("%d",&x);
    
    while (x!=-1)
    {
        //将cnt对应下的数值记录下来
        number[cnt]=x;
        
        //
        int i;
        printf("%d\t",cnt);
        for (i=0;i<=cnt;i++){
            printf("%d\t",number[i]);
        }
        printf("\n");
        //
        
        sum+=x;
        cnt++;
        scanf("%d",&x);
    }
    if (cnt>0){
        printf("平均值是:%lf",sum/cnt);
    }

    int i;
    for (i=0;i<cnt;i++){
        if(number[i]>sum/cnt){
            printf("大于平均值的是:%d",number[i]);
        }
    }
    return 0;
}


/*
示例说明
假设用户输入了3个有效数值（cnt=3）：

有效索引：0, 1, 2（共3个元素）。

i < cnt → i 遍历 0, 1, 2，正确访问所有有效数据。

i <= cnt → i 遍历 0, 1, 2, 3，number[3] 越界。

因此，必须使用 i < cnt 以确保循环严格在有效数据范围内遍历

*/