#ifndef BOX_H
#define BOX_H

#include "fieldobject.h"
#include "moving.h"

class Box: public FieldObject, public Moving
{
public:
    Box();
    void draw();
};

#endif // BOX_H
