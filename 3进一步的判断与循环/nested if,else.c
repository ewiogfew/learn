#include<stdio.h>
int main()
{
    //初始化和输入
    int a;
    int b;
    int c;
    printf("依次输入a,b,c三个数");
    scanf("%d %d %d",&a,&b,&c);
    //使用嵌套if else语句判断abc大小
    if (a>b)
    {if (a>c)
        {
        printf("a最大");
        }
    else{printf("c最大");}
    }

    else{
    if (b>c)
    {
        printf("b最大");
    }else{printf("c最大");}
    
        }
}

