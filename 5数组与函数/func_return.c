#include <stdio.h>

//返回最大值的函数
int max(int x,int y)
{
    int ret;
    if (x>y){
        ret=x;    
    }
    else{
        ret=y;
    }
    return ret;//单一出口
}


int main()
{
    int a=12;
    int b=10;
    int c;
    printf("max(1, 2) = %d\n", max(1, 2));        // 输出 max(1, 2) 的结果
    printf("max(a, b) = %d\n", max(a, b));        // 输出 max(a, b) 的结果
    c = max(20, b);
    printf("c = max(20, 10) = %d\n", c);          // 输出 c 的值
    printf("max(c, 30) = %d\n", max(c, 30));      // 输出 max(c, 30) 的结果
    printf("Nested max: %d\n", max(max(c, 30), 40)); // 输出嵌套调用的结果

}