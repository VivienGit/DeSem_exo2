#ifndef FORM_H
#define FORM_H

#include <string>
#include "point.h"

using namespace std;

// Un namespace c'est une sorte de bibliothèque
// Dans la suite, on accède à la varaible avec la synthaxe namespace::variable
// Les éléments d'un namespace sont obligatoirement public
namespace color {
    enum colorList
    {
        blue, purple, yellow
    };

    // Méthode pour le passage en string d'une couleur, sinon c'est un int
    string toString(colorList color);
}

class Form
{
    public:
        Form(Point tl, Point br, color::colorList cl);
        // Il faut limiter un maximum les getter et les setter
        // Sinon les gens peuvent quand même modifier les variables
        // privées de la classe
        virtual void printInfo();
    protected:
        // underscore pour définir un attribut d'une méthode
        Point _topLeft;
        Point _bottomRight;
        color::colorList _color;
        // On accède comme ça à un champs du namespace
};

#endif // FORM_H
