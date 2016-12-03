#ifndef TELEPORT_H
#define TELEPORT_H

#include "fieldobject.h"

class Teleport: public FieldObject
{
public:
    Teleport();
    void teleportation();
};

#endif // TELEPORT_H
