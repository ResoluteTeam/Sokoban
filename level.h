#ifndef LEVEL_H
#define LEVEL_H
#include <vector>

#include "vector"s

#include "fieldobject.h"
#include "wall.h"
#include "box.h"
#include "man.h"
#include "target.h"

class Level
{
public:
    Level();

    //int getLevel();
    //void getNextLevel();
    //void getMap();
    void createLevel(std::vector<std::vector<int> > level);
    void setSize(int x, int y);
private: //fields

    int sizeX;
    int sizeY;
    int lenght;
    int num;

    std::vector<FieldObject*> objects;

private: //methods


};

#endif // LEVEL_H
