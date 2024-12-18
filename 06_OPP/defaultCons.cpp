#include <iostream>
#include <vector>

using namespace std;

class Chai {
public:
    string teaName;
    int servings;
    vector<string> ingredients;

    //default contructor
    Chai(){
        cout << "constructor called" << endl;
    }

    void displayChaiDetails(){
        cout << "Tea Name: " << teaName << endl;
        cout << "Servings: " << servings << endl;
        cout << "Ingredients: " ;
        for(string ingridient : ingredients){
            cout << ingridient << " ";
        }
        cout << endl;
    }

};

int main(){
    Chai defaultChai;

    return 0;
}