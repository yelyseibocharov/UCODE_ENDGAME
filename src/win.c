#include "header.h"

bool win(SDL_Renderer *renderer, int board[][4]) {
    SDL_Texture *background = IMG_LoadTexture(renderer, "resource/images/back_win.png");
    SDL_Texture *no_button = IMG_LoadTexture(renderer, "resource/images/no.png");
    SDL_Texture *yes_button = IMG_LoadTexture(renderer, "resource/images/yes.png");
    SDL_Rect no = {NO_X, NO_Y, 722, 750};
    SDL_Rect yes = {YES_X, YES_Y, 212, 750};

    SDL_Event event;
    while (1) {
        SDL_RenderClear(renderer);
        SDL_RenderCopy(renderer, background, NULL, NULL);
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
                        return false;
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
                        return true;
                    }
                break;
            }
        }
    }
}

