#include <SDL.h>
#include "drawing.hpp"


class Unit{

    private:
        SDL_Rect srcRect, moverRect;
        int frame = 0;

    public:
        Unit();
        virtual void fly();
        void draw();
};
