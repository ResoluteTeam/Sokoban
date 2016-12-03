#include "levelmanager.h"
#include "iostream"

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

    file.open(level, std::ios::in);

    if( file.is_open() ) {
        std::getline(file, tempLevel);
        std::getline(file, sizeX);
        std::getline(file, sizeY);

        std::istringstream isl(tempLevel, std::istringstream::in);
        isl >> data;
        isl >> currentLevel;
        std::cout << "Current level: " << currentLevel << std::endl;
        std::cout << "Press arrows to move, ESC to exit" << std::endl;

        std::getline(file, data);
        std::getline(file, data);
        levelMap.clear();

        while ( std::getline(file, data) ) {
            std::vector<int> tempLine;
            for ( int i = 0; i < data.size(); i++ ) {
                if ( data.at(i) == ' ' ) {
                    tempLine.push_back(0);
                } if ( data.at(i) == 'X' ) {
                    tempLine.push_back(1);
                } if ( data.at(i) == '*' ) {
                    tempLine.push_back(2);
                } if ( data.at(i) == '.' ) {
                    tempLine.push_back(3);
                } if ( data.at(i) == '@' ) {
                    tempLine.push_back(4);
                } if ( data.at(i) == '0' ) {
                    tempLine.push_back(5);
                }
            }
            levelMap.push_back(tempLine);
        }

        file.close();

    } else {
        std::cout << "Can`t open file";
    }

    return true;
}

int LevelManager::getCurrentLevel()
{
    return currentLevel;
}

void LevelManager::nextLevel()
{
    if ( currentLevel < 9 ) {
        int tempLvl = currentLevel + 1;
        std::string nxtlvl = std::to_string(tempLvl);
        std::string tmp = "levels\\Level" + nxtlvl + ".txt";
        loadLevel(tmp);
    }
}
std::vector<std::vector<int>> LevelManager::getLevel()
{
    return levelMap;
}
