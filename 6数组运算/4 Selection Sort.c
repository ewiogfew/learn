#include <stdio.h>
int max(int a[],int len){
    int maxid=0;
    for (int i=1;i<len;i++){
      if (a[maxid]<a[i]){
        maxid=i;
      }
    }
    return maxid;
}


int main()
{
    int num[]={1,4,5,3,7,6,8,9,12,2,34,6,72,3,42,4,2,};
    int len=sizeof(num)/sizeof(num[0]);
    
    
    for (int i=0;i<len-1;i++){     //注意循环次数到len-1次就行,也就是循环9次,因为最后一个数不需要再去判断了
        
        int save;//交换中间储存值

//记录最大值处的id,注意每一次都需要-i来减短数组的长度,因为每选一次最大值都会固定在最右端
        int max_id=max(num,len-i);
        
        save=num[len-1-i];//记录最大索引位置处的值;

        num[len-i-1]=num[max_id];//找出最大值//赋值到最大位索引处

        num[max_id]=save;//maxid处与len-i处原始值交换

    }
    
    for (int i=0;i<len;i++){
        printf("%d\t",num[i]);
    }
    
    return 0;
}