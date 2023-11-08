#include "butterfly.hpp"

//Butterfly implementation goes here

//butterfly1 = {256,24,174,134}
//butterfly2 = {257,182,192,214}
//butterfly3 = {248,433,247,178}

Butterfly::Butterfly(int xMouse, int yMouse) {
    srcRect = {256,24,174,134};
    moverRect = {xMouse, yMouse, 50, 50};
}

//TO BE IMPLEMENTED
void Butterfly::fly() {}