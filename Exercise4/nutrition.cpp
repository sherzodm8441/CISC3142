#include <iostream>

using namespace std;

int main()
{
    string yesNo;
    do{
        int weight;
    
        cout << "Enter weight" << endl;
        cin >> weight;

        const double ratio = 5.0/35.0;
        double lethalDose = weight * ratio;
        int numOfCans = lethalDose / (350.0/1000.0);

        cout << numOfCans << " cans is allowed" << endl;

        cout << "Enter a different weight? (y/n)";
        
        cin >> yesNo;
    }while(yesNo == "y");

    return 0;
}

//death ratio = 5/35;

//lethalDose = personWeight * 5/35

//numOfCans = lethalDose / (350/1000) 