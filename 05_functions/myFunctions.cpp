// returnType funnctionName(parameters){
//     //function body
// }

#include <iostream>

using namespace std;

int checkTemperature(int temperature){
    return temperature ;
}

void serveChai(int cups){ // this int cups is a parameter
    cout << "\n Serving  " << cups << "  cups of chai" << endl;
}

int makeChai(){
    cout << "\n Boilking water , adding sugar , milk , taea leaves and then draining them ..." <<endl;
    return 0;
}

void serveChai(string teaType = "Green Tea"){ //this teaType  = Green Tea is a default parameter if no value would be given then also the function would work and print green tea 
    cout << "\n Serving " << teaType << " chai" << endl;
}

int main(){
    int temp = checkTemperature(49);
    cout << temp;

    makeChai();
    
    serveChai();

    serveChai(3);

    return 0 ;
}
