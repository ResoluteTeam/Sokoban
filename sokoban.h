#ifndef SOKOBAN_H
#define SOKOBAN_H

#include "level.h"
#include "levelmanager.h"
#include "conio.h"
#include <stdlib.h>

class Sokoban
{
public:
    Sokoban();
    void run();
    void initializieLevel();

private:
    LevelManager* lm;
    Level* level;

    bool exit;

private:
    bool checkWin();
    void draw();
    void getInput();
    void nextLevel();

};

#endif // SOKOBAN_H
