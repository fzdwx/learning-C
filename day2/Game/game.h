/*****************************
 * @Createdby likelove
 * @contact  980650920@qq.com
 * @date 2021/3/9
 * @desc ${desc}
 *
 * gcc test.c  -o start.exe
 ******************************/
#ifndef LEARNING_C_GAME_H
#define LEARNING_C_GAME_H
#include <stdio.h>
#define ROW 10
#define COL 10

void static initBoard(char board[ROW][COL], int row, int col);

void static displayBoard(char board[ROW][COL], int row, int col);

#endif //LEARNING_C_GAME_H
