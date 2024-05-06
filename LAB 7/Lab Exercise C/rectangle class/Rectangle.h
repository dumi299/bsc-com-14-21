#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle{
    public:
       Rectangle();
       Rectangle(float newLength, float newWidth);
       
        void setLenght(float x);
        float getLength();

        void setWidth(float y);
        float getWidth();

       float calculateAreaOfRectangle(float lengthValue, float widthValue);
       ~Rectangle();
    private:
        float length;
        float width;
};

#endif