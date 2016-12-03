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
        if(objects[i]->getX() == targetX + getX() && objects[i]->getY() == targetY + getY())
        {
            if(objects[i]->getType() == TYPE::WALL)
            {
                return false;
            }

            if(objects[i]->getType() == TYPE::BOX)
            {
               if(objects[i]->canMove(targetX, targetY))
               {
                    objects[i]->move(targetX, targetY);
                    return true;
               }
               else return false;
            }
        }
    }

    return true;
}

void Man::move(int targetX, int targetY)
{
    if(canMove(targetX, targetY))
    {
        setPosition(targetX + getX(), targetY + getY());
    }
}
