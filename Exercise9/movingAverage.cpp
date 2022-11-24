#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <cmath>

using namespace std;

int main()
{
    ifstream data("weather.csv.txt");

    vector<string> month;
    vector<int> temp;

    std::string str;
    std::getline(data, str); // skip the first line
    while (std::getline(data, str))
    {
        std::istringstream iss(str);
        std::string d;
        int i = 1;
        while (std::getline(iss, d, ','))
        {   
            if(i == 2){
                temp.push_back(std::stoi(d));
                std::cout << std::stoi(d) << " ";
                i = 0;
            }else{
                std::cout << d << " ";
                month.push_back(d);
            }
            i++;
        }
        std::cout << std::endl;
    }

    int total = 0;

    for(int i = 0; i < temp.size(); i++){
        total += temp[i];
    }

    double simpleAverage = total / temp.size();

    cout << "Simple Average " << simpleAverage << endl;

    int movingTotal = 0;
    vector<double> movingAve;

    for(int i = 0; i < temp.size() - 2; i++){
        for(int j = i; j < i + 3; j++){
            movingTotal += temp[j];
        }

        movingAve.push_back(movingTotal / 3.0);
        cout << "Moving Average :" << ceil(movingAve[i]) << endl;
        movingTotal = 0;
    }

    int weightedTotal = 0;
    vector<double> weightedAve;

    for(int i = 0; i < temp.size() - 2; i++){
        for(int j = i; j < i + 3; j++){
            weightedTotal += temp[j] * ((j + 1) - i);
        }

        cout << weightedTotal << endl;
        weightedAve.push_back(weightedTotal / 6.0);
        cout << "Weighted Moving Average: " << ceil(weightedAve[i]) << endl;
        weightedTotal = 0;
    }

    ofstream output("output.txt");

    output << "Simple Average: " << simpleAverage << endl;;

    output << "Month Temperature movingAverage weightedMovingAverage" << endl;

    for(int i = 0; i < temp.size(); i++){
        if(i < 2){
            output << month[i] << "    " << temp[i] << endl;
        }else{
            output << month[i] << "    " << temp[i] << "         "         << ceil(movingAve[i - 2]) << "                " << ceil(weightedAve[i - 2]) << endl;
        }
    }

    return 0;
}
