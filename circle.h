//
// Created by kywel on 4/19/2019.
//

#ifndef AREACALCULATOR_CIRCLE_H
#define AREACALCULATOR_CIRCLE_H
#include "shape.h"

class Circle:public Shape
{
public:

    Circle(double rad = 0);

    double getRad();

    void setRad(double rad);

    virtual double getArea();

private:
    double rad;
};

#endif //AREACALCULATOR_CIRCLE_H
