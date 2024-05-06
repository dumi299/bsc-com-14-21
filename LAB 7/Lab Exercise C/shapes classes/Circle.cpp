#include <iostream>
#include "Circle.h"

using namespace std;

namespace Shapes{
    Circle::Circle(){
        radius = 0;
    }
        
    Circle::Circle(double newRadius){
        radius = newRadius;
    }

    void Circle::setRadius(double y){
        radius = y;
    }
    double Circle::getRadius(){
            return radius;
        }

    Circle::~Circle(){}
}