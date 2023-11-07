#include "Unit.hpp"

Unit::Unit() {}

void Unit::draw() {
    SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
}