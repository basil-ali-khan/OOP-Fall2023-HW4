#include "bee.hpp"
#include "Unit.hpp"
// bee implementation will go here.

//bee1 = {63,619,151,166}
//bee2 = {234,630,163,162}
//bee3 = {409,650,171,147}

// void Bee::draw(){
//     SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
// }


//Create a Bee class inherited from Unit. It over-rides the fly function,
// that should make it fly towards right only. During fly it should hover
// (doesn’t move forward) for a while over a random interval. You may
// choose 5% probability in every frame to decide whether it starts hover,
// and it keeps hovering for 10 frames. As a bee reaches to right most
// border of screen, it exits from the game, hence the object must be
// removed from the bees vector properly

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

    // 5% probability in every frame to decide whether it starts hover
    int random = rand() % 100;
    if (random > 4) {
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

Bee::Bee(int xMouse, int yMouse) : Unit({63,619,151,166}, {xMouse, yMouse, 50, 50}){
    // // src coorinates from assets.png file, they have been found using spritecow.com
    // srcRect = {63,619,151,166};

    // // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    // moverRect = {xMouse, yMouse, 50, 50};
}