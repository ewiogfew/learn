#include <stdio.h>
int main()
{   
    //要求:记录0到9每个数字的个数直到输入-1

    //初始化数据:
    const int number=10;//定义数组大小
    int x;
    //int count[number]={0};//定义容器记录每一个数字的个数,记得初始数据为0
    
    //或者这种方式初始化数组:
    int count[number];
    for(int i=0;i<number;i++){
        count[i]=0;
    }
    
    scanf("%d",&x);
    
    while(x!=-1){
        if (x>=0&&x<=9){
            count[x]++;//注意:count[x]不是创建了一个数组而是索引x处默认值加一记录个数
            scanf("%d",&x);
        }
    }
    
    for (int i=0;i<number;i++){
        printf("%d的个数为:%d\n",i,count[i]);
    }
    
    return 0;
/*
我的錯誤思路:创建一个数组记录每一个值,遍历这个数组,使用条件语句记录每一个值的个数
正确思路:创建一个数组记录每一个值的个数,遍历数组输出每个值的个数,从0开始计数正好满足索引对应数值
*/
}