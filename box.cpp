#include "box.h"

Box::Box()
{
    type = TYPE::BOX;
}

void Box::draw()
{
    SetConsoleCursorPosition(consolePtr, position);
    std::cout << "*";
}

bool Box::canMove(int targetX, int targetY)
{
    for(int i = 0; i < objects->size(); i++)
    {
        if(objects->at(i)->getX() == targetX + getX() && objects->at(i)->getY() == targetY + getY())
        {
            if(objects->at(i)->getType() != TYPE::TARGET)
                return false;
        }
    }

    return true;
}

void Box::move(int targetX, int targetY)
{
    if(canMove(targetX, targetY))
    {
        setPosition(targetX + getX(), targetY + getY());
    }
}
