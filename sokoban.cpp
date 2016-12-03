#include "sokoban.h"

Sokoban::Sokoban()
{

}

void Sokoban::run()
{
    initializieLevel();

    exit = false;

    while(!exit)
    {
        if(checkWin())
            exit = true;
        draw();
        getInput();
    }

}

void Sokoban::initializieLevel()
{
    lm = new LevelManager;
    lm->loadLevel("Level1.txt");
    //lm->createLevel();
    level = new Level;
    level->createLevel(lm->getLevel());
}

bool Sokoban::checkWin()
{
    return level->isWin();
}

void Sokoban::draw()
{
    level->draw();
}

void Sokoban::getInput()
{
    char key = getch();

    if(key == 27)//If ESC
    {
        HANDLE consolePtr = consolePtr = GetStdHandle(STD_OUTPUT_HANDLE);
        COORD coord;
        coord.X = 0;
        coord.Y = 2;
        SetConsoleCursorPosition(consolePtr, coord);
        exit = true;
        return;
    }

    key = getch();
    level->processInput(key);

}
