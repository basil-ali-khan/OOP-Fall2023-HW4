#include "ObjectCreator.hpp"
#include "pigeon.hpp"
#include "bee.hpp"
#include "butterfly.hpp"
#include <cstdlib>

Unit* ObjectCreator::getObject(int xMouse, int yMouse) {
    //int choice = rand() % 3;  //generate random number

    //hardcoding choice for testing, uncomment above line in final implementation
    int choice = 0;

    switch (choice)
    {
    case 0:
        object = new Pigeon(xMouse, yMouse);
        break;
    
    case 1:
        object = new Bee(xMouse, yMouse);
        break;
    
    default:
        object = new Butterfly(xMouse, yMouse);
        break;
    }
}

ObjectCreator::ObjectCreator() {}

ObjectCreator::~ObjectCreator() {}