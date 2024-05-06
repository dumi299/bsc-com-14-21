#include <iostream>
using namespace std;

int main(){
    int rows,cols;

    cout << "Enter the number of rows(maximum of 3): \n";
    cin >> rows;
    while(true){
        if (rows > 3){
        cout << "Please enter a number that is within the limit!: ";
        cin >> rows;
        }
       break;
    }
   
    cout << "Enter the number of columns(maximum of 3): \n";
    cin >> cols;
    while(true){
        if (cols > 3){
        cout << "Please enter a number that is within the limit!: ";
        cin >> cols;
        }
       break;
    }

    double** Array = new double*[rows];
        for(int i = 0; i < rows; i++){
            Array[i] = new double[cols];
        }

        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                cout << "Enter the value of the element at row "<< i + 1 << " and column " << j + 1 << ":";
                cin >> Array[i][j];
            }
        }

        cout << "The values of the array are:\n\n";
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                cout << Array[i][j] << " ";
            }
            cout << endl;
        }


        for(int i = 0; i < rows; i++){
            delete[] Array[i];
        }
        delete[] Array;
        
    return 0;
}