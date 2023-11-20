#include <iostream>
#include "HUMania.hpp"
#include "ObjectCreator.hpp"
#include <typeinfo>

void HUMania::drawObjects() {
    // initializing iterator
    auto it = objects.begin();

    // looping through the vector
    while (it != objects.end()) {
        (*it)->draw();
        (*it)->fly();
        // if the object is out of bounds, delete it and erase it from the vector
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

HUMania::~HUMania() {
    // initializing iterator
    auto it = objects.begin();

    // deleting all objects in the vector
    while (it != objects.end()) {
        delete *it;
        it = objects.erase(it);
    }
}
