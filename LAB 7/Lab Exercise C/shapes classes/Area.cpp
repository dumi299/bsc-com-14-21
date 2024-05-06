#include <iostream>
#include <cmath>
#include "Area.h"

using namespace std;

double Area::CalculateAreaOfSquare(Shapes::Square& sob){
    return sob.getSideLength() * sob.getSideLength(); 
 }
 
double Area::CalculateAreaOfCircle(Shapes::Circle& cob){
    return M_PI * cob.getRadius() * cob.getRadius();  
}

double Area::CalculateAreaOfTriangle(Shapes::Triangle& tob){
    return 0.5 * tob.getBase() * tob.getHeight();
}


