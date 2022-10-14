#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    double xSum = 0.0;
    double ySum = 0.0;

    double xAverage = 0.0;
    double yAverage = 0.0;

    fstream file("regressionData.txt");

    vector<int> data;

    int input;

    while(file >> input){
        data.push_back(input);
    }
    
    for(int i = 0; i < data.size(); i++){
        if(i % 2 == 0){
            ySum += data[i];
        }else{
            xSum += data[i];
        }
    }

    xAverage = xSum / (data.size() / 2);
    yAverage = ySum / (data.size() / 2);

    vector<double> xDiff;
    vector<double> yDiff;

    double xXPrime = 0;

    for(int i = 0; i < data.size(); i++){
        if(i % 2 == 0){
            yDiff.push_back((data[i] - yAverage));
        }else{
            xDiff.push_back((data[i] - xAverage));
            xXPrime += ((data[i] - xAverage) * (data[i] - xAverage));
        }
    }

    double xYSum = 0;

    for(int i = 0; i < xDiff.size(); i++){
        xYSum += xDiff[i] * yDiff[i];
    }

    double b1 = xYSum / xXPrime;
    double b0 = yAverage - b1 * xAverage;

    cout << "Intercept: " << b0 << endl;
    cout << "Slope: " << b1 << "x" << endl;
    cout << "The regression equation is: Ŷ=" << b0 << "+" << b1 << "x" << endl;
    return 0;
}
