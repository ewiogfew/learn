//要求筛选出50个素数
#include <stdio.h>
int main()
{
    int x=2;
    int count=0;
    for ( x = 2;count<50;x++)
    //while(count<50)
    {
        int a=1;//重置判断标准为1
        int i;
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
            printf("%d\n",x);
            count++; 
        }
        //x++;
    }
}





