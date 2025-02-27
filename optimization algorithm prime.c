#include <stdio.h>
#include <math.h> 

int isprime(int x); //声明
int isprime_plus(int x); //声明

int main()
{
    int x;
    scanf("%d",&x);

    if (isprime_plus(x)){
        printf("%d是素数",x);
    }else{
        printf("%d不是素数",x);
    }

    return 0;

}


int isprime(int x)
{
    int ret=1;
    int i;

    if (x==1){
        ret=0;
    }
     for (i=2;i<x;i++){
         if (x%i==0){
             ret=0;
             break;
         }
     }
    return ret;
}


int isprime_plus(int x)
{
    int ret=1;
    int i;

    if (x==1||(x%2==0&&x!=2)){      //注意这个逻辑运算顺序x==1||(x%2==0&&x!=2)
        ret=0;
    }
    //把所有的偶数都排除掉了除了2,因为偶数里面只有2是素数
    for (i=3;i<=sqrt(x);i+=2){       //i+=2,跳过偶数,优化算法:sqrt(x)计算平方根:合数成对性
        if(x%i==0){
            ret=0;
            break;
        }
    }
    return ret;
}
