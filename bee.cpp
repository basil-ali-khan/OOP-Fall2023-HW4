#include "bee.hpp"
#include "Unit.hpp"

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
            moverRect.x %= 1000;
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

Bee::Bee(int xMouse, int yMouse) : Unit({63,619,151,166}, {xMouse, yMouse, 50, 50}) {}