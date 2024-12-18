//llamda 

#include <iostream>

using namespace std;

int main(){

    //llamda 
    auto preparedChai = [](int cups){
        cout << "Preparing " << cups << " cups of tea" << endl;
    };

    preparedChai(2);
    
    return 0;
}