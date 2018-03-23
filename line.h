#ifndef LINE_H
#define LINE_H
#include "form.h"

class Line : public Form
{
public:
    Line(Point tl, Point pbr, color::colorList cl);
    virtual void printInfo();
};

#endif // LINE_H
