#include <stdio.h>
int main()
{
//初始化数量
int one=0;
int two=0;
int five=0;

int x;
printf("输入数额");
scanf("%d",&x);

//设计循环:
for (one=0;one<=x*10;one++){
    for(two=0;two<=x*10/2;two++){
        for(five=0;five<=x*10/5;five++){
            if (one*1+two*2+five*5==x*10){
                printf("%d个一角,%d个二角,%d个五角",one,two,five);

                goto out;//goto ＋ 标志词(out)
            }
        }
    }
}

out:  //标志放置处:goto会跳到这个标志放置位置,从而结束总循环
    return 0;

}