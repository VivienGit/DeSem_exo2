#include <iostream>
#include "circle.h"

using namespace std;

/* ---------------------------------------------------------------------/
/ Pour le : Formes(p1, p2, color                                        /
/                                                                       /
/ Initialisateur de constructeur de la classe mère                      /
/ Quand on appelle le constructeur de la classe Circle, il ne connait   /
/ il ne connait pas le constructeur de la Forme, et c'est le celui-ci   /
/ qui initialise les champs. Il faut donc le "passer" au constructeur   /
/ Circle pour que ça fonctionnne                                        /
/----------------------------------------------------------------------*/

Circle::Circle(Point tl, Point br, color::colorList cl) : Form(tl, br, cl)
{

}

void Circle::printInfo(){
    cout << "Circle" << endl;
    cout << "Top left point : " << _topLeft.toString() << endl;
    cout << "Bottom right point : " << _bottomRight.toString() << endl;
    cout << "Color : " << color::toString(_color) << endl << endl;
}
