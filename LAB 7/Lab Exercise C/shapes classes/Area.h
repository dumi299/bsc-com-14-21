#ifndef AREA_H
#define AREA_H
#include "Circle.h"
#include "Square.h"
#include "Triangle.h"


class Area{
    public:
    static double CalculateAreaOfSquare(Shapes::Square& sob);
    static double CalculateAreaOfCircle(Shapes::Circle& cob);
    static double CalculateAreaOfTriangle(Shapes::Triangle& tob);

}; 

#endif