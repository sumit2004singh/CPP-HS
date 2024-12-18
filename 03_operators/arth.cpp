#include <iostream>

using namespace std;

int main(){

    int cups;
    double pricePerCup , totalPrice ,  discountedPrice;

    cout << "Enter number of cups : ";
    cin >> cups;

    cout << "Enter price per cup : ";
    cin >> pricePerCup;

    totalPrice = cups * pricePerCup;

    //apply 5% discount if total price is above 100 rupess

    if (totalPrice > 100)
    {
        discountedPrice = totalPrice - (totalPrice * 0.05);
        cout << "Price after discount : " << discountedPrice << endl;
    } else {
        cout << "Price before discount : " << totalPrice << endl;
    }
    

    return 0;
}