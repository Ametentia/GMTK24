#include <SDL2/SDL.h>
#include <stdio.h>

#include "core.h"
#include "maths/maths.h"

#include "render/render.h"
#include "render/opengl.h"

#if OS_WINDOWS
int WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    (void) hInstance;
    (void) hPrevInstance;
    (void) lpCmdLine;
    (void) nCmdShow;
#else
int main(int argc, char **argv) {
    (void) argc;
    (void) argv;
#endif

    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("Error: Failed to initialise SDL2 (%s)\n", SDL_GetError());
        return 1;
    }

    S32 x = SDL_WINDOWPOS_CENTERED;
    S32 y = SDL_WINDOWPOS_CENTERED;

    S32 w = 1280;
    S32 h = 720;

    U32 flags = SDL_WINDOW_OPENGL | SDL_WINDOW_ALLOW_HIGHDPI;

    SDL_Window *window = SDL_CreateWindow("GMTK24", x, y, w, h, flags);
    if (!window) {
        printf("Error: Failed to create window (%s)\n", SDL_GetError());
        return 1;
    }

    OGL_Init(window);

    B32 running = true;

    for (; running ;) {
        SDL_Event e;
        while (SDL_PollEvent(&e)) {
            switch (e.type) {
                case SDL_QUIT: { running = false; } break;
            }
        }

        R_Clear(V4F(1, 0, 0, 1), 1.0f);

        OGL_SwapBuffers();
    }

    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}

// core
//
#define CORE_IMPL 1
#include "core.h"
#include "maths/maths.c"

// renderer
//
#include "render/opengl.c"
