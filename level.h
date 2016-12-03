#ifndef LEVEL_H
#define LEVEL_H
#include <vector>

#include "vector"

#include "fieldobject.h"
#include "wall.h"
#include "box.h"
#include "man.h"
#include "target.h"
#include "player.h"

class Level
{
public:
    Level();

    //int getLevel();
    //void getNextLevel();
    //void getMap();
    void createLevel(std::vector<std::vector<int> > level);
    void setSize(int x, int y);
    void draw();
    void update();
    void processInput(char key);

private: //fields

    int sizeX, sizeY;
    int spaceX, spaceY;
    int lenght;
    int num;

    std::vector<FieldObject*>* objects;
    Man* man;

    COORD position;
    HANDLE consolePtr;

private: //methods
    void moveMan(int horizontal, int vertical);
};

#endif // LEVEL_H
