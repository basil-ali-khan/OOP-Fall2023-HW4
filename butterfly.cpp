#include "butterfly.hpp"
#include <iostream>
#include "Unit.hpp"

// fly logic of butterfly
void Butterfly::fly() {
    moverRect.x += 5;
    moverRect.x %= 1000;
    
    if (state == 0) {
        moverRect.y += 5;
        if (moverRect.y > 550) {
            state = 1;
        }
    } else {
        moverRect.y -= 5;
        if (moverRect.y < 0) {
            state = 0;
        }
    }

    switch (frame) {
        case 0:
            srcRect = {257, 182, 192, 214};
            frame = 1;
            break;
        case 1:
            srcRect = {248, 432, 248, 179};
            frame = 2;
            break;
        case 2:
            srcRect = {257, 24, 173, 134};
            frame = 0;
            break;
    }
}

Butterfly::Butterfly(int xMouse, int yMouse) : Unit({257,24,173,134}, {xMouse, yMouse, 50, 50}) {}

Butterfly::~Butterfly() {}