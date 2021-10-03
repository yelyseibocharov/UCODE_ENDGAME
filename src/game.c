#include "header.h"

int game(int board[][4], int *score, short empty_tiles, bool is_swapping, Mix_Music *sound) {
    empty_tiles = check_board(board);
    if (is_swapping) {
        generate_random(board, empty_tiles);
        empty_tiles--;
        Mix_PlayMusic(sound, 0);
    }
    *score = check_score(board, *score);
    if (empty_tiles == 0) {
        if (can_swap(board) == false) {
            return 0;
        }
    }
    if (empty_tiles == -1) {
        return -1;
    }
    return 1;
}

