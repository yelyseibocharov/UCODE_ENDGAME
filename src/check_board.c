#include "header.h"

int check_board(int board[][4]) {
    int a, b;
    int result = 0;
    int empty_tiles = 0;
    for (a = 0; a < 4; ++a) {
        for (b = 0; b < 4; ++b) {
            if (board[a][b] == 2048) {
                result = -1;
            }
            else if (board[a][b] == 0) {
                ++empty_tiles;
            }
        }
    }
    return result == -1 ? result : empty_tiles;
}

