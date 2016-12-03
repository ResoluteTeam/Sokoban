#include "teleport.h"

Teleport::Teleport()
{
    type = TYPE::TELEPORT;
}

void Teleport::draw()
{
    SetConsoleCursorPosition(consolePtr, position);
    std::cout << "O";
}
