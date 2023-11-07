#include<SDL.h>
#include "drawing.hpp"
class Butterfly{

    SDL_Rect srcRect, moverRect;
    int frame = 0;

public:
    // add the fly function here as well.
    void draw();
    void fly();
    Butterfly(); 
    // may add other overloaded constructors here... 
};

