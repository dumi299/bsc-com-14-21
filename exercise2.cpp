#include <iostream>
#include <random>
using namespace std;

int main(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(0, 11);
    
    int daysUntilExpiration = dist(gen);
    cout << daysUntilExpiration << endl;

    switch(daysUntilExpiration){
       
        case 10:
        case 9:
        case 8:
        case 7:
        case 6:
            cout << "Your subscription will expire soon. Renew now!" <<endl;
            break;
        case 5:
        case 4:
        case 3:
        case 2:
            cout << "Your subscription expires in "<< daysUntilExpiration << " days.\n" << "Renew now and save 10%!" <<endl;
            break;
        case 1:
            cout << "Your subscription expires within a day!\n" << "Renew now and save 20%!" << endl;
            break;
        case 0:
            cout << "Your subscription has expired." << endl;
            break;
        default:
            cout << "You have and active subscription." << endl;

    }
    return 0;
}