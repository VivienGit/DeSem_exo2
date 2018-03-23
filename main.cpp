#include <iostream>
#include <vector>
#include <algorithm>

#include "circle.h"
#include "line.h"
#include "rectangle.h"
#include "menu.h"

using namespace std;

int main()
{
    Menu menu;
    vector<Form*> vForm;
    int tlx = 0, tly = 0, brx = 0, bry = 0;
    color::colorList col;

    col = color::yellow;

    unsigned int ret = 0;
    do{
        menu.printMenu();
        ret = menu.getChoice();
        switch (ret) {
        case 1:
            menu.getFormParam(&tlx, &tly, &brx, &bry, &col);
            vForm.push_back(new Rectangle(Point(tlx,tly), Point(brx,bry), col));
            break;
        case 2:
            menu.getFormParam(&tlx, &tly, &brx, &bry, &col);
            vForm.push_back(new Circle(Point(tlx,tly), Point(brx,bry), col));
            break;
        case 3:
            menu.getFormParam(&tlx, &tly, &brx, &bry, &col);
            vForm.push_back(new Line(Point(tlx,tly), Point(brx,bry), col));
            break;
         case 4:
            menu.printList(vForm);
            break;
         case 5:
            cout << "You chosse to quit" << endl << endl << "Bye Bye !!" << endl << endl;
            break;
        default:
            ret = 0;
            cout << endl << "Invalid selection, choose again" << endl;
            break;
        }
    }while(ret != 5);

    return 0;
}
