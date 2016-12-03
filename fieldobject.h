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
    TELEPORT
};

class FieldObject: Visible
{
public:
    FieldObject();

    void setPosition(int x, int y);

    virtual void draw();
    virtual bool canMove(int directionX, int directionY);
    virtual void move(int directionX, int directionY);

    void show();
    void hide();

    int getX();
    int getY();

    TYPE getType();

protected:
    int positionX;
    int positionY;
    int spaceX, spaceY;

    bool visible;

    TYPE type;

    COORD position;
    HANDLE consolePtr;


};

#endif // FIELDOBJECT_H
