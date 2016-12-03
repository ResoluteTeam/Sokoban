#include "fieldobject.h"

FieldObject::FieldObject()
{
    spaceX = 3;
    spaceY = 5;
    consolePtr = GetStdHandle(STD_OUTPUT_HANDLE);
}

void FieldObject::setPosition(int x, int y)
{
    positionX = x;
    positionY = y;
    position.X = positionX + spaceX;
    position.Y = positionY + spaceY;
}

void FieldObject::draw()
{

}

bool FieldObject::canMove(int directionX, int directionY)
{
    return false;
}

void FieldObject::move(int directionX, int directionY)
{

}

int FieldObject::getX()
{
    return positionX;
}

int FieldObject::getY()
{
    return positionY;
}

TYPE FieldObject::getType()
{
    return type;
}
