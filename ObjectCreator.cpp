#include "ObjectCreator.hpp"
#include "pigeon.hpp"
#include "bee.hpp"
#include "butterfly.hpp"
#include <cstdlib>

Unit* ObjectCreator::getObject(int xMouse, int yMouse) {
    int choice = rand() % 3;  //generate random number
    Unit* object;

    switch (choice) {
    case 0:
        return new Pigeon(xMouse, yMouse);
        break;
    case 1:
        return new Bee(xMouse, yMouse);
        break;
    default:
        return new Butterfly(xMouse, yMouse);
        break;
    }
    return object;
}

ObjectCreator::ObjectCreator() {}

ObjectCreator::~ObjectCreator() {}