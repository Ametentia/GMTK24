#if !defined(OPENGL_H_)
#define OPENGL_H_

#include <GL/gl.h>

typedef struct OGL_Context OGL_Context;
struct OGL_Context {
    M_Arena *arena;

    SDL_Window    *window;
    SDL_GLContext *context;
};

extern OGL_Context *gl;

function void OGL_Init(SDL_Window *window);
function void OGL_SwapBuffers();

#endif  // OPENGL_H_
