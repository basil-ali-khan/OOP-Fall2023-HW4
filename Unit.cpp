#include "Unit.hpp"

Unit::Unit(SDL_Rect _srcRect, SDL_Rect _moverRect) : srcRect(_srcRect), moverRect(_moverRect) {}

void Unit::draw() {
    SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
}

bool Unit::outOfBounds() {
    return false;
}

Unit::~Unit() {}