#include <stdio.h>
int isprime_plus(int x);

int main()
{
   // 初始化数组，所有数先标记为素数（1）
    const  int number=25;
   int prime_num[25];
   for (int i=0;i<number;i++){
    prime_num[i]=1;
}
   
   // 埃拉托斯特尼筛法,是素数标记为1,非素数标记为0
   for (int x=2;x<number;x++){
    if (prime_num[x]){
        for (int i=2;i*x<number;i++){
            prime_num[i*x]=0;   //素数的倍数不是素数
        }
    }
}

    //打印素数,每行5个
    int count=0;
    for (int i=2;i<number;i++){     //细节:索引0和1都不是素数所以i从2开始
        if (prime_num[i]==1){  // 错误：使用赋值运算符"="，而非比较运算符"=="
            printf("%d\t",i);
            count++;
            if (count%5==0){
            printf("\n");
        }
    }
}
return 0;
}

//总结:把索引当作数,把索引对应的值当作判断标准(0为非素数,1为素数)