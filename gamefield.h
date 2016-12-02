#ifndef GAMEFIELD_H
#define GAMEFIELD_H

#include "visible.h"

class GameField: Visible
{
public:
    GameField();

    void checkWin();
    void setSize(int x, int y);
    void buildMaze();
    void moveMan();
};

#endif // GAMEFIELD_H
