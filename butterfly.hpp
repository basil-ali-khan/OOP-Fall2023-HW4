#include<SDL.h>
#include "drawing.hpp"
#include "Unit.hpp"

class Butterfly : public Unit {

    // SDL_Rect srcRect, moverRect;
    int frame = 0;
    int state = 0; // 0 = down, 1 = up

    public:
        // add the fly function here as well.
        // void draw();
        void fly();
        Butterfly(int xMouse, int yMouse); 
        // may add other overloaded constructors here... 
};

