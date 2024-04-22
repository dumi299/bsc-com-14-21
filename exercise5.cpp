#include <iostream>
#include <cmath>
using namespace std;

double triangle(double base, double height);
double rectangle(double length, double width);
double square(double side);

int main(){
    char choice;
    bool quitProgram = false;

    while(!quitProgram) {
        cout << "Please select the area of the shape to calculate\n";
        cout << "1. Square\n";
        cout << "2. Rectangle\n";
        cout << "3. Triangle\n";
        cout << "4. Quit Program.\n\n";
        cout << " Enter Selection: ";
        cin >> choice;
        
        switch (choice) {
            case '1':
                double side;
                cout << "Enter the length of the side of the square in m:\n";
                cout << "Length = ";
                cin >> side;

                cout << "The Area of the Square is " << square(side) << "m\n\n"; 
                break;
            case '2':
                double length, width;
                cout << "Enter the length and width of the rectangle in m:\n";
                cout << "Length = ";
                cin >> length;
                cout << "Width = ";
                cin >> width;

                cout << "The Area of the Rectangle is " << rectangle(length, width) << "m\n\n"; 
                break;
            case '3':
                double base, height;
                cout << "Enter the base and height of the triangle in m:\n";
                cout << "Base = ";
                cin >> base;
                cout << "Height = ";
                cin >> height;

                cout << "The Area of the Triangle is " << triangle(base, height) << "m\n\n"; 
                break;     
            case '4':
                quitProgram = true;
                break;
        
            default:
                cout << "Your input was: " << choice << " which is an invalid input.\n";
                cout << "Please enter a valid input!!!\n\n";
                break; 
            
        }
    }

    return 0;
}




double triangle(double base, double height){
    double area = (1/2) * base * height; 

    return area;
}

double rectangle(double length, double width){
    double area = length * width; 

    return area;
}

double square(double side){
    double area = side * side; 

    return area;
}