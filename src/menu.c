#include "header.h"

bool menu(SDL_Renderer *renderer, bool running) {

    SDL_Event event;

    SDL_Texture *background = IMG_LoadTexture(renderer, "resource/images/back.png");
    SDL_Texture *game_field = IMG_LoadTexture(renderer, "resource/images/2048back.png");
    SDL_Texture *exit_button = IMG_LoadTexture(renderer, "resource/images/exit.png");
    SDL_Texture *square2 = IMG_LoadTexture(renderer, "resource/images/2.png");
    SDL_Texture *square4 = IMG_LoadTexture(renderer, "resource/images/4.png");
    SDL_Texture *square8 = IMG_LoadTexture(renderer, "resource/images/8.png");
    SDL_Texture *square16 = IMG_LoadTexture(renderer, "resource/images/16.png");
    SDL_Texture *square32_2 = IMG_LoadTexture(renderer, "resource/images/32.png");
    SDL_Texture *square64 = IMG_LoadTexture(renderer, "resource/images/64.png");
    SDL_Texture *square128 = IMG_LoadTexture(renderer, "resource/images/128.png");
    SDL_Texture *square256 = IMG_LoadTexture(renderer, "resource/images/256.png");
    SDL_Texture *square512 = IMG_LoadTexture(renderer, "resource/images/512.png");
    SDL_Texture *square1024 = IMG_LoadTexture(renderer, "resource/images/1024.png");
    SDL_Texture *square2048 = IMG_LoadTexture(renderer, "resource/images/2048.png");
    
    SDL_Texture *score_img = IMG_LoadTexture(renderer, "resource/images/score.png");
    SDL_Texture *score2_img = IMG_LoadTexture(renderer, "resource/images/score2.png");
    SDL_Texture *score4_img = IMG_LoadTexture(renderer, "resource/images/score4.png");
    SDL_Texture *score8_img = IMG_LoadTexture(renderer, "resource/images/score8.png");
    SDL_Texture *score16_img = IMG_LoadTexture(renderer, "resource/images/score16.png");
    SDL_Texture *score32_img = IMG_LoadTexture(renderer, "resource/images/score32.png");
    SDL_Texture *score64_img = IMG_LoadTexture(renderer, "resource/images/score64.png");
    SDL_Texture *score128_img = IMG_LoadTexture(renderer, "resource/images/score128.png");
    SDL_Texture *score256_img = IMG_LoadTexture(renderer, "resource/images/score256.png");
    SDL_Texture *score512_img = IMG_LoadTexture(renderer, "resource/images/score512.png");
    SDL_Texture *score1024_img = IMG_LoadTexture(renderer, "resource/images/score1024.png");
    SDL_Texture *score2048_img = IMG_LoadTexture(renderer, "resource/images/score2048.png");
    SDL_Texture *refresh_button = IMG_LoadTexture(renderer, "resource/images/refresh.png");
    //SDL_Texture *background_lose = IMG_LoadTexture(renderer, "resource/images/lose.png");
    /*SDL_Texture *no_button = IMG_LoadTexture(renderer, "resource/images/no.png");
    SDL_Texture *yes_button = IMG_LoadTexture(renderer, "resource/images/yes.png");*/
    //SDL_Texture *background_win = IMG_LoadTexture(renderer, "resource/images/win.png");
    Mix_Music *sound = Mix_LoadMUS("resource/music/sound.wav"); 
    /*sound[0] = Mix_LoadWAV("resource/music...");
    sound[1] = Mix_LoadWAV("resource/music...");*/
    Mix_Music *music = Mix_LoadMUS("resource/music/music.wav");

    //SDL_Rect lose = {0, 0, 1000, 1000};
    SDL_Rect gamefield = {GAMEFIELD_X, GAMEFIELD_Y, 600, 570};
    SDL_Rect exit = {EXIT_X, EXIT_Y, 280, 60};
    SDL_Rect refresh = {REFRESH_X, REFRESH_Y, 280, 60};
    SDL_Rect score = {SCORE_X, SCORE_Y, 159, 79};
    SDL_Rect score2 = {SCORE_NUM_X, SCORE_NUM_Y, 159, 79};
    SDL_Rect score4 = {SCORE_NUM_X, SCORE_NUM_Y, 159, 79};
    SDL_Rect score8 = {SCORE_NUM_X, SCORE_NUM_Y, 159, 79};
    SDL_Rect score16 = {SCORE_NUM_X, SCORE_NUM_Y, 159, 79};
    SDL_Rect score32 = {SCORE_NUM_X, SCORE_NUM_Y, 159, 79};
    SDL_Rect score64 = {SCORE_NUM_X, SCORE_NUM_Y, 159, 79};
    SDL_Rect score128 = {SCORE_NUM_X, SCORE_NUM_Y, 159, 79};
    SDL_Rect score256 = {SCORE_NUM_X, SCORE_NUM_Y, 159, 79};
    SDL_Rect score512 = {SCORE_NUM_X, SCORE_NUM_Y, 159, 79};
    SDL_Rect score1024 = {SCORE_NUM_X, SCORE_NUM_Y, 159, 79};
    SDL_Rect score2048 = {SCORE_NUM_X, SCORE_NUM_Y, 159, 79};
    /*SDL_Rect no = {NO_X, NO_Y, 722, 750};
    SDL_Rect yes = {YES_X, YES_Y, 212, 750};*/
    
    square00.x = SQUARE1_X;
    square00.y = SQUARE1_Y;
    square00.w = 150;
    square00.h = 150;
    
    square01.x = SQUARE2_X;
    square01.y = SQUARE2_Y;
    square01.w = 150;
    square01.h = 150;

    square02.x = SQUARE3_X;
    square02.y = SQUARE3_Y;
    square02.w = 150;
    square02.h = 150;

    square03.x = SQUARE4_X;
    square03.y = SQUARE4_Y;
    square03.w = 150;
    square03.h = 150;

    square10.x = SQUARE5_X;
    square10.y = SQUARE5_Y;
    square10.w = 150;
    square10.h = 150;

    square11.x = SQUARE6_X;
    square11.y = SQUARE6_Y;
    square11.w = 150;
    square11.h = 150;

    square12.x = SQUARE7_X;
    square12.y = SQUARE7_Y;
    square12.w = 150;
    square12.h = 150;

    square13.x = SQUARE8_X;
    square13.y = SQUARE8_Y;
    square13.w = 150;
    square13.h = 150;
    
    square20.x = SQUARE9_X;
    square20.y = SQUARE9_Y;
    square20.w = 150;
    square20.h = 150;

    square21.x = SQUARE10_X;
    square21.y = SQUARE10_Y;
    square21.w = 150;
    square21.h = 150;

    square22.x = SQUARE11_X;
    square22.y = SQUARE11_Y;
    square22.w = 150;
    square22.h = 150;

    square23.x = SQUARE12_X;
    square23.y = SQUARE12_Y;
    square23.w = 150;
    square23.h = 150;

    square30.x = SQUARE13_X;
    square30.y = SQUARE13_Y;
    square30.w = 150;
    square30.h = 150;

    square31.x = SQUARE14_X;
    square31.y = SQUARE14_Y;
    square31.w = 150;
    square31.h = 150;

    square32.x = SQUARE15_X;
    square32.y = SQUARE15_Y;
    square32.w = 150;
    square32.h = 150;

    square33.x = SQUARE16_X;
    square33.y = SQUARE16_Y;
    square33.w = 150;
    square33.h = 150;

    /*score2.x = SCORE1_X;
    score2.y = SCORE1_Y;
    score2.w = 150;
    score2.h = 150;
    
    score4.x = SCORE2_X;
    score4.y = SCORE2_Y;
    score4.w = 150;
    score4.h = 150;

    score8.x = SCORE3_X;
    score8.y = SCORE3_Y;
    score8.w = 150;
    score8.h = 150;

    score16.x = SCORE4_X;
    score16.y = SCORE4_Y;
    score16.w = 150;
    score16.h = 150;

    score32.x = SCORE1_X;
    score32.y = SCORE1_Y;
    score32.w = 150;
    score32.h = 150;
    
    score64.x = SCORE2_X;
    score64.y = SCORE2_Y;
    score64.w = 150;
    score64.h = 150;

    score128.x = SCORE3_X;
    score128.y = SCORE3_Y;
    score128.w = 150;
    score128.h = 150;

    score256.x = SCORE4_X;
    score256.y = SCORE4_Y;
    score256.w = 150;
    score256.h = 150;

    score512.x = SCORE1_X;
    score512.y = SCORE1_Y;
    score512.w = 150;
    score512.h = 150;
    
    score1024.x = SCORE2_X;
    score1024.y = SCORE2_Y;
    score1024.w = 150;
    score1024.h = 150;

    score2048.x = SCORE3_X;
    score2048.y = SCORE3_Y;
    score2048.w = 150;
    score2048.h = 150;*/

    int board[4][4] = {{0, 0, 0, 0},
                       {0, 0, 0, 0},
                       {0, 0, 0, 0},
                       {0, 0, 0, 0}};
    //char sym;
    short empty_tiles = 0;
    bool is_swapping = 0;
    generate_random(board, 16);
    Mix_PlayMusic(music, -1);
    //short a = 1;
    while (running) {
        //SDL_RenderClear(renderer);
        //if (a == 1) {
            SDL_RenderClear(renderer);
            SDL_RenderCopy(renderer, background, NULL, NULL);
            SDL_RenderCopy(renderer, game_field, NULL, &gamefield);
            SDL_RenderCopy(renderer, exit_button, NULL, &exit);
            SDL_RenderCopy(renderer, refresh_button, NULL, &refresh);
            SDL_RenderCopy(renderer, score_img, NULL, &score);
            int score = check_score(board, 0);

            while (SDL_PollEvent(&event))
            {
                SDL_RenderClear(renderer);
                
                switch (event.type) {
                    case SDL_KEYDOWN:
                        if (event.key.keysym.sym == SDLK_w) {
                            is_swapping = vertical_swap(board, 1, 4, 0, 1);
                            game(board, &score, empty_tiles, is_swapping, sound);
                            /*if (a == 0) {
                                empty_tiles = 0;
                                is_swapping = 0;
                                generate_random(board, 16);
                            }
                            else if (a == -1) {
                                empty_tiles = 0;
                                is_swapping = 0;
                                generate_random(board, 16);
                            }*/
                        }
                        if (event.key.keysym.sym == SDLK_d) {
                            is_swapping = gorizontal_swap(board, 2, -1, 3, -1);
                            game(board, &score, empty_tiles, is_swapping, sound);
                            /*if (a == 0) {
                                empty_tiles = 0;
                                is_swapping = 0;
                                generate_random(board, 16);
                            }
                            else if (a == -1) {
                                empty_tiles = 0;
                                is_swapping = 0;
                                generate_random(board, 16);
                            }*/
                        }
                        if (event.key.keysym.sym == SDLK_s) {
                            is_swapping = vertical_swap(board, 2, -1, 3, -1);
                            game(board, &score, empty_tiles, is_swapping, sound);
                            /*if (a == 0) {
                                empty_tiles = 0;
                                is_swapping = 0;
                                generate_random(board, 16);
                            }
                            else if (a == -1) {
                                empty_tiles = 0;
                                is_swapping = 0;
                                generate_random(board, 16);
                            }*/
                        } 
                        if (event.key.keysym.sym == SDLK_a) {
                            is_swapping = gorizontal_swap(board, 1, 4, 0, 1);
                            game(board, &score, empty_tiles, is_swapping, sound);
                            /*if (a == 0) {
                                empty_tiles = 0;
                                is_swapping = 0;
                                generate_random(board, 16);
                            }
                            else if (a == -1) {
                                empty_tiles = 0;
                                is_swapping = 0;
                                generate_random(board, 16);
                            }*/
                        } 
                        if (event.key.keysym.sym == SDLK_ESCAPE) {
                            running = false;
                        }
                    break;
                    case SDL_MOUSEBUTTONDOWN:
                        if (event.button.button == SDL_BUTTON_LEFT 
                        && event.button.x >= EXIT_X 
                        && event.button.x <= EXIT_X + EXIT_SIZE_X 
                        && event.button.y >= EXIT_Y 
                        && event.button.y <= EXIT_Y + EXIT_SIZE_Y)
                        {
                            running = false;
                        }
                        else if (event.button.button == SDL_BUTTON_LEFT 
                        && event.button.x >= REFRESH_X 
                        && event.button.x <= REFRESH_X + REFRESH_SIZE_X 
                        && event.button.y >= REFRESH_Y 
                        && event.button.y <= REFRESH_Y + REFRESH_SIZE_Y)
                        {
                            for (short i = 0; i < 4; i++) {
                                for (short j = 0; j < 4; j++) {
                                    board[i][j] = 0;
                                }
                            }
                            empty_tiles = 0;
                            is_swapping = 0;
                            generate_random(board, 16);
                        }
                    break;
                }
            }
            if (score == 2) {
                SDL_RenderCopy(renderer, score2_img, NULL, &score2);
            }
            else if (score == 4) {
                SDL_RenderCopy(renderer, score4_img, NULL, &score4);
            }
            else if (score == 8) {
                SDL_RenderCopy(renderer, score8_img, NULL, &score8);
            }
            else if (score == 16) {
                SDL_RenderCopy(renderer, score16_img, NULL, &score16);
            }
            else if (score == 32) {
                SDL_RenderCopy(renderer, score32_img, NULL, &score32);
            }
            else if (score == 64) {
                SDL_RenderCopy(renderer, score64_img, NULL, &score64);
            }
            else if (score == 128) {
                SDL_RenderCopy(renderer, score128_img, NULL, &score128);
            }
            else if (score == 256) {
                SDL_RenderCopy(renderer, score256_img, NULL, &score256);
            }
            else if (score == 512) {
                SDL_RenderCopy(renderer, score512_img, NULL, &score512);
            }
            else if (score == 1024) {
                SDL_RenderCopy(renderer, score1024_img, NULL, &score1024);
            }
            else if (score == 2048) {
                SDL_RenderCopy(renderer, score2048_img, NULL, &score2048);
            }
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++) {
                    // -------------------2---------------------
                    if (board [0][0] == 2) {
                        SDL_RenderCopy(renderer, square2, NULL, &square00);
                    } 
                    if(board[0][1] == 2){
                        SDL_RenderCopy(renderer, square2, NULL, &square01);
                    }
                    if(board[0][2] == 2){
                        SDL_RenderCopy(renderer, square2, NULL, &square02);
                    }
                    if(board[0][3] == 2){
                        SDL_RenderCopy(renderer, square2, NULL, &square03);
                    }

                    if (board [1][0] == 2) {
                        SDL_RenderCopy(renderer, square2, NULL, &square10);
                    } 
                    if(board[1][1] == 2){
                        SDL_RenderCopy(renderer, square2, NULL, &square11);
                    }
                    if(board[1][2] == 2){
                        SDL_RenderCopy(renderer, square2, NULL, &square12);
                    }
                    if(board[1][3] == 2){
                        SDL_RenderCopy(renderer, square2, NULL, &square13);
                    }

                    if (board [2][0] == 2) {
                        SDL_RenderCopy(renderer, square2, NULL, &square20);
                    } 
                    if(board[2][1] == 2){
                        SDL_RenderCopy(renderer, square2, NULL, &square21);
                    }
                    if(board[2][2] == 2){
                        SDL_RenderCopy(renderer, square2, NULL, &square22);
                    }
                    if(board[2][3] == 2){
                        SDL_RenderCopy(renderer, square2, NULL, &square23);
                    }

                    if (board [3][0] == 2) {
                        SDL_RenderCopy(renderer, square2, NULL, &square30);
                    } 
                    if(board[3][1] == 2){
                        SDL_RenderCopy(renderer, square2, NULL, &square31);
                    }
                    if(board[3][2] == 2){
                        SDL_RenderCopy(renderer, square2, NULL, &square32);
                    }
                    if(board[3][3] == 2){
                        SDL_RenderCopy(renderer, square2, NULL, &square33);
                    }

                    // -------------------4---------------------

                    if (board [0][0] == 4) {
                        SDL_RenderCopy(renderer, square4, NULL, &square00);
                    } 
                    if(board[0][1] == 4){
                        SDL_RenderCopy(renderer, square4, NULL, &square01);
                    }
                    if(board[0][2] == 4){
                        SDL_RenderCopy(renderer, square4, NULL, &square02);
                    }
                    if(board[0][3] == 4){
                        SDL_RenderCopy(renderer, square4, NULL, &square03);
                    }

                    if (board [1][0] == 4) {
                        SDL_RenderCopy(renderer, square4, NULL, &square10);
                    } 
                    if(board[1][1] == 4){
                        SDL_RenderCopy(renderer, square4, NULL, &square11);
                    }
                    if(board[1][2] == 4){
                        SDL_RenderCopy(renderer, square4, NULL, &square12);
                    }
                    if(board[1][3] == 4){
                        SDL_RenderCopy(renderer, square4, NULL, &square13);
                    }

                    if (board [2][0] == 4) {
                        SDL_RenderCopy(renderer, square4, NULL, &square20);
                    } 
                    if(board[2][1] == 4){
                        SDL_RenderCopy(renderer, square4, NULL, &square21);
                    }
                    if(board[2][2] == 4){
                        SDL_RenderCopy(renderer, square4, NULL, &square22);
                    }
                    if(board[2][3] == 4){
                        SDL_RenderCopy(renderer, square4, NULL, &square23);
                    }

                    if (board [3][0] == 4) {
                        SDL_RenderCopy(renderer, square4, NULL, &square30);
                    } 
                    if(board[3][1] == 4){
                        SDL_RenderCopy(renderer, square4, NULL, &square31);
                    }
                    if(board[3][2] == 4){
                        SDL_RenderCopy(renderer, square4, NULL, &square32);
                    }
                    if(board[3][3] == 4){
                        SDL_RenderCopy(renderer, square4, NULL, &square33);
                    }

                    // -------------------8---------------------

                    if (board [0][0] == 8) {
                        SDL_RenderCopy(renderer, square8, NULL, &square00);
                    } 
                    if(board[0][1] == 8){
                        SDL_RenderCopy(renderer, square8, NULL, &square01);
                    }
                    if(board[0][2] == 8){
                        SDL_RenderCopy(renderer, square8, NULL, &square02);
                    }
                    if(board[0][3] == 8){
                        SDL_RenderCopy(renderer, square8, NULL, &square03);
                    }

                    if (board [1][0] == 8) {
                        SDL_RenderCopy(renderer, square8, NULL, &square10);
                    } 
                    if(board[1][1] == 8){
                        SDL_RenderCopy(renderer, square8, NULL, &square11);
                    }
                    if(board[1][2] == 8){
                        SDL_RenderCopy(renderer, square8, NULL, &square12);
                    }
                    if(board[1][3] == 8){
                        SDL_RenderCopy(renderer, square8, NULL, &square13);
                    }

                    if (board [2][0] == 8) {
                        SDL_RenderCopy(renderer, square8, NULL, &square20);
                    } 
                    if(board[2][1] == 8){
                        SDL_RenderCopy(renderer, square8, NULL, &square21);
                    }
                    if(board[2][2] == 8){
                        SDL_RenderCopy(renderer, square8, NULL, &square22);
                    }
                    if(board[2][3] == 8){
                        SDL_RenderCopy(renderer, square8, NULL, &square23);
                    }

                    if (board [3][0] == 8) {
                        SDL_RenderCopy(renderer, square8, NULL, &square30);
                    } 
                    if(board[3][1] == 8){
                        SDL_RenderCopy(renderer, square8, NULL, &square31);
                    }
                    if(board[3][2] == 8){
                        SDL_RenderCopy(renderer, square8, NULL, &square32);
                    }
                    if(board[3][3] == 8){
                        SDL_RenderCopy(renderer, square8, NULL, &square33);
                    }

                    // -------------------16---------------------

                    if (board [0][0] == 16) {
                        SDL_RenderCopy(renderer, square16, NULL, &square00);
                    } 
                    if(board[0][1] == 16){
                        SDL_RenderCopy(renderer, square16, NULL, &square01);
                    }
                    if(board[0][2] == 16){
                        SDL_RenderCopy(renderer, square16, NULL, &square02);
                    }
                    if(board[0][3] == 16){
                        SDL_RenderCopy(renderer, square16, NULL, &square03);
                    }

                    if (board [1][0] == 16) {
                        SDL_RenderCopy(renderer, square16, NULL, &square10);
                    } 
                    if(board[1][1] == 16){
                        SDL_RenderCopy(renderer, square16, NULL, &square11);
                    }
                    if(board[1][2] == 16){
                        SDL_RenderCopy(renderer, square16, NULL, &square12);
                    }
                    if(board[1][3] == 16){
                        SDL_RenderCopy(renderer, square16, NULL, &square13);
                    }

                    if (board [2][0] == 16) {
                        SDL_RenderCopy(renderer, square16, NULL, &square20);
                    } 
                    if(board[2][1] == 16){
                        SDL_RenderCopy(renderer, square16, NULL, &square21);
                    }
                    if(board[2][2] == 16){
                        SDL_RenderCopy(renderer, square16, NULL, &square22);
                    }
                    if(board[2][3] == 16){
                        SDL_RenderCopy(renderer, square16, NULL, &square23);
                    }

                    if (board [3][0] == 16) {
                        SDL_RenderCopy(renderer, square16, NULL, &square30);
                    } 
                    if(board[3][1] == 16){
                        SDL_RenderCopy(renderer, square16, NULL, &square31);
                    }
                    if(board[3][2] == 16){
                        SDL_RenderCopy(renderer, square16, NULL, &square32);
                    }
                    if(board[3][3] == 16){
                        SDL_RenderCopy(renderer, square16, NULL, &square33);
                    }

                    // -------------------32---------------------

                    if (board [0][0] == 32) {
                        SDL_RenderCopy(renderer, square32_2, NULL, &square00);
                    } 
                    if(board[0][1] == 32){
                        SDL_RenderCopy(renderer, square32_2, NULL, &square01);
                    }
                    if(board[0][2] == 32){
                        SDL_RenderCopy(renderer, square32_2, NULL, &square02);
                    }
                    if(board[0][3] == 32){
                        SDL_RenderCopy(renderer, square32_2, NULL, &square03);
                    }

                    if (board [1][0] == 32) {
                        SDL_RenderCopy(renderer, square32_2, NULL, &square10);
                    } 
                    if(board[1][1] == 32){
                        SDL_RenderCopy(renderer, square32_2, NULL, &square11);
                    }
                    if(board[1][2] == 32){
                        SDL_RenderCopy(renderer, square32_2, NULL, &square12);
                    }
                    if(board[1][3] == 32){
                        SDL_RenderCopy(renderer, square32_2, NULL, &square13);
                    }

                    if (board [2][0] == 32) {
                        SDL_RenderCopy(renderer, square32_2, NULL, &square20);
                    } 
                    if(board[2][1] == 32){
                        SDL_RenderCopy(renderer, square32_2, NULL, &square21);
                    }
                    if(board[2][2] == 32){
                        SDL_RenderCopy(renderer, square32_2, NULL, &square22);
                    }
                    if(board[2][3] == 32){
                        SDL_RenderCopy(renderer, square32_2, NULL, &square23);
                    }

                    if (board [3][0] == 32) {
                        SDL_RenderCopy(renderer, square32_2, NULL, &square30);
                    } 
                    if(board[3][1] == 32){
                        SDL_RenderCopy(renderer, square32_2, NULL, &square31);
                    }
                    if(board[3][2] == 32){
                        SDL_RenderCopy(renderer, square32_2, NULL, &square32);
                    }
                    if(board[3][3] == 32){
                        SDL_RenderCopy(renderer, square32_2, NULL, &square33);
                    }

                    // -------------------64---------------------

                    if (board [0][0] == 64) {
                        SDL_RenderCopy(renderer, square64, NULL, &square00);
                    } 
                    if(board[0][1] == 64){
                        SDL_RenderCopy(renderer, square64, NULL, &square01);
                    }
                    if(board[0][2] == 64){
                        SDL_RenderCopy(renderer, square64, NULL, &square02);
                    }
                    if(board[0][3] == 64){
                        SDL_RenderCopy(renderer, square64, NULL, &square03);
                    }

                    if (board [1][0] == 64) {
                        SDL_RenderCopy(renderer, square64, NULL, &square10);
                    } 
                    if(board[1][1] == 64){
                        SDL_RenderCopy(renderer, square64, NULL, &square11);
                    }
                    if(board[1][2] == 64){
                        SDL_RenderCopy(renderer, square64, NULL, &square12);
                    }
                    if(board[1][3] == 64){
                        SDL_RenderCopy(renderer, square64, NULL, &square13);
                    }

                    if (board [2][0] == 64) {
                        SDL_RenderCopy(renderer, square64, NULL, &square20);
                    } 
                    if(board[2][1] == 64){
                        SDL_RenderCopy(renderer, square64, NULL, &square21);
                    }
                    if(board[2][2] == 64){
                        SDL_RenderCopy(renderer, square64, NULL, &square22);
                    }
                    if(board[2][3] == 64){
                        SDL_RenderCopy(renderer, square64, NULL, &square23);
                    }

                    if (board [3][0] == 64) {
                        SDL_RenderCopy(renderer, square64, NULL, &square30);
                    } 
                    if(board[3][1] == 64){
                        SDL_RenderCopy(renderer, square64, NULL, &square31);
                    }
                    if(board[3][2] == 64){
                        SDL_RenderCopy(renderer, square64, NULL, &square32);
                    }
                    if(board[3][3] == 64){
                        SDL_RenderCopy(renderer, square64, NULL, &square33);
                    }
                    // -------------------128---------------------

                    if (board [0][0] == 128) {
                        SDL_RenderCopy(renderer, square128, NULL, &square00);
                    } 
                    if(board[0][1] == 128){
                        SDL_RenderCopy(renderer, square128, NULL, &square01);
                    }
                    if(board[0][2] == 128){
                        SDL_RenderCopy(renderer, square128, NULL, &square02);
                    }
                    if(board[0][3] == 128){
                        SDL_RenderCopy(renderer, square128, NULL, &square03);
                    }

                    if (board [1][0] == 128) {
                        SDL_RenderCopy(renderer, square128, NULL, &square10);
                    } 
                    if(board[1][1] == 128){
                        SDL_RenderCopy(renderer, square128, NULL, &square11);
                    }
                    if(board[1][2] == 128){
                        SDL_RenderCopy(renderer, square128, NULL, &square12);
                    }
                    if(board[1][3] == 128){
                        SDL_RenderCopy(renderer, square128, NULL, &square13);
                    }

                    if (board [2][0] == 128) {
                        SDL_RenderCopy(renderer, square128, NULL, &square20);
                    } 
                    if(board[2][1] == 128){
                        SDL_RenderCopy(renderer, square128, NULL, &square21);
                    }
                    if(board[2][2] == 128){
                        SDL_RenderCopy(renderer, square128, NULL, &square22);
                    }
                    if(board[2][3] == 128){
                        SDL_RenderCopy(renderer, square128, NULL, &square23);
                    }

                    if (board [3][0] == 128) {
                        SDL_RenderCopy(renderer, square128, NULL, &square30);
                    } 
                    if(board[3][1] == 128){
                        SDL_RenderCopy(renderer, square128, NULL, &square31);
                    }
                    if(board[3][2] == 128){
                        SDL_RenderCopy(renderer, square128, NULL, &square32);
                    }
                    if(board[3][3] == 128){
                        SDL_RenderCopy(renderer, square128, NULL, &square33);
                    }
                    // -------------------256---------------------

                    if (board [0][0] == 256) {
                        SDL_RenderCopy(renderer, square256, NULL, &square00);
                    } 
                    if(board[0][1] == 256){
                        SDL_RenderCopy(renderer, square256, NULL, &square01);
                    }
                    if(board[0][2] == 256){
                        SDL_RenderCopy(renderer, square256, NULL, &square02);
                    }
                    if(board[0][3] == 256){
                        SDL_RenderCopy(renderer, square256, NULL, &square03);
                    }

                    if (board [1][0] == 256) {
                        SDL_RenderCopy(renderer, square256, NULL, &square10);
                    } 
                    if(board[1][1] == 256){
                        SDL_RenderCopy(renderer, square256, NULL, &square11);
                    }
                    if(board[1][2] == 256){
                        SDL_RenderCopy(renderer, square256, NULL, &square12);
                    }
                    if(board[1][3] == 256){
                        SDL_RenderCopy(renderer, square256, NULL, &square13);
                    }

                    if (board [2][0] == 256) {
                        SDL_RenderCopy(renderer, square256, NULL, &square20);
                    } 
                    if(board[2][1] == 256){
                        SDL_RenderCopy(renderer, square256, NULL, &square21);
                    }
                    if(board[2][2] == 256){
                        SDL_RenderCopy(renderer, square256, NULL, &square22);
                    }
                    if(board[2][3] == 256){
                        SDL_RenderCopy(renderer, square256, NULL, &square23);
                    }

                    if (board [3][0] == 256) {
                        SDL_RenderCopy(renderer, square256, NULL, &square30);
                    } 
                    if(board[3][1] == 256){
                        SDL_RenderCopy(renderer, square256, NULL, &square31);
                    }
                    if(board[3][2] == 256){
                        SDL_RenderCopy(renderer, square256, NULL, &square32);
                    }
                    if(board[3][3] == 256){
                        SDL_RenderCopy(renderer, square256, NULL, &square33);
                    }
                    // -------------------512---------------------

                    if (board [0][0] == 512) {
                        SDL_RenderCopy(renderer, square512, NULL, &square00);
                    } 
                    if(board[0][1] == 512){
                        SDL_RenderCopy(renderer, square512, NULL, &square01);
                    }
                    if(board[0][2] == 512){
                        SDL_RenderCopy(renderer, square512, NULL, &square02);
                    }
                    if(board[0][3] == 512){
                        SDL_RenderCopy(renderer, square512, NULL, &square03);
                    }

                    if (board [1][0] == 512) {
                        SDL_RenderCopy(renderer, square512, NULL, &square10);
                    } 
                    if(board[1][1] == 512){
                        SDL_RenderCopy(renderer, square512, NULL, &square11);
                    }
                    if(board[1][2] == 512){
                        SDL_RenderCopy(renderer, square512, NULL, &square12);
                    }
                    if(board[1][3] == 512){
                        SDL_RenderCopy(renderer, square512, NULL, &square13);
                    }

                    if (board [2][0] == 512) {
                        SDL_RenderCopy(renderer, square512, NULL, &square20);
                    } 
                    if(board[2][1] == 512){
                        SDL_RenderCopy(renderer, square512, NULL, &square21);
                    }
                    if(board[2][2] == 512){
                        SDL_RenderCopy(renderer, square512, NULL, &square22);
                    }
                    if(board[2][3] == 512){
                        SDL_RenderCopy(renderer, square512, NULL, &square23);
                    }

                    if (board [3][0] == 512) {
                        SDL_RenderCopy(renderer, square512, NULL, &square30);
                    } 
                    if(board[3][1] == 512){
                        SDL_RenderCopy(renderer, square512, NULL, &square31);
                    }
                    if(board[3][2] == 512){
                        SDL_RenderCopy(renderer, square512, NULL, &square32);
                    }
                    if(board[3][3] == 512){
                        SDL_RenderCopy(renderer, square512, NULL, &square33);
                    }

                    // -------------------1024---------------------

                    if (board [0][0] == 1024) {
                        SDL_RenderCopy(renderer, square1024, NULL, &square00);
                    } 
                    if(board[0][1] == 1024){
                        SDL_RenderCopy(renderer, square1024, NULL, &square01);
                    }
                    if(board[0][2] == 1024){
                        SDL_RenderCopy(renderer, square1024, NULL, &square02);
                    }
                    if(board[0][3] == 1024){
                        SDL_RenderCopy(renderer, square1024, NULL, &square03);
                    }

                    if (board [1][0] == 1024) {
                        SDL_RenderCopy(renderer, square1024, NULL, &square10);
                    } 
                    if(board[1][1] == 1024){
                        SDL_RenderCopy(renderer, square1024, NULL, &square11);
                    }
                    if(board[1][2] == 1024){
                        SDL_RenderCopy(renderer, square1024, NULL, &square12);
                    }
                    if(board[1][3] == 1024){
                        SDL_RenderCopy(renderer, square1024, NULL, &square13);
                    }

                    if (board [2][0] == 1024) {
                        SDL_RenderCopy(renderer, square1024, NULL, &square20);
                    } 
                    if(board[2][1] == 1024){
                        SDL_RenderCopy(renderer, square1024, NULL, &square21);
                    }
                    if(board[2][2] == 1024){
                        SDL_RenderCopy(renderer, square1024, NULL, &square22);
                    }
                    if(board[2][3] == 1024){
                        SDL_RenderCopy(renderer, square1024, NULL, &square23);
                    }

                    if (board [3][0] == 1024) {
                        SDL_RenderCopy(renderer, square1024, NULL, &square30);
                    } 
                    if(board[3][1] == 1024){
                        SDL_RenderCopy(renderer, square1024, NULL, &square31);
                    }
                    if(board[3][2] == 1024){
                        SDL_RenderCopy(renderer, square1024, NULL, &square32);
                    }
                    if(board[3][3] == 1024){
                        SDL_RenderCopy(renderer, square1024, NULL, &square33);
                    }
                    // -------------------1024---------------------

                    if (board [0][0] == 2048) {
                        SDL_RenderCopy(renderer, square2048, NULL, &square00);
                    } 
                    if(board[0][1] == 2048){
                        SDL_RenderCopy(renderer, square2048, NULL, &square01);
                    }
                    if(board[0][2] == 2048){
                        SDL_RenderCopy(renderer, square2048, NULL, &square02);
                    }
                    if(board[0][3] == 2048){
                        SDL_RenderCopy(renderer, square2048, NULL, &square03);
                    }

                    if (board [1][0] == 2048) {
                        SDL_RenderCopy(renderer, square2048, NULL, &square10);
                    } 
                    if(board[1][1] == 2048){
                        SDL_RenderCopy(renderer, square2048, NULL, &square11);
                    }
                    if(board[1][2] == 2048){
                        SDL_RenderCopy(renderer, square2048, NULL, &square12);
                    }
                    if(board[1][3] == 2048){
                        SDL_RenderCopy(renderer, square2048, NULL, &square13);
                    }

                    if (board [2][0] == 2048) {
                        SDL_RenderCopy(renderer, square2048, NULL, &square20);
                    } 
                    if(board[2][1] == 2048){
                        SDL_RenderCopy(renderer, square2048, NULL, &square21);
                    }
                    if(board[2][2] == 2048){
                        SDL_RenderCopy(renderer, square2048, NULL, &square22);
                    }
                    if(board[2][3] == 2048){
                        SDL_RenderCopy(renderer, square2048, NULL, &square23);
                    }

                    if (board [3][0] == 2048) {
                        SDL_RenderCopy(renderer, square2048, NULL, &square30);
                    } 
                    if(board[3][1] == 2048){
                        SDL_RenderCopy(renderer, square2048, NULL, &square31);
                    }
                    if(board[3][2] == 2048){
                        SDL_RenderCopy(renderer, square2048, NULL, &square32);
                    }
                    if(board[3][3] == 2048){
                        SDL_RenderCopy(renderer, square2048, NULL, &square33);
                    }
                }
            }
        /*}
        else if (a == 0) {
            bool is = true;
            while (is) {
                SDL_RenderClear(renderer);
                SDL_RenderCopy(renderer, background_lose, NULL, NULL);
                SDL_RenderCopy(renderer, no_button, NULL, &no);
                SDL_RenderCopy(renderer, yes_button, NULL, &yes);
                while (SDL_PollEvent(&event)) {
                    SDL_RenderClear(renderer);
                    SDL_RenderCopy(renderer, background_lose, NULL, &lose);
                    switch (event.type) {
                    case SDL_MOUSEBUTTONDOWN:
                        if (event.button.button == SDL_BUTTON_LEFT 
                        && event.button.x >= NO_X 
                        && event.button.x <= NO_X + NO_SIZE_X 
                        && event.button.y >= NO_Y
                        && event.button.y <= NO_Y + NO_SIZE_Y)
                        {
                            running = false;
                            is = false;
                        }
                        else if (event.button.button == SDL_BUTTON_LEFT 
                        && event.button.x >= YES_X 
                        && event.button.x <= YES_X + YES_SIZE_X 
                        && event.button.y >= YES_Y 
                        && event.button.y <= YES_Y + YES_SIZE_Y)
                        {
                            for (short i = 0; i < 4; i++) {
                                for (short j = 0; j < 4; j++) {
                                    board[i][j] = 0;
                                }
                            }
                            is = false;
                            a = 1;
                        }
                    break;
                    }
                }
            }
        }
        else if (a == -1) {
            bool is = true;
            while (is) {
                SDL_RenderClear(renderer);
                SDL_RenderCopy(renderer, background_win, NULL, NULL);
                SDL_RenderCopy(renderer, no_button, NULL, &no);
                SDL_RenderCopy(renderer, yes_button, NULL, &yes);
                while (SDL_PollEvent(&event)) {
                    SDL_RenderClear(renderer);
                    switch (event.type) {
                    case SDL_MOUSEBUTTONDOWN:
                        if (event.button.button == SDL_BUTTON_LEFT 
                        && event.button.x >= NO_X 
                        && event.button.x <= NO_X + NO_SIZE_X 
                        && event.button.y >= NO_Y
                        && event.button.y <= NO_Y + NO_SIZE_Y)
                        {
                            running = false;
                            is = false;
                        }
                        else if (event.button.button == SDL_BUTTON_LEFT 
                        && event.button.x >= YES_X 
                        && event.button.x <= YES_X + YES_SIZE_X 
                        && event.button.y >= YES_Y 
                        && event.button.y <= YES_Y + YES_SIZE_Y)
                        {
                            for (short i = 0; i < 4; i++) {
                                for (short j = 0; j < 4; j++) {
                                    board[i][j] = 0;
                                }
                            }
                            is = false;
                            a = 1;
                        }
                    break;
                    }
                }
            }
        }*/
        SDL_RenderPresent(renderer);
    }
    return 0;
}

