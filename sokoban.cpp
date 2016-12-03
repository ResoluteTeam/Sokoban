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
        update();
        draw();
        getInput();
    }

}

void Sokoban::initializieLevel()
{
    lm = new LevelManager;
    lm->loadLevel("Level1.txt");
    lm->createLevel();
    level = new Level;
    level->createLevel(lm->levelMap);
}

void Sokoban::update()
{
    level->update();
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
        std::cout << "\n\n";
        return;
    }

    key = getch();
    level->processInput(key);

}
