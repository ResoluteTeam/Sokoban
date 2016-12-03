#ifndef LEVELMANAGER_H
#define LEVELMANAGER_H

#include <iostream>
#include <fstream>
#include <string.h>
#include <sstream>
#include <vector>

#include "level.h"

class LevelManager
{
public:
    LevelManager();

    bool loadLevel(std::string level);
    //bool createLevel();

    int getCurrentLevel();

    void nextLevel();

    std::vector<std::vector<int>> getLevel();

public:
    std::vector<std::vector<int>> levelMap;

private:
    int currentLevel;

    int levelSizeX;
    int levelSizeY;

    int levelLenght;

    Level* level;


};

#endif // LEVELMANAGER_H
