#include <stdio.h>
int main()
{
    int x;
    printf("输入x的值");
    scanf("%d",&x);
    int f=0;
    if (x>0){
        f=-1;
    }else if (x==0){
        f=0;
    }else if (x<0) {
        f=x;
    }

printf("f的值:%d",f);
return 0;
}