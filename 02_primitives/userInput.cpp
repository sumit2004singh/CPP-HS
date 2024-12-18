#include <iostream>
#include <string>

using namespace std;

int main(){
    string userTea;
    int teaQuantity;

    cout << "Would you like to have a tea ? \n";
    
    getline(cin , userTea);

    //ask for quantity
    cout << "How many cups of " << userTea << "Would you like to have ?\n";
    cin >> teaQuantity;

    cout << teaQuantity;
    cout << userTea;

    return 0;
}