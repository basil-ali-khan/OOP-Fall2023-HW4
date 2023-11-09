#include <SDL.h>
#include "drawing.hpp"
#pragma once


class Unit{
    protected:
        SDL_Rect srcRect, moverRect;

    public:
        Unit(SDL_Rect _srcRect, SDL_Rect _moverRect);
        virtual void fly() = 0;
        void draw();
};
