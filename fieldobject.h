#ifndef FIELDOBJECT_H
#define FIELDOBJECT_H

#include "visible.h"
#include "Windows.h"
#include "iostream"
#include "vector"

enum TYPE
{
    WALL,
    BOX,
    MAN,
    TARGET,
};

class FieldObject: Visible
{
public:
    FieldObject();

    void setPosition(int x, int y);
    virtual void draw();

    int getX();
    int getY();

    TYPE getType();

protected:
    int positionX;
    int positionY;
    int spaceX, spaceY;

    TYPE type;

    COORD position;
    HANDLE consolePtr;


};

#endif // FIELDOBJECT_H
