#include <SDL.h>
#include "drawing.hpp"
#pragma once


class Unit{

    private:
        SDL_Rect srcRect, moverRect;
        int frame = 0;

    public:
        Unit();
        virtual void fly();
        void draw();
};
