/*
构建一个找零钞票机
*/
#include <stdio.h>
int main()
{
//初始化
int price=0;
int cost=0;
//输入过程
printf("输入你的商品价格");
scanf("%d",&cost);
printf("输入你的支付金额");
scanf("%d",&price);
//计算
if (cost<=price){printf("找您%d元",price-cost);}//注意;号在{}里面的句子输入
else {printf("你输入的金额不足");}
return 0;
}
