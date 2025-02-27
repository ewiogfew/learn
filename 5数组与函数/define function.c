#include <stdio.h>

//定义一个加法函数,例如可以求从1加到10的结果
//void不返回值
void sum(int x,int y)
{
    int sum=0;
    int i;
    for (i=x;i<=y;i++){
        sum+=i;
    }
    printf("%d到%d的累加和:%d\n",x,y,sum);
}


//调用函数:
int main()
{   
    //调用sum(x,y):
    sum(1,5);
    sum(10,100);
    return 0;
}