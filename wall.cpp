#include "wall.h"

Wall::Wall()
{
    type = TYPE::WALL;
}

void Wall::draw()
{
    SetConsoleCursorPosition(consolePtr, position);
    std::cout << "#";
}
