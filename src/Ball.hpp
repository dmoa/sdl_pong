#pragma once

#include <SDL2/SDL.h>

class Ball {
public:
    Ball(int window_length);
    void Draw(SDL_Renderer* renderer);
    void Update(double dt);
    void ReactToPaddle(float x, float y, int w, int h);
    int LeftScreen();
private:
    bool AABB(float x, float y, int w, int h, float x2, float y2, int w2, int h2);
    SDL_Rect m_rect;
    float m_x;
    float m_y;
    float m_old_x;
    float m_old_y;
    int m_xv;
    int m_yv;
    int m_window_length;
    int m_offscreen;
};
