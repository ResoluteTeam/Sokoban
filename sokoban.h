#ifndef SOKOBAN_H
#define SOKOBAN_H

#include "level.h"
#include "levelmanager.h"

class Sokoban
{
public:
    Sokoban();
    void run();
    void initializieLevel();

private:
    Level level;

private:
    void update();
    void draw();
    void getInput();

};

#endif // SOKOBAN_H
