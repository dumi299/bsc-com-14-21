#include <iostream>
#include <string>

using namespace std;

int main(){
    //dynamic allocation of an integer and a string
    int *dynamicInteger = new int;
    string *dynamicString = new string;

    cout << "Enter an integer: ";
    cin >> *dynamicInteger;

    cout << "Enter a string: ";
    cin >> *dynamicString;

    cout << "The value of the integer is: " << *dynamicInteger << endl;
    cout << "The value of the string is: " << *dynamicString << endl;
    
    delete dynamicInteger;
    delete dynamicString;
    
    return 0;
}