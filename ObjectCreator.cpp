#include "ObjectCreator.hpp"
#include "pigeon.hpp"
#include "bee.hpp"
#include "butterfly.hpp"
#include <cstdlib>

Unit* ObjectCreator::getObject(int xMouse, int yMouse) {
    int choice = rand() % 3;  //generate random number

    switch (choice)
    {
    case 0:
        object = new Pigeon();
        break;
    
    case 1:
        object = new Bee();
        break;
    
    default:
        object = new Butterfly();
        break;
    }
}