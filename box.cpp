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
    for(int i = 0; i < objects.size(); i++)
    {
        if(objects[i]->getX() == targetX + getX() && objects[i]->getY() == targetY + getY())
        {
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
