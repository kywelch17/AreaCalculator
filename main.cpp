//
// Created by kywel on 4/19/2019.
//
#include <iostream>
#include "circle.h"
#include "triangle.h"
#include "square.h"
#include "shape.h"
using namespace std;

int main( )
{
    /*
     * Variable Declaration
     * ---------------------------
     * r = radius
     * l = length
     * w = width
     * b = base
     * h = height
     * sq = from the square class included in square.h
     * cir = from circle class included in circle.h
     * tri = from triangle class included in triangle.h
     * menuOption = user input for what shape they want
     */
    double r = 0;
    double l = 0;
    double w = 0;
    double b = 0;
    double h = 0;
    Square sq;
    Circle cir;
    Triangle tri;
    int menuOption;


    do
    { // Starting of while loop
        //Introduce program, and ask the user what they want to select
        cout << endl << "_______________Area Calculator______________" << endl;
        cout << "Select an Object" << endl;
        cout << " 1: Circle" << endl;
        cout << " 2: Square" << endl;
        cout << " 3: Triangle" <<endl;
        cout << " 0: Exit" << endl;
        cout << " Enter Your Choice: ";
        cin  >> menuOption;

        switch(menuOption)
        {
            case 1:
            {
                cout << "Area of a Circle" << endl;

                //Display the equation
                //\u03C0 -> pi
                cout << "A = \u03C0r^2" << endl;

                //Tell the user what the variables mean, and then ask them what they want for there varaibles
                cout << "r -> radius" << endl;
                cout << "Enter the radius: " ;
                cin >> r;
                cir.setRad(r);
                cout<< "Area of the circle is: "<< cir.getArea();
                break;
            }

            case 2:
            {
                cout << "Area of a Circle" << endl;
                cout << "A = l * l" << endl;
                cout << "l -> length of side" << endl;
                cout<< "Enter length of one side of the square : "<< endl;
                cin >> l;
                sq.setLen(l);
                cout<<"Area of the square is "<<sq.getArea();
                break;
            }
            case 3:
            {
                cout << "Area of a Triangle" << endl;
                cout << "A = (b * h)/2" << endl;
                cout << "b -> base\nh -> height" << endl;
                cout << "Enter the base of your Triangle: " << endl;
                cin >> b;
                cout << "Enter the height of your Triangle: " << endl;
                cin >> h;
                tri.setBase(b);
                tri.setHei(h);
                cout << "Area of your Triangle: \n(" << b << "*" << h << ")/2 = " << tri.getArea();
                break;
            }
        }

    }
    while(menuOption != 0);

    cout<<" ________________ Shutting Down ___________________" << endl;
}

