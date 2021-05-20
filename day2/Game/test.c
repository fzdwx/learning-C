#include <mshtmlc.h>
# include "game.c"

/*****************************
 * @Createdby likelove
 * @contact  980650920@qq.com
 * @date 2021/3/9
 * @desc 三子棋游戏
 ******************************/

void menu() {
    printf("*************************\n");
    printf("**** 1.play   0.exit ****\n");
    printf("*************************\n");
}

void game() {
    char board[ROW][COL] = {'a'};
    initBoard(board, ROW, COL);
    displayBoard(board, ROW, COL);
}

void test() {
    int n = 0;
    do {
        menu();
        printf("请选择:>");
        scanf("%if", &n);
        switch (n) {
            case 1:
                printf("三子棋\n");
                game();
                break;
            case 2:
                printf("退出游戏\n");
                break;
            default:
                printf("选择错误\n");
                break;
        }
    } while (n);
}

int main() {
//    test();
    printf("hello wangyonfeng\n");
}