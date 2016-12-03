#ifndef MOVING_H
#define MOVING_H

#include "vector"
#include "fieldobject.h"

class Moving
{
    public:
        Moving();
        void setLevel(std::vector<FieldObject *> array);

        virtual bool canMove(int directionX, int directionY);
        virtual void move(int directionX, int directionY);

        std::vector<FieldObject*> objects;
};

#endif // MOVING_H
