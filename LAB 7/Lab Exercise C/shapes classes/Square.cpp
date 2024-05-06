#include <iostream>
#include "Square.h"

using namespace std;

namespace Shapes{
    Square::Square(){
        sideLength = 0;
    }
        
    Square::Square(double newSideLength){
        sideLength = newSideLength;
    }

    void Square::setSideLength(double x){
        sideLength = x;
    }
    double Square::getSideLength(){
            return sideLength;
        }

    Square::~Square(){}
}

