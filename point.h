#ifndef POINT_H
#define POINT_H

#include <stdint.h>
#include <string>

using namespace std;

class Point
{
    public:
        Point(int x = 0, int y = 0); // valeurs pas défaut si pas données

        int getX();
        void setX(int value);

        int getY();
        void setY(int value);

        string toString();

    protected:
        int _x;
        int _y;
};

#endif // POINT_H
