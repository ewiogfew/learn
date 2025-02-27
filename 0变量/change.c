#include <stdio.h>
int main()
{
    const int amount=100;
    int price=0;
    printf("输入金额:");
    scanf("%d",&price);//注意加&&&&&&&&&
    int change=amount-price;
    printf("找您%d",change);
    return 0;
}


//const(不变的)是一个修饰符,加在int前,表示变量的值一旦初始化就不能被修改,
//一旦做出修改就会报错