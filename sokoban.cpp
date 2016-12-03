#include "sokoban.h"

Sokoban::Sokoban()
{

}

void Sokoban::run()
{
    initializieLevel();

    bool exit = false;

    while(!exit)
    {
        update();
        draw();
        getInput();
    }

}

void Sokoban::initializieLevel()
{
    LevelManager* lm = new LevelManager;
    lm->loadLevel("Level1.txt");
    lm->createLevel();
}

void Sokoban::update()
{

}

void Sokoban::draw()
{

}

void Sokoban::getInput()
{

}
