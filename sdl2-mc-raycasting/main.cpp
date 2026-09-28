#include<iostream>
#define SDL_MAIN_HANDLED
#include<SDL2/SDL.h>

using namespace std;

int main(int argc, char* argv[]) {
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window* window = SDL_CreateWindow("Demo", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN);

    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);

    bool running = true;
    SDL_Event event;

    while (running)
    {
        // Process events
        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_QUIT)
            {
                running = false;
            }
        }

        // Game logic
        // update();

        // Rendering logic
        // renderize();

        SDL_Delay(16); // ~60 FPS
    }

    SDL_Delay(15000);
    return 0;
}