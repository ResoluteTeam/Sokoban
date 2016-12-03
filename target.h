#ifndef TARGET_H
#define TARGET_H

#include "fieldobject.h"

class Target: public FieldObject
{
public:
    Target();
    void status();
    void draw();
};

#endif // TARGET_H
