#include <stdio.h>
int main()
{
    int hour1,minute1;
    int hour2,minute2;
    printf("输入两个时间点(小时+分钟)");
    scanf("%d %d",&hour1,&minute1);
    scanf("%d %d",&hour2,&minute2);

    int sum_minute1=hour1*60+minute1;
    int sum_minute2=hour2*60+minute2;

    int Delta=sum_minute2-sum_minute1;
    int Delta_hour=Delta/60;//这里整数之间只会取整数
    int Delta_minute=Delta%60;//这里使用取余,取剩下的分钟
    printf("时间差为:%d小时%d分",Delta_hour,Delta_minute);

    return 0;
}