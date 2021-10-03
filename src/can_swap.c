#include "header.h"

bool can_swap(int board[][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == board[i][j + 1]) {
                return true;
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (board[i][j] == board[i + 1][j]) {
                return true;
            }
        }
    }
    return false;
}

