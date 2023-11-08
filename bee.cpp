#include "bee.hpp"
#include "Unit.hpp"
// bee implementation will go here.

//bee1 = {63,619,151,166}
//bee2 = {234,630,163,162}
//bee3 = {409,650,171,147}

void Bee::draw(){
    SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
}


// fly() is overrided from the superclass
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
    moverRect.x += 5;
    if (moverRect.x > 1000) {
        moverRect.x = 0;
    }
}

Bee::Bee(int xMouse, int yMouse) : Unit({63,619,151,166}, {xMouse, yMouse, 50, 50}){
    // // src coorinates from assets.png file, they have been found using spritecow.com
    // srcRect = {63,619,151,166};

    // // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    // moverRect = {xMouse, yMouse, 50, 50};
}