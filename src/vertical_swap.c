#include "header.h"

bool vertical_swap(int board[][4], short row2, short barrier, short pivot2, short swap) {
    bool is_swapping = false;
    for (short col = 0; col < 4; col++) {
        short row = row2;
        short pivot = pivot2;
        while (row != barrier) {
            if (board[row][col] == 0) {
                row += swap;
            }
            else if (board[pivot][col] == 0) {
                board[pivot][col] = board[row][col];
                board[row][col] = 0;
                row += swap;
                is_swapping = true;
            }
            else if (board[pivot][col] == board[row][col]) {
                board[pivot][col] += board[row][col];
                pivot += swap;
                board[row][col] = 0;
                row += swap;
                is_swapping = true;
            }
            else if (pivot + swap == row) {
                pivot += swap;
                row += swap;
            }
            else if (board[pivot][col] != 0 && board[row][col] != 0 && board[pivot][col] != board[row][col] && board[pivot + swap][col] == 0) {
                board[pivot + swap][col] = board[row][col];
                board[row][col] = 0;
                pivot += swap;
                is_swapping = true;
            }
        }
    }
    return is_swapping;
}

