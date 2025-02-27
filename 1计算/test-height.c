//设置一个程序,可以换算英尺英寸换算米
#include <stdio.h>
int main()
{
    //注意整数的除法只会保留整数部分
    float inch=0;
    float foot=0;
    printf("输入你的身高(英尺英寸)");
    
    scanf("%lf %lf",&foot,&inch);//注意scanf要输入进去的是浮点数,用%lf
    
    float height=(foot+inch/12)*0.3048;
    //注意浮点数类型,c语言中整数之间的除法只会保留整数部分,
    //有一个不是整数就不会出现这种情况因此也可以只把12改为12.0,从而不需要修改inch和foot的类型
    
    printf("你的身高为%f米",height);//%f来读取浮点数,%d读取整数
    return 0;
}