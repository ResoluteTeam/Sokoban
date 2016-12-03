#include <iostream>

#include "sokoban.h"

using namespace std;

int main(int argc, char *argv[])
{
    Sokoban* sokoban = new Sokoban;
    sokoban->run();

    return 0;
}
