#include <iostream>
#include "Triangle.h"

using namespace std;

namespace Shapes{
    Triangle::Triangle(){
        Base = 0;
        Height = 0;
    }
        
    Triangle::Triangle(double newBase, double newHeight){
        Base = newBase;
        Height = newHeight;
    }

    void Triangle::setBase(double w){
        Base = w;
    }
    double Triangle::getBase(){
            return Base;
        }

    void Triangle::setHeight(double z){
        Height = z;
    }
    double Triangle::getHeight(){
            return Height;
        }

    Triangle::~Triangle(){}
}

