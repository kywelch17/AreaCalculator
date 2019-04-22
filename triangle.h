//
// Created by kywel on 4/19/2019.
//

#ifndef AREACALCULATOR_TRIANGLE_H
#define AREACALCULATOR_TRIANGLE_H
#include "shape.h"
using namespace std;

class Triangle:public Shape
{
public:
    Triangle(double hei = 0, double base = 0);

    double getHei();
    double getBase();

    void setHei(double hei);
    void setBase(double base);

    virtual double getArea();

private:
    double hei;
    double base;
};

#endif //AREACALCULATOR_TRIANGLE_H
