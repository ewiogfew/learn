//正序求整数分解
#include<stdio.h>
int main()
{
    int x ;
    int count=0;
    printf("输入你要分解的整数:\n");
    scanf("%d",&x);
    
    do{
     int g;
     g=x%10;
     count=count*10+g;
     x/=10;
    } 
    while (x>0);

    x=count;

    do{
        int i;
        i=x%10;
        printf("%d",i);
        if (x>9){
        printf(" ");
        }
        x/=10;

    }while(x>0);

    return 0;
}