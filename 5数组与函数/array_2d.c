#include <stdio.h>
//实现井字游戏的胜利,O方标记为0,X方标记为1

int main()
{
    //int number_x=0;
    //int number_o=0;  注意这里应该定义到检查块中,行检查块和列检查块的数量应该是独立的
    
    int result=-1;//  -1没人赢, 1 x赢, 0 o赢

    //定义一个3乘3的二维数组
    int board[3][3];

    //读入矩阵:
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            scanf("%d",&board[i][j]);
        }
    }
    //检查行:
    for (int i=0;i<3&&result==-1;i++){
    int number_x=0;//每次读完一行数量重置
    int number_o=0; 
        for (int j=0;j<3;j++){
            if (board[i][j]==1){
                number_x++;
            }else{number_o++;}
    }
    if (number_o==3){
        result=0;
    }else if (number_x==3){
        result=1;
    }
}

    //检查列:
    if(result==-1){
    
    for (int j=0;j<3&&result==-1;j++){
    int number_x=0;//每次读完一行数量重置
    int number_o=0;
        for(int i=0;i<3;i++){
            if (board[i][j]==1){
                number_x++;
            }else{number_o++;}
        }

        if (number_o==3){
            result=0;
        }else if (number_x==3){
            result=1;
        }
    }
                 }
    //检查反对角线:
    if (result==-1){
        int number_x=0;//每次读完一行数量重置
        int number_o=0;
        for (int i=0;i<3;i++){
            if (board[i][i]==0)
            {
                number_o++;
            }else if(board[i][i]==1){
                number_x++;
            } 
        }
        if (number_x ==3) {
            result =1;
        } else if (number_o ==3) {
            result =0;
        }
    }

    //检查正对角线
    if (result==-1){
        int number_x=0;//每次读完一行数量重置
        int number_o=0;
        for (int i=0;i<3;i++){
            if (board[i][3-i-1]==0)
            {
                number_o++;
            }else if(board[i][3-i-1]==1){
                number_x++;
            } 
        }
        if (number_x ==3) {
            result =1;
        } else if (number_o ==3) {
            result =0;
        }
    }

    // 输出结果
    if (result ==1) {
        printf("X 方获胜!\n");
    } else if (result ==0) {
        printf("O 方获胜!\n");
    } else {
        printf("没有胜利者!\n");
    }

    return 0;
}