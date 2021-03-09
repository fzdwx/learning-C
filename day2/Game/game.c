/*****************************
 * @Createdby likelove
 * @contact  980650920@qq.com
 * @date 2021/3/9
 * @desc ${desc}
 * gcc test.c  -o start.exe
 ******************************/
#include "game.h"

void static initBoard(char board[ROW][COL], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            board[i][j] = ' ';
        }
    }
}

void static displayBoard(char board[ROW][COL], int row, int col) {
    for (int i = 0; i < row; i++) {
        // 一行数据
        for (int j = 0; j < col; ++j) {
            printf(" %c ", board[i][0]);
            if (j < col - 1) {
                printf("|");
            }
        }
        printf("\n");
        // 数据和数据之间的分割
        if (i < row - 1) {
            for (int j = 0; j < col; ++j) {
                printf("---");
                if (j < col - 1) {
                    printf("|");
                }
            }
            printf("\n");
        }
    }
}