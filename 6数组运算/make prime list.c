#include<stdio.h>
#include <math.h>  // 添加数学头文件

int isprime_plus(int x);    //声明

int main(void)
{
    //构造100个素数数组从2开始
    const int number=10;
    int i=3;                    //从3开始增长的数
    int num[10]={2};           //第一个为2的数组;
    int cnt=1;                  //索引开始位置;
    
    while (cnt<number){            //当索引等于99时,即可完成循环
        if (isprime_plus(i)){
            num[cnt++]=i;    //指针cnt++,当if成立就会在cnt位置上填上素数,cnt++会自动下一次值+1指针向前移一位
        }
        
        //调试:输出指针cnt和i的关系:
        {   
            printf("i=%d\tcnt=%d\t",i,cnt);
            for (int i=0;i<number;i++){
                printf("%d\t",num[i]);
            }
            printf("\n");
        }
        
        i++;
    }
    
    for(int i=0;i<number;i++){
        printf("%d\t",num[i]);
    
        //让输出格式变成10*10的,当索引够10个时自动换下一行
        if((i+1)%10==0){
        printf("\n");
        }
    }
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
