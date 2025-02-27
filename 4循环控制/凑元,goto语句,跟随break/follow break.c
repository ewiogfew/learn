#include <stdio.h>
int main()
{
    int x;
    //定义1角,2角,5角的数量
    int one,two,five;
    printf("输入你想凑的数额");
    scanf("%d",&x);

    //设置中断变量
    int exit=0;
    for (one =1;one<x*10;one++){
        for (two=1;two*2<x*10;two++){
            for (five=1;five*5<x*10;five++){
                if (one+two*2+five+5==x*10)  {
                    printf("%d个1角+%d个2角+%d个5角可以组合成\n",one,two,five);
                    exit=1;
                    break;
        }
            }   if (exit==1) break;
                }  if (exit=1) break;  
                   }

}