#include<SDL.h>
#include "drawing.hpp"
#include "Unit.hpp"

class Bee : public Unit {
    int frame = 0;
    int hover = 0;

    public:
        void fly();
        bool outOfBounds();
        Bee(int xMouse, int yMouse); 
        // may add other overloaded constructors here... 
        ~Bee();
};
