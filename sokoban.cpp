#include "sokoban.h"

Sokoban::Sokoban()
{
    lm = new LevelManager;
}

void Sokoban::run()
{
    initializieLevel();

    exit = false;

    while(!exit)
    {
        if(checkWin())
            nextLevel();
        draw();
        getInput();
    }

}

void Sokoban::initializieLevel()
{
    lm->loadLevel("levels\\Level1.txt");
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

void Sokoban::nextLevel()
{
    delete level;
    system("cls");

    lm->nextLevel();
    level = new Level;
    level->createLevel(lm->getLevel());
}
