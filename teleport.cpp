#include "teleport.h"

Teleport::Teleport()
{
    type = TYPE::TELEPORT;
}

void Teleport::draw()
{
    if(visible)
    {
        SetConsoleCursorPosition(consolePtr, position);
        std::cout << "O";
    }
}
