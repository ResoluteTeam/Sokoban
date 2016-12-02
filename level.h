#ifndef LEVEL_H
#define LEVEL_H

#include "wall.h"
#include "box.h"
#include "man.h"

class Level
{
public:
    Level();

    int getLevel();

    void setSize(int x, int y);

    void getNextLevel();
    void getMap();

private:
    int sizeX;
    int sizeY;
    int lenght;
    int num;
};

#endif // LEVEL_H
