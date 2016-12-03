#include "target.h"

Target::Target()
{
    type = TYPE::TARGET;
    isBoxOn = false;
}

bool Target::status()
{
    isBoxOn = false;

    for(int i = 0; i < boxes->size(); i++)
    {
       if(boxes->at(i)->getX() == positionX && boxes->at(i)->getY() == positionY)
       {
           isBoxOn = true;
       }
    }

    return isBoxOn;
}

void Target::draw()
{
    if(visible)
    {
        SetConsoleCursorPosition(consolePtr, position);
        std::cout << ".";
    }
}

void Target::setBoxes(std::vector<Box*>* arr)
{
    boxes = arr;
}
