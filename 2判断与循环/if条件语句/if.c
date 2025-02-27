#include <stdio.h>
int main()
{
    int hour1,minute1;
    int hour2,minute2;
    printf("输入两个时间点(小时+分钟)\n");
    scanf("%d %d",&hour1,&minute1);
    scanf("%d %d",&hour2,&minute2);
    int delta_hour=hour2-hour1;
    int delta_minute=minute2-minute1;
    if(delta_minute<0){
    delta_hour--;
    delta_minute+=60;
    }
    
    printf("时间差为:%d小时%d分钟",delta_hour,delta_minute);
    return 0;
}
