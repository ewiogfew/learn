//do while循环和while循环的区别就是,前者会直接进行一轮循环体代码,再判断条件
//改写一下,上次的判断几位数程序
#include <stdio.h>
int main()
{
    //初始化
    int a;
    int i=0;
    printf("输入数字");
    scanf("%d",&a);
    //使用do while判断位数i
    do  {
        a/=10;
        i++;
        }while(a>0);
    printf("改数字是%d位数",i);
}