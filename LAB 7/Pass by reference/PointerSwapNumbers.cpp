#include <iostream>
using namespace std;
void swapNumbers(int *A, int *B);

int main(){

  int varA = 25;
  int varB =100;

  cout << "varA before swap: " << varA << endl;
  cout << "varB before swap: " << varB << endl;

  swapNumbers(&varA, &varB);

  cout << "varA after swap: " << varA << endl;
  cout << "varB after swap: " << varB << endl;
 return 0;
}

void swapNumbers(int *A, int *B){
  int temp = *A;
  *A = *B;
  *B = temp;
}