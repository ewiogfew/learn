#include <stdio.h>
int search(int key,int a[],int length);
int main()
{
    //使用2个数组表达字典的效果,但是他们是割裂的
    char *name[]={"penny","nickel","dime","quarter","half-dollar"};
    int number[]={1,5,10,25,50};
    
    int x;
    scanf("%d",&x);
    int ret=search(x,number,sizeof(number)/sizeof(number[0]));
    
    if (ret==-1){
        printf("无对应值");
    }else{
        printf("%d的名字是%s",x,name[ret]);    //注意返回字符串%s
    }
    return 0;
}


int search(int key,int a[],int length)
{
    int ret=-1;
    for (int i=0;i<length;i++){
        if (a[i]==key){
            ret=i;//这里易写错
            break;//这里容易忘记
        }
    }
    return ret;     //  单一出口
}