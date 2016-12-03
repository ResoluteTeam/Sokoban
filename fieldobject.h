#ifndef FIELDOBJECT_H
#define FIELDOBJECT_H

#include "visible.h"

class FieldObject: Visible
{
public:
    FieldObject();

    int setPosition(int x, int y);
    void draw();

private:
    int positionX;
    int positionY;
};

#endif // FIELDOBJECT_H
