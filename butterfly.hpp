#include<SDL.h>
#include "drawing.hpp"
#include "Unit.hpp"

class Butterfly : public Unit {
    int frame = 0;
    int state = 0; // 0 = down, 1 = up

    public:
        void fly();
        Butterfly(int xMouse, int yMouse); 
        // may add other overloaded constructors here... 
        ~Butterfly();
};

