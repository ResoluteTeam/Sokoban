#ifndef FIELDOBJECT_H
#define FIELDOBJECT_H

#include "visible.h"

class FieldObject: Visible
{
public:
    FieldObject();

    int setPosition(int x, int y);
};

#endif // FIELDOBJECT_H
