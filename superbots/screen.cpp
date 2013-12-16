#include "screen.h"
#include <SDL/SDL.h>
#include <GL/gl.h>
#include <GL/glu.h>

screen::screen() {
}

screen::~screen() {
}

void screen::set_screen(int w, int h) {
    SDL_SetVideoMode(w, h, 0, SDL_OPENGL | SDL_RESIZABLE);
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 0, 0, 0);
    glClearColor(0.0, 0.0 ,0.0, 0);
}

void screen::set_screen(int w, int h, int fw, int fh) {
    SDL_SetVideoMode(w, h, 0, SDL_OPENGL | SDL_RESIZABLE);
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, fw, 0, fh);
    glClearColor(0.0, 0.0 ,0.0, 0);
}
