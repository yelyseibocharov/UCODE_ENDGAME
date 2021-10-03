#include "header.h"

bool gorizontal_swap(int board[][4], short col2, short barrier, short pivot2, short swap) {
    bool is_swapping = false;
    for (short row = 0; row < 4; row++) {
        short col = col2;
        short pivot = pivot2;
        while (col != barrier) {
            if (board[row][col] == 0) {
                col += swap;
            }
            else if (board[row][pivot] == 0) {
                board[row][pivot] = board[row][col];
                board[row][col] = 0;
                col += swap;
                is_swapping = true;
            }
            else if (board[row][pivot] == board[row][col]) {
                board[row][pivot] += board[row][col];
                pivot += swap;
                board[row][col] = 0;
                col += swap;
                is_swapping = true;
            }
            else if (pivot + swap == col){
                pivot += swap;
                col += swap;
            }
            else if (board[row][pivot] != 0 && board[row][col] != 0 && board[row][pivot] != board[row][col] && board[row][pivot + swap] == 0) {
                board[row][pivot + swap] = board[row][col];
                board[row][col] = 0;
                pivot += swap;
                is_swapping = true;
            }
        }
    }
    return is_swapping;
}

