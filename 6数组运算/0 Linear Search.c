#include <stdio.h>
int search(int key,int a[],int length);

int main()
{
    int number[]={0,1,2,4,65,875,43,6,74,46,};
    int x;
    scanf("%d",&x);
    int ret=search(x,number,sizeof(number)/sizeof(number[0]));
    
    if (ret==-1){
        printf("%d不在数组里",x);
    }else{
        printf("%d在数组中的索引是%d",x,ret);
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