#ifndef SOKOBAN_H
#define SOKOBAN_H

#include "level.h"
#include "levelmanager.h"
#include "conio.h"
#include "Windows.h"

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

};

#endif // SOKOBAN_H
