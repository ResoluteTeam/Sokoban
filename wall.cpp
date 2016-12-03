#include "wall.h"

Wall::Wall()
{
    type = TYPE::WALL;
}

void Wall::draw()
{
    if(visible)
    {
        SetConsoleCursorPosition(consolePtr, position);
        std::cout << "#";
    }
}

