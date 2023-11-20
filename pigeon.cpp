#include "pigeon.hpp"
#include "Unit.hpp"

// fly logic of pigeon
void Pigeon::fly(){
    moverRect.x += 5;
    moverRect.x %= 1000;
    
    switch(frame) {
        case 0:
            srcRect = {0,237,153,84};
            frame = 1;
            break;
        
        case 1:
            srcRect = {2,361,159,124};
            frame = 2;
            break;

        case 2:
            srcRect = {7,88,160,103};
            frame = 0;
            break;
    }    
}

Pigeon::Pigeon(int xMouse, int yMouse) : Unit({7,88,160,103}, {xMouse, yMouse, 50, 50}) {}

Pigeon::~Pigeon() {}