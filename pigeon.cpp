#include "pigeon.hpp"
#include "Unit.hpp"

// pigeon implementation will go here.

//pigeon1 = {7,88,155,103}
//pigeon2 = {0,237,153,84}
//pigeon3 = {2,361,159,124}


// in project implementation this draw function should only be in superclass
// void Pigeon::draw(){
//     SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
// }


// fly() is overrided from the superclass
void Pigeon::fly(){
    moverRect.x += 5;
    if (moverRect.x > 1000) {
        moverRect.x = 0;
    }
    
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

Pigeon::Pigeon(int xMouse, int yMouse) : Unit({7,88,160,103}, {xMouse, yMouse, 50, 50}){
    // // src coorinates from assets.png file, they have been found using spritecow.com
    // srcRect = {7,88,160,103};

    // // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    // moverRect = {xMouse, yMouse, 50, 50};
}

