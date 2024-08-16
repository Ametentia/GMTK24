OGL_Context *gl;

void OGL_Init(SDL_Window *window) {
    M_Arena *arena = M_AllocArena(GB(4));

    gl = M_ArenaPush(arena, OGL_Context);
    gl->arena = arena;

    // @todo: setup params, might need to do it before window?
    //

    gl->window  = window;
    gl->context = SDL_GL_CreateContext(gl->window);
}

void OGL_SwapBuffers() {
    if (gl && gl->window) {
        SDL_GL_SwapWindow(gl->window);
    }
}

//
// --------------------------------------------------------------------------------
// :render_backend
// --------------------------------------------------------------------------------
//

void R_Clear(Vec4F colour, F32 depth) {
    glClearColor(colour.r, colour.g, colour.b, colour.a);
    glClearDepth(depth);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}
