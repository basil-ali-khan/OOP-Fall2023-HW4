#include<SDL.h>
#include "pigeon.hpp"
#include "bee.hpp"
#include "butterfly.hpp"
#include "Unit.hpp"
#include<vector>
#include<list>
using namespace std;

class HUMania{
    list<Unit*> objects;
    
    public:
    void drawObjects(); 
    void createObject(int, int);
    ~HUMania();
};