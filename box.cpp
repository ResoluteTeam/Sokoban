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
