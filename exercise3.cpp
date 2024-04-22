#include <iostream>
using namespace std;

int main(){

    string names[] = {"B123","C234","A345","C15","B177","G3003","C235","B179"};
    int array_size = sizeof(names)/sizeof(names[0]);
    char target_letter = 'B';

    for (int i = 0; i < array_size; ++i){
        if(names[i] [0] == target_letter){
            cout << names[i] << endl;
        }
    }

    return 0;
}