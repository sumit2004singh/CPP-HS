#include <iostream>

using namespace std;

void pourChai(int &cups){
    cups = cups + 5;
    cout << "Poured cups : " << cups << endl;
}


int main(){
    int chaiCups = 3;
    pourChai(chaiCups);
    cout << "Total cups of chai are " << chaiCups << endl;
    return 0;
}

// for reference of the particular variable use" & " before the para meters 