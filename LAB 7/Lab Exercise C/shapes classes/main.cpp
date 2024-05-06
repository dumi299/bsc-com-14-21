#include <iostream>
#include "Circle.h"
#include "Square.h"
#include "Triangle.h"
#include "Area.h"

using namespace std;
using namespace Shapes;

int main(){
    char choice;
    bool quitProgram = false;
    double radius, sideLength, base, height;
    
    
    while(!quitProgram){
        cout << "Choose Your option: \n\n";
        cout << "1. Calculate the area of a Circle.\n";
        cout << "2. Calculate the area of a Square.\n";
        cout << "3. Calculate the area of a Triangle.\n";
        cout << "4. Quit Program!" << endl;
        cin >> choice;

        
        switch(choice){
            case '1':{
                cout << "Enter the radius of the circle in m.\n";
                cin >> radius;
                Circle cob(radius);
                cout << "The area of the Circle is: " << Area::CalculateAreaOfCircle(cob) << endl;
            break;
            }
            case '2':{
                cout << "Enter the side length of the square in m.\n";
                cin >> sideLength;
                Square sob(radius);
                cout << "The area of the Square is: " << Area::CalculateAreaOfSquare(sob) << endl;
            break;
            }
            case '3':{
                cout << "Enter the base of the Triangle in m.\n";
                cin >> base;
                cout << "Enter the height of the Triangle in m.\n";
                cin >> height;
                Triangle tob(base, height);
                cout << "The area of the Square is: " << Area::CalculateAreaOfTriangle(tob) << endl;
            break;
            }
            case '4':{
                quitProgram = true;
            break;
            }
            default :{
                cout <<"Invalid input. Please try again.\n\n";
            break;
            }
        }

    }
    
    
    
    return 0;
}