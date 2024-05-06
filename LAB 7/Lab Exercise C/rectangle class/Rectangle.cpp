#include <iostream>
#include "Rectangle.h"

using namespace std;
 
 Rectangle::Rectangle(){
            length = 0;
            width = 0;
        }

Rectangle::Rectangle(float newLength, float newWidth){
            length = newLength;
            width = newWidth;
        }



        void Rectangle::setLenght(float x){
            length = x;
        }
        float Rectangle::getLength(){
            return length;
        }

       void Rectangle::setWidth(float y){
            width = y;
        }
        float Rectangle::getWidth(){
            return width;
        }

    float Rectangle::calculateAreaOfRectangle(float lengthValue, float widthValue){
            float Area = lengthValue * widthValue;
            return Area;
        }

        Rectangle::~Rectangle(){

        }


