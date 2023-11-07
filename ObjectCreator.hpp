#include "Unit.hpp"

class ObjectCreator {
    private:
        Unit* object;

    public:
        void getObject(int, int);
        ObjectCreator();
        ~ObjectCreator();
};