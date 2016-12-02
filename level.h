#ifndef LEVEL_H
#define LEVEL_H

#include "wall.h"
#include "box.h"
#include "man.h"

class Level
{
public:
    Level();

    //int getLevel();
    //void getNextLevel();
    //void getMap();
    void createLevel(std::vector<std::vector<int>> level);

private: //fields

    int sizeX;
    int sizeY;
    int lenght;
    int num;

private: //methods

    void setSize(int x, int y);
};

#endif // LEVEL_H
