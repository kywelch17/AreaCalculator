//
// Created by kywel on 4/19/2019.
//

#include "square.h"
#include <iostream>
#include <math.h>
using namespace std;

Square::Square(double l)
{
    len = l;
}
double Square::getLen() {
    return len;
}
void Square::setLen(double l){
    len = l;
}
double Square::getArea(){
    return pow(len, 2);
}