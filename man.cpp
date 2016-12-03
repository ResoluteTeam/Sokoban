#include "man.h"

Man::Man()
{
    type = TYPE::MAN;
}

void Man::draw()
{
    SetConsoleCursorPosition(consolePtr, position);
    std::cout << "@";
}

bool Man::canMove(int targetX, int targetY)
{
    for(int i = 0; i < objects.size(); i++)
    {
        if(objects[i]->getX() == targetX && objects[i]->getY() == targetY)
        {
            //if(objects[i]->getType() == TYPE::WALL)
            //{
                return false;
            //}
        }
    }

    return true;
}

void Man::move(int targetX, int targetY)
{
    if(canMove(targetX, targetY))
    {
        positionX = targetX;
        positionY = targetY;
    }
}
