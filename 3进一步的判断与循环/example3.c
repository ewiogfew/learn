//计数循环

#include <stdio.h>
int main()
{
    int num1=5;
    
    while (num1>=0)
    {
        //num1--; 顺序位置不同导致结果不同
        printf("%d\n",num1);
        num1--;
    }
printf("%d",num1);
}