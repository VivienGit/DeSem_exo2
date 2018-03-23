#include <iostream>
#include "line.h"

using namespace std;

Line::Line(Point tl, Point br, color::colorList cl) : Form(tl, br, cl)
{

}

void Line::printInfo(){
    cout << "Line" << endl;
    cout << "Top left point : " << _topLeft.toString() << endl;
    cout << "Bottom right point " << _bottomRight.toString() << endl;
    cout << "Color : " << color::toString(_color) << endl << endl;
}
