//
// Created by kywel on 4/19/2019.
//

#include "triangle.h"
#include <iostream>
#include <math.h>
using namespace std;

Triangle::Triangle(double h, double b)
{
    hei = h;
    base = b;
}
double Triangle::getHei()
{
    return hei;
}
void Triangle::setHei(double h)
{
    hei = h;
}
double Triangle::getBase()
{
    return base;
}
void Triangle::setBase(double b)
{
    base = b;
}
double Triangle::getArea()
{
    return double((hei * base)/2.0);
}