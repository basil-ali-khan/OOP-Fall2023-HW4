#include "bee.hpp"
#include "Unit.hpp"

// fly logic of bee
void Bee::fly(){
    switch(frame) {
        case 0:
            srcRect = {234,630,163,162};
            frame = 1;
            break;
        
        case 1:
            srcRect = {409,650,171,147};
            frame = 2;
            break;

        case 2:
            srcRect = {63,619,151,166};
            frame = 0;
            break;
    }

    // 2% probability in every frame to decide whether it starts hover
    int random = rand() % 100;
    if (random > 1) {
        if (hover <= 0) {
            moverRect.x += 5;
        }
        else {
            hover--;
        }
    }
    else {
        if (hover <= 0) {
            hover = 10;
        }
        else {
            hover--;
        }
    }
}

// only overloaded function, checks if bee is out of bounds
bool Bee::outOfBounds() {
    return moverRect.x > 1000;
}

Bee::Bee(int xMouse, int yMouse) : Unit({63,619,151,166}, {xMouse, yMouse, 50, 50}) {}

Bee::~Bee() {}