#include "levelmanager.h"

LevelManager::LevelManager()
{

}

bool LevelManager::loadLevel(std::string level)
{
    std::ifstream file;
    std::string data;

    std::string tempLevel;
    std::string sizeX;
    std::string sizeY;

    int currentLevel = 0;
    int lenght = 0;

    int x = 0;
    int y = 0;

    file.open("D:\\Level1.txt", std::ios::in);

    if( file.is_open() ) {
        std::getline(file, tempLevel);
        std::getline(file, sizeX);
        std::getline(file, sizeY);

        std::istringstream isl(tempLevel, std::istringstream::in);
        isl >> data;
        isl >> currentLevel;
        std::cout << "Level: " << currentLevel << std::endl;

        std::istringstream isx(sizeX, std::istringstream::in);
        isx >> data >> data;
        isx >> x;
        std::cout << "Size X: " << x << std::endl;

        std::istringstream isy(sizeY, std::istringstream::in);
        isy >> data >> data;
        isy >> y;
        std::cout << "Size Y: " << y << std::endl;

        while ( std::getline(file, data) ) {
            for ( int i = 0; i < data.size(); i++ ) {
                if ( data.at(i) == ' ' ) {

                }
            }
        }

        file.close();

    } else {
        std::cout << "Can`t open file";
    }

    return true;
}

bool LevelManager::createLevel()
{
    level = new Level;
    level->setSize(levelSizeX, levelSizeY);
}

int LevelManager::getCurrentLevel()
{
    return currentLevel;
}
