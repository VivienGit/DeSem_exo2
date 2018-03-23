#include <iostream>
#include <vector>
#include <algorithm>

#include "circle.h"
#include "line.h"
#include "rectangle.h"

using namespace std;

unsigned int printMenu(void){
    unsigned int ret = 0;
    cout << "----------- Select an option ------------" << endl;
    cout << "  1) Add a rectangle " << endl;
    cout << "  2) Add a circle" << endl;
    cout << "  3) Add a line" << endl;
    cout << "  4) Print the list" << endl;
    cout << "  5) exit" << endl;
    cin >> ret;
    return ret;
}

void setForm(int* tlx, int* tly, int* brx, int* bry, color::colorList* col){
    unsigned int ret = 0;
    cout << " Select the x coordinate of top left point" << endl;
    cin >> *tlx;
    cout << " Select the y coordinate of top left point" << endl;
    cin >> *tly;
    cout << " Select the x coordinate of bottom right point" << endl;
    cin >> *brx;
    cout << " Select the y coordinate of bottom right point" << endl;
    cin >> *bry;
    cout << " Now select a color for your form" << endl;
    cout << "  1) blue " << endl;
    cout << "  2) purple" << endl;
    cout << "  3) yellow" << endl;
    cin >> ret;
    switch (ret) {
    case 1:
        *col = color::blue;
        break;
    case 2:
        *col = color::purple;
        break;
    case 3:
        *col = color::yellow;
        break;
    default:
        *col = color::blue;
        break;
    }
}


int main()
{
    vector<Form*> vForm;
    int tlx = 0, tly = 0, brx = 0, bry = 0;
    color::colorList col;

    col = color::yellow;

    unsigned int ret = 0;
    do{
        ret = printMenu();
        switch (ret) {
        case 1:
            setForm(&tlx, &tly, &brx, &bry, &col);
            vForm.push_back(new Rectangle(Point(tlx,tly), Point(brx,bry), col));
            break;
        case 2:
            setForm(&tlx, &tly, &brx, &bry, &col);
            vForm.push_back(new Circle(Point(tlx,tly), Point(brx,bry), col));
            break;
        case 3:
            setForm(&tlx, &tly, &brx, &bry, &col);
            vForm.push_back(new Line(Point(tlx,tly), Point(brx,bry), col));
            break;
         case 4:
            for (size_t i = 0; i < vForm.size(); ++i)
                vForm[i]->printInfo();
            break;
        default:
            ret = 0;
            cout << "Ivalid selection" << endl;
            break;
        }
    }while(ret != 5);

    return 0;
}
