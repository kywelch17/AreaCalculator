//
// Created by kywel on 4/19/2019.
//

#ifndef AREACALCULATOR_SQUARE_H
#define AREACALCULATOR_SQUARE_H
#include "shape.h"
using namespace std;

class Square:public Shape
{
public:
    Square(double len = 0);

    double getLen();

    void setLen(double len);

    virtual double getArea();

private:
    double len;
};

#endif //AREACALCULATOR_SQUARE_H
