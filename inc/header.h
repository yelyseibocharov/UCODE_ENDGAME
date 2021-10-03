#ifndef HEADER_H
#define HEADER_H

#define WINDOW_WIDTH 1000
#define WINDOW_HEIGHT 1000
#define MAIN_X 63
#define MAIN_Y 223

#define EXIT_X 210
#define EXIT_Y 850
#define EXIT_SIZE_X 280
#define EXIT_SIZE_Y 60

#define REFRESH_X 510
#define REFRESH_Y 850
#define REFRESH_SIZE_X 280
#define REFRESH_SIZE_Y 60

#define GAMEFIELD_X 200
#define GAMEFIELD_Y 200
#define GAMEFIELD_SIZE_X 600
#define GAMEFIELD_SIZE_Y 580

#define NO_X 722
#define NO_Y 750
#define NO_SIZE_X 79
#define NO_SIZE_Y 31

#define YES_X 212
#define YES_Y 750
#define YES_SIZE_X 79
#define YES_SIZE_Y 31

#define SQUARE1_X 200
#define SQUARE1_Y 200
#define SQUARE1_SIZE_X 150
#define SQUARE1_SIZE_Y 150

#define SQUARE2_X 350
#define SQUARE2_Y 200
#define SQUARE2_SIZE_X 150
#define SQUARE2_SIZE_Y 150

#define SQUARE3_X 500
#define SQUARE3_Y 200
#define SQUARE3_SIZE_X 150
#define SQUARE3_SIZE_Y 150

#define SQUARE4_X 650
#define SQUARE4_Y 200
#define SQUARE4_SIZE_X 150
#define SQUARE4_SIZE_Y 150

#define SQUARE5_X 200
#define SQUARE5_Y 340
#define SQUARE5_SIZE_X 150
#define SQUARE5_SIZE_Y 150

#define SQUARE6_X 350
#define SQUARE6_Y 340
#define SQUARE6_SIZE_X 150
#define SQUARE6_SIZE_Y 150

#define SQUARE7_X 500
#define SQUARE7_Y 340
#define SQUARE7_SIZE_X 150
#define SQUARE7_SIZE_Y 150

#define SQUARE8_X 650
#define SQUARE8_Y 340
#define SQUARE8_SIZE_X 150
#define SQUARE8_SIZE_Y 150


#define SQUARE9_X 200
#define SQUARE9_Y 480
#define SQUARE9_SIZE_X 150
#define SQUARE9_SIZE_Y 150

#define SQUARE10_X 350
#define SQUARE10_Y 480
#define SQUARE10_SIZE_X 150
#define SQUARE10_SIZE_Y 150

#define SQUARE11_X 500
#define SQUARE11_Y 480
#define SQUARE11_SIZE_X 150
#define SQUARE11_SIZE_Y 150

#define SQUARE12_X 650
#define SQUARE12_Y 480
#define SQUARE12_SIZE_X 150
#define SQUARE12_SIZE_Y 150

#define SQUARE13_X 200
#define SQUARE13_Y 620
#define SQUARE13_SIZE_X 150
#define SQUARE13_SIZE_Y 150

#define SQUARE14_X 350
#define SQUARE14_Y 620
#define SQUARE14_SIZE_X 150
#define SQUARE14_SIZE_Y 150

#define SQUARE15_X 500
#define SQUARE15_Y 620
#define SQUARE15_SIZE_X 150
#define SQUARE15_SIZE_Y 150

#define SQUARE16_X 650
#define SQUARE16_Y 620
#define SQUARE16_SIZE_X 150
#define SQUARE16_SIZE_Y 150


#define SCORE_X 200
#define SCORE_Y 100
#define SCORE_SIZE_X 159
#define SCORE_SIZE_Y 79

#define SCORE_NUM_X 400
#define SCORE_NUM_Y 100
#define SCORE_NUM_SIZE_X 159
#define SCORE_NUM_SIZE_Y 79

#include <SDL2/SDL.h>
#include "SDL2_image/SDL_image.h"
#include "SDL2_mixer/SDL_mixer.h"
#include "SDL2_ttf/SDL_ttf.h"
#include <stdio.h>
#include <stdbool.h>

#include <ncurses.h>
#include <unistd.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <stdio.h>

bool menu(SDL_Renderer *, bool);

bool vertical_swap(int board[][4], short row2, short barrier, short pivot2, short swap);
bool gorizontal_swap(int board[][4], short col2, short barrier, short pivot2, short swap);
bool can_swap(int board[][4]);
int check_board(int board[][4]);
short check_score(int board[][4], int score);
void generate_random(int board[][4], int empty_tiles);
int game(int board[][4], int *score, short empty_tiles, bool is_swapping, Mix_Music *sound);
bool lose(SDL_Renderer *renderer, int board[][4]);
bool win(SDL_Renderer *renderer, int board[][4]);


static SDL_Rect square00;
static SDL_Rect square01;
static SDL_Rect square02;
static SDL_Rect square03;
static SDL_Rect square10;
static SDL_Rect square11;
static SDL_Rect square12;
static SDL_Rect square13;
static SDL_Rect square20;
static SDL_Rect square21;
static SDL_Rect square22;
static SDL_Rect square23;
static SDL_Rect square30;
static SDL_Rect square31;
static SDL_Rect square32;
static SDL_Rect square33;

#endif

