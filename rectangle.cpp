#include <iostream>
#include "rectangle.h"

using namespace std;

Rectangle::Rectangle(Point tl, Point br, color::colorList cl) : Form(tl, br, cl)
{

}

void Rectangle::printInfo(){
    cout << "Ractangle" << endl;
    cout << "Top left point : " << _topLeft.toString() << endl;
    cout << "Bottom right point " << _bottomRight.toString() << endl;
    cout << "Color : " << color::toString(_color) << endl << endl;
}
