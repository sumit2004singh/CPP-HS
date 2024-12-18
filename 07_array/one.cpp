#include <iostream>

using namespace std;

int main(){
    int chaiTemperature[5] = {100, 110, 120, 130, 140};

    cout << "Chai temperatures are : " << endl;
    for(int i=0; i < 5 ; i++){
        cout << chaiTemperature[i] << "  degree  C" << endl;
    }
    return 0;
}