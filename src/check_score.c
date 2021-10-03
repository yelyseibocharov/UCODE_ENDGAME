#include "header.h"

short check_score(int board[][4], int score) {
    for (short i = 0; i < 4; i++) {
        for (short j = 0; j < 4; j++) {
            score = board[i][j] > score ? board[i][j] : score; 
        }
    }
    return score;
}

