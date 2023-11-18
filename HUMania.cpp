#include <iostream>
#include "HUMania.hpp"
#include "ObjectCreator.hpp"
#include <typeinfo>

void HUMania::drawObjects() {

    auto it = objects.begin();

    while (it != objects.end()) {
        (*it)->draw();
        (*it)->fly();
        if ((*it)->outOfBounds()) {
            delete *it;
            it = objects.erase(it);
        }
        else {
            ++it;
        }
    }
    
}

// creates new objects 
void HUMania::createObject(int x, int y) {
    //create an object of objectcreator
    ObjectCreator obj;
    //create a pointer to the new object
    Unit* flyer = obj.getObject(x, y);
    //pushing the pointer to the new object into the vector
    objects.push_back(flyer);
}

//TO BE IMPLEMENTED
HUMania::~HUMania() {
    auto it = objects.begin();

    while (it != objects.end()) {
        delete *it;
        it = objects.erase(it);
    }
}
