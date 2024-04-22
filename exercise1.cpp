#include <iostream>
#include <random>
using namespace std;

int main(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(0, 11);
    
    int daysUntilExpiration = dist(gen);

    if (daysUntilExpiration <= 10){
       
        if(daysUntilExpiration <= 5){
            if(daysUntilExpiration == 1){
                cout << "Your subscription expires within a day!\n" << "Renew now and save 20%!" << endl;
            }
            else if(daysUntilExpiration == 0){
                cout << "Your subscription has expired." << endl;
            }
            else{
                cout << "Your subscription expires in "<< daysUntilExpiration << " days.\n" << "Renew now and save 10%!" <<endl;
            }
        }
        
        else{
             cout << "Your subscription will expire soon. Renew now!" <<endl;
        }
   
    }
    else{
        cout << "You have and active subscription." << endl;
    }
    
    return 0;
}