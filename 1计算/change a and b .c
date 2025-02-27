
//交换a和b的值
#include <stdio.h>
int main()
{
    int a=5;
    int b=6;
    int save;
    save=a;//注意谁在前谁储存新的值
    a=b;
    b=save;
    printf("%d \n%d",a,b);
    return 0;
}