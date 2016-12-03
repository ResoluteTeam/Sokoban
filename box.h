#ifndef BOX_H
#define BOX_H

#include "fieldobject.h"
#include "moving.h"

class Box: public FieldObject, public Moving
{
public:
    Box();
    void draw();

    bool canMove(int targetX, int targetY);
    void move(int targetX, int targetY);
};

#endif // BOX_H
