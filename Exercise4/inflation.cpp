
#include <iostream>

using namespace std;

int main()
{
    double price;
    int years;
    double inflation;

    cout << "Enter price" << endl;
    cin >> price;

    cout << "Enter how many years from now the item will be purchased (round to the closest whole number)" << endl;
    cin >> years;

    cout << "Enter the rate of inflation" << endl;
    cin >> inflation;
    inflation = inflation / 100;

    for(int i = 0; i < years; i++){
        price = price * (1 + inflation);
    }

    cout << "The price of the item in " << years << " will be " << price << endl;
    return 0;
}