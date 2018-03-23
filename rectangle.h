#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "form.h"


class Rectangle : public Form
{
public:
    Rectangle(Point tl, Point pbr, color::colorList cl);
    virtual void printInfo();
};

#endif // RECTANGLE_H
