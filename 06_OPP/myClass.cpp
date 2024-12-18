#include <iostream>
#include <vector>

using namespace std;


class Chai {
public:
    //data members (attributes)
    string teaName; // name of the tea
    int servings; //number of servings
    vector <string> ingrediends; // lists of ingredients for the tea 

    //Member function
    void displayChaiDetails(){
        cout << "Tea name : " << teaName << endl;
        cout << "Servings : " << servings << endl;
        cout <<  "ingrediends : ";
        for (string ingre : ingrediends){
            cout << ingre << " ";
        }
        cout << endl;
    }
};

int main(){

    Chai chai;

    chai.teaName = "Green Tea";
    chai.servings = 3;
    chai.ingrediends = {"Green Tea Powder , " , "Water , " , "Sugar"};
    chai.displayChaiDetails();
    
    Chai chaiOne;

    chaiOne.teaName = "Black Tea";
    chaiOne.servings = 2;
    chaiOne.ingrediends = {"Black Tea Powder , " , "Water , " , "Sugar"};
    chaiOne.displayChaiDetails();
    return 0;
}