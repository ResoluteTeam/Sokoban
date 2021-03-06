#include "level.h"

Level::Level()
{
    spaceX = 3;
    spaceY = 5;
    consolePtr = GetStdHandle(STD_OUTPUT_HANDLE);
}


void Level::setSize(int x, int y)
{
    sizeX = x;
    sizeY = y;
}

void Level::draw()
{
    for(int i = 0; i < sizeX; i++)
    {
        for(int j = 0; j < sizeY; j++)
        {
            position.X = j + spaceX;
            position.Y = i + spaceY;
            SetConsoleCursorPosition(consolePtr, position);
            std::cout << " ";
        }
    }

    for(int i = 0; i < objects->size(); i++)
    {
        objects->at(i)->draw();
    }

    for(int i = 0; i < boxes->size(); i++)
    {
        boxes->at(i)->draw();
    }

    man->draw();
}

bool Level::isWin()
{
    int count = 0;

    for(int i = 0; i < targets->size(); i++)
    {
        if(!targets->at(i)->status())
            return false;
    }

    return true;
}

void Level::processInput(char key)
{
    //up 72
    //left 75
    //right 77
    //down 80

    switch (key) {

        case 72://up
        {
            moveMan(0,-1);
        }
            break;
        case 75://left
        {
            moveMan(-1,0);
        }
            break;
        case 77://right
        {
            moveMan(1,0);
        }
            break;
        case 80://down
        {
            moveMan(0,1);
        }
            break;

        default:
            break;
    }

}

void Level::moveMan(int horizontal, int vertical)
{
    man->move(horizontal, vertical);
}

void Level::createLevel(std::vector<std::vector<int> > level)
{
    objects = new std::vector<FieldObject*>;
    boxes = new std::vector<Box*>;
    targets = new std::vector<Target*>;

    setSize(level.size(), level[0].size());

      for(int i = 0; i < level.size(); i++)
      {
         for(int j = 0; j < level[i].size(); j++)
         {
             switch (level[i][j]) {
             case 0://Empty

                 break;

             case 1://Wall
             {
                    Wall* wall = new Wall;
                    wall->setPosition(j,i);
                    objects->push_back(wall);
             }
                 break;

             case 2://Box
             {
                    Box* box = new Box;
                    box->setPosition(j,i);
                    objects->push_back(box);
                    boxes->push_back(box);
             }
                 break;

             case 3://Target
             {
                    Target* target = new Target;
                    target->setPosition(j,i);
                    objects->push_back(target);
                    targets->push_back(target);
             }
                 break;

             case 4://Player
             {
                    man = new Man;
                    man->setPosition(j,i);
                    objects->push_back(man);
             }
                 break;

             case 5://Teleport
             {
                    Teleport* tp = new Teleport;
                    tp->setPosition(j,i);
                    objects->push_back(tp);
             }
                 break;

             default:
                 break;
             }
         }
      }


      man->setLevel(objects);

      for(int i = 0; i < boxes->size(); i++)
      {
            boxes->at(i)->setLevel(objects);
      }

      for(int i = 0; i < targets->size(); i++)
      {
            targets->at(i)->setBoxes(boxes);
      }
}
