#include "header.h"

void generate_random(int board[][4], int empty_tiles) {
    srand(time(NULL));
    int a, b;
    int random = 0;
    int tile = 0;
    random = rand() % empty_tiles;
    tile = (rand() % 9 == 4) ? 4 : 2;
    for (a = 0; a < 4; ++a) {
        for (b = 0; b < 4; ++b) {
            if (board[a][b] == 0 && random != 0) {
                --random;
            }
            else if (board[a][b] == 0 && random == 0) {
	            board[a][b] = tile;
	            return;
            }
        }
    }
}

