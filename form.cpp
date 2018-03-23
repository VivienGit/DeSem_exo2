#include <iostream>
#include "form.h"

// Définition de la méthode pour le passage en string en fonction de la couleur en int
string color::toString(colorList color)
{
    switch(color)
    {
        case blue:
            return "blue";
        break;
        case purple:
            return "purple";
        break;
        case yellow:
            return "yellow";
        break;
    }
    return "unknow color";
}

Form::Form(Point tl, Point br, color::colorList cl)
    : _topLeft(tl),
      _bottomRight(br),
      _color(cl)
{
}

void Form::printInfo(){
    cout << "This isnt good, im the printInfo from the class Form" << endl;
}
