#include<SDL.h>
#include "drawing.hpp"
#include "Unit.hpp"

class Pigeon : public Unit {
    int frame = 0;

    public:
        void fly();
        Pigeon(int xMouse, int yMouse);
        // may add other overloaded constructors here... 
};
