#include "Unit.hpp"

class ObjectCreator {
    private:
        Unit* object;

    public:
        Unit* getObject(int, int);
        ObjectCreator();
        ~ObjectCreator();
};