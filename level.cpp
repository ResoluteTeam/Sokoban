#include "level.h"

Level::Level()
{

}

void Level::createLevel(std::vector<std::vector<int>> level)
{

}

void Level::setSize(int x, int y)
{
    sizeX = x;
    sizeY = y;
}

void Level::createLevel(std::vector<std::vector<int> > level)
{
      for(int i = 0; i < level.size(); i++)
      {
         for(int j = 0; j < level[i].size(); j++)
         {
             switch (level[i].at[j]) {
             case 0://Empty

                 break;

             case 1://Wall
                    Wall* wall = new Wall;
                    wall->setPosition(i,j);
                    objects.push_back(wall);
                 break;

             case 2://Box
                    Box* box = new Box;
                    box->setPosition(i,j);
                    objects.push_back(box);
                 break;

             case 3://Target
                    Target* target = new Target;
                    target->setPosition(i,j);
                    objects.push_back(target);
                 break;

             case 4://Player

                 break;

             default:
                 break;
             }
         }
      }
}
