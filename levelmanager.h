#ifndef LEVELMANAGER_H
#define LEVELMANAGER_H

#include <iostream>
#include <fstream>
#include <string.h>
#include <sstream>

#include "level.h"

class LevelManager
{
public:
    LevelManager();

    bool loadLevel(std::__cxx11::string level);
    bool createLevel();

    int getCurrentLevel();
private:
    int currentLevel;

    int levelSizeX;
    int levelSizeY;

    int levelLenght;

    int map[][];
    Level* level;

};

#endif // LEVELMANAGER_H
