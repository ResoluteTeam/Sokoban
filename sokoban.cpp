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
        exit = true;
        return;
    }

    key = getch();
    level->processInput(key);

}
