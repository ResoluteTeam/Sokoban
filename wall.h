#ifndef WALL_H
#define WALL_H

#include "fieldobject.h"

class Wall: public FieldObject
{
public:
    Wall();
    void draw();
};

#endif // WALL_H
