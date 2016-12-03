#include "target.h"

Target::Target()
{
    type = TYPE::TARGET;
}

void Target::draw()
{
    SetConsoleCursorPosition(consolePtr, position);
    std::cout << ".";
}
