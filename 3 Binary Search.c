#include <stdio.h>

int search(int key,int a[] ,int len)
{
    int right =len-1;
    int left= 0;    //注意left索引位置
    int ret=-1;

    while (left<=right)       //(left+right)/2!=0,key取边界值会死循环
    {
        int middle=(right+left)/2;
        if (a[middle]==key){
            ret=middle;
            break;
        }else if(a[middle]<key){
            left=middle+1;
        }else{
            right=middle-1;
        }
    }

    return ret;
}

int main()
{
    int x;
    scanf("%d",&x);
    int number[10]={1,2,3,4,5,6,7,8,9,10};

    int ret=search(x,number,sizeof(number)/sizeof(number[0]));

    if (ret==-1){
        printf("不在里面");
    }else{
        printf("%d在索引%d处",x,ret);
    }
    return 0;
}
