#include<SDL.h>
#include "drawing.hpp"
#include "Unit.hpp"
class Pigeon : public Unit {

    SDL_Rect srcRect, moverRect;
    int frame = 0;

public:
    // add the fly function here as well.
    void draw();
    void fly();
    Pigeon(int xMouse, int yMouse); 
    // may add other overloaded constructors here... 
};
