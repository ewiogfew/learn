#include<stdio.h>
//定义一个判断素数的函数:
int isPrime(int i)
{   
    //判断素数小于2
    if (i<=1){
        return 0;
    }

    for(int a=2;a<i;a++){
        if(i%a==0){
            return 0;
        }   
    }
    return 1;
}
//求素数的和
int main()
{
    int x=0;
    int sum=0;
    scanf("%d",&x);
    
    while(x!=-1){
    if (isPrime(x)){
        sum+=x;
        //scanf("%d",&x);当输入非素数时，程序不会读取新数字，导致无限循环
    }
    scanf("%d",&x);
    }
    printf("素数和为:%d",sum);
    return 0;
}