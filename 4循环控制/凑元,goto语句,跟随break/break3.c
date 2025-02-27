#include <stdio.h>
int main()
{
    int x;
    //定义1角,2角,5角的数量
    int one,two,five;
    printf("输入你想凑的数额");
    scanf("%d",&x);
//同一单位:元*10变角,就可以算数量

//遍历过程:
//第一次:for_1遍历第一次,for_2遍历第一次,for_3从five=1遍历到满足条件为止打印出来其中满足条件的组合方式
//第二次:for_1不动,for_2遍历第二次,for_3从five=1遍历到满足条件为止打印出来其中满足条件的组合方式
//第三次:for_1不动,for_2遍历第三次,for_3从five=1遍历到满足条件为止打印出来其中满足条件的组合方式
//以此类推for_2遍历到满足条件为止后,for_1遍历第二次,再继续以上步骤

//以1块钱为例子,应该遍历的总次数在10*5*2
    for (one =1;one<x*10;one++){
        for (two=1;two*2<x*10;two++){
            for (five=1;five*5<x*10;five++){
                if (one+two*2+five+5==x*10)  {
                    printf("%d个1角+%d个2角+%d个5角可以组合成\n",one,two,five);

        }
            }
                }    
                   }

}