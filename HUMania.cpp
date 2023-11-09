#include <iostream>
#include "HUMania.hpp"
#include "ObjectCreator.hpp"
#include <vector>

// vector<Unit*> objects = {};

void HUMania::drawObjects()
{
    // call draw functions of all the objects here
    for (const auto& object : objects) {
        object->draw();
        object->fly();
    }

}


// creates new objects 
void HUMania::createObject(int x, int y)
{
    std::cout << "Mouse clicked at: " << x << " -- " << y << std::endl;
    //create an object of objectcreator
    ObjectCreator obj;
    //create a pointer to the new object
    Unit* flyer = obj.getObject(x, y);
    //pushing the pointer to the new object into the vector
    objects.push_back(flyer);
}

//TO BE IMPLEMENTED
HUMania::~HUMania() {}
