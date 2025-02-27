#include <stdio.h>
int main()
{
    //初始化
    int score=60;
    int your_score=0;
    //输入
    printf("输入你的成绩");
    scanf("%d",&your_score);
    //做判断,条件语句的第二种写法,不加{}
    if (your_score>=60)//注意在圆括号后不加;
        printf("恭喜你及格了\n");
    else
        printf("抱歉你还不及格");
    printf("感谢参与");
}