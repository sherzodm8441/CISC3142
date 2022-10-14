#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int input;
    cout << "Enter a multiple digit number" << endl;
    cin >> input;
    

    while(input > 0){
        sum += (input % 10);

        input = input / 10;
    }

    cout << "The sum of the digits of the number is: " << sum <<  endl;

    return 0;
}
