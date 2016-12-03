#include "moving.h"

Moving::Moving()
{

}

void Moving::setLevel(std::vector<FieldObject *>* array)
{
    objects = array;
}

bool Moving::canMove(int directionX, int directionY)
{
    return false;
}

void Moving::move(int directionX, int directionY)
{

}
