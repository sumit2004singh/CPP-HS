#include <iostream>

using namespace std;

int main() {
    int teaLeaves = 50; //integer
    float temperature = 85.54574;//can store 7 but gives 4 in response after decimal
    double priceOfTea = 299.99111111;//can store till 15 last digits but gives 3 in response  after decimal
    char teaGrade = 'A'; ///need to be a single char
    bool isTeaReady = true; // boolean is true or false only (storage is 1 bytes only) , 0 means false and 1 means true 
    unsigned value = 5000;// its always positive
    long long need = 10000000000000; // gives the exact precise value 
    int roundedNumber = (int) temperature; //round of , response will be 85
    

    cout << roundedNumber << endl;

    return 0;
     
} 