#include <stdio.h>

//定义结构体类型并命名为coin
struct coin {
    int number;
    char *name;
};


//修改函数原型中的参数类型为struct coin
int search(int key,struct coin a[],int length);     //声明

int main()
{ 
     // 正确初始化结构体数组（注意顺序：先字符串，后整数）
    struct coin coins[]={
        {1,"penny"},
        {5,"nickel"},
        {10,"dime"},
        {25,"quarter"},
        {50,"half-dollar"}
    };                       //类似于py的字典
     
    int x;
    scanf("%d",&x);
    
    int ret=search(x,coins,sizeof(coins)/sizeof(coins[0]));
    
    if (ret==-1){
        printf("无对应值");
    }else{
        printf("%d的名字是%s",x,coins[ret].name);    //注意返回字符串%s
    }
    return 0;
}


int search(int key,struct coin a[],int length)
{
    int ret=-1;
    for (int i=0;i<length;i++){
        if (a[i].number==key){
            ret=i;//返回索引位置
            break;
        }
    }
    return ret;     //  单一出口
}