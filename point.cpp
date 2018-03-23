#include "point.h"

using namespace std;

Point::Point(int x, int y) : _x(x), _y(y)
{
}

int Point::getX(){
    return _x;
}

void Point::setX(int value){
    _x = value;
}

int Point::getY(){
    return _y;
}

void Point::setY(int value){
    _y = value;
}

string Point::toString()
{
    char buffer[sizeof(int)];
    sprintf(buffer, " (%d, %d) ", getX(), getY());
    return string(buffer);
}
