#include <iostream>
#include "levelmanager.h"

using namespace std;

int main(int argc, char *argv[])
{
    LevelManager* lm = new LevelManager;
    lm->loadLevel("Level1.txt");
    lm->createLevel();

    return 0;
}
