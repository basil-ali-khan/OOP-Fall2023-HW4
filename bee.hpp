#include<SDL.h>
#include "drawing.hpp"
#include "Unit.hpp"
#include<iostream>
using namespace std;

class Bee : public Unit {

    // SDL_Rect srcRect, moverRect;
    int frame = 0;
    int hover = 0;

    public:
        // add the fly function here as well.
        // void draw();
        void fly();
        Bee(int xMouse, int yMouse); 
        // may add other overloaded constructors here... 
};
