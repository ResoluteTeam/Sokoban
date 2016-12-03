#ifndef TARGET_H
#define TARGET_H

#include "fieldobject.h"
#include "box.h"

class Target: public FieldObject
{
public:
    Target();
    bool status();
    void draw();
    void setBoxes(std::vector<Box *> *arr);

private:
    bool isBoxOn;
    std::vector<Box*>* boxes;
};

#endif // TARGET_H
