#include <stdio.h>

void print_chessboard() {
    int size = 8;   
    char board[size][size];

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            board[i][j] = ' ';
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if ((i + j) % 2 == 0) {
                board[i][j] = '#';
            }
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}
