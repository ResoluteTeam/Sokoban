#ifndef MAN_H
#define MAN_H

#include "vector"
#include "fieldobject.h"
#include "moving.h"

class Man : public FieldObject, public Moving
{

    public:
        Man();
        void draw();

        bool canMove(int targetX, int targetY);
        void move(int targetX, int targetY);

    private:
};

#endif // MAN_H
