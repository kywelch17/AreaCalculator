//
// Created by kywel on 4/19/2019.
//

#include "circle.h"
#include <iostream>
#include <math.h>
using namespace std;

Circle::Circle (double r)
{
    rad = r;
}
double Circle::getRad()
{
    return rad;
}
void Circle::setRad(double r){
    rad = r;
}
double Circle::getArea(){
    return pow(rad, 2) *  3.14159;
}