//scanf("%d %d",&a,&b)
//作用接受外来输入的信息,赋予对应(&后)的变量上.


#include <stdio.h>
int main()
{
    int a=0;
    int b=0;
    scanf("price%d %d",&a,&b);
    printf("%d %d",a,b);
    return 0;

}
//注意:在scanf函数""里面的东西是必须输入的东西,就像在这里必须先输入price再去输入ab的值