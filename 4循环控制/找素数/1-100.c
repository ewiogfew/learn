
//找1到100内的素数
//素数定义:只能被1和本身整除的数,不包括1
#include <stdio.h>
int main()
{
    int x;
    for ( x = 2; x < 100; x++) 
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
        }
    }
}