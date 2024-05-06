#include <iostream>
#include "Rectangle.h"
using namespace std;



int main(){
    float choice;

    Rectangle ro;
    cout << "Enter the length of the rectangle: " << endl;
    cin >> choice;
    ro.setLenght(choice);

    cout << "Enter the width of the rectangle: " << endl;
    cin >> choice;
    ro.setWidth(choice);
   
   cout << "The area of the Rectangle is " << ro.calculateAreaOfRectangle(ro.getLength(), ro.getWidth()) <<".\n\n\n";
    

    float input1;
    float input2;
    cout << "Enter a new length of the rectangle: " << endl;
    cin >> input1;
    cout << "Enter a new width of the rectangle: " << endl;
    cin >> input2;

    Rectangle ro2(input1, input2);
    cout << "The new area of the Rectangle is " << ro2.calculateAreaOfRectangle(ro2.getLength(), ro2.getWidth()) << endl;
    
    return 0;
}