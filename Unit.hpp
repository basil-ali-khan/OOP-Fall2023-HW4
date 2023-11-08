#include <SDL.h>
#include "drawing.hpp"
#pragma once


class Unit{

    private:
        SDL_Rect srcRect, moverRect;
        int frame = 0;

    public:
        Unit();
        Unit(SDL_Rect _srcRect, SDL_Rect _moverRect);
        virtual void fly() = 0;
        void draw();
};
