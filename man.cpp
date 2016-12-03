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
    for(int i = 0; i < objects->size(); i++)
    {
        if(objects->at(i)->getX() == targetX + getX() && objects->at(i)->getY() == targetY + getY())
        {
            if(objects->at(i)->getType() == TYPE::WALL)
            {
                return false;
            }

            if(objects->at(i)->getType() == TYPE::BOX)
            {
               if(objects->at(i)->canMove(targetX, targetY))
               {
                    objects->at(i)->move(targetX, targetY);
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
