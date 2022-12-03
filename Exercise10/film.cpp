#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <cmath>
#include <string>
#include <algorithm>
#include <numeric>
#include <utility>

using namespace std;

// 1     2      3     4       5      6       7       8          9      10
//Year;Length;Title;Subject;Actor;Actress;Director;Popularity;Awards;*Image
//INT;INT;STRING;CAT;CAT;CAT;CAT;INT;BOOL;STRING

int accumulateLength(vector<int>& length){
    return accumulate(length.begin(), length.end(), 0);
}

void sortPopularity(vector<pair<int,int> >& popularity){
    sort(popularity.begin(), popularity.end(), greater<pair<int,int> >());
}

vector<int>::iterator findValue(vector<int>& length, int n){
    return find(length.begin(), length.end(), n);
}

void uniqueYears(vector<int>& years){
    sort(years.begin(), years.end());
    vector<int>::iterator it;
    it = std::unique(years.begin(), years.end());
    years.resize(std::distance(years.begin(), it));
}

bool isEqual(vector<int>& list1, vector<int>& list2){
    return  equal(list1.begin(), list2.end(), list2.begin());
}

int main()
{
    ifstream data("film.csv.txt");

    vector<string> title;
    vector<string> subject;
    vector<string> actor;
    vector<string> actress;
    vector<string> director;
    vector<string> image;
    vector<string> awards; // bool yes/no

    vector<int> year;
    vector<int> length;
    vector<pair<int,int> > popularity;

    std::string str;
    std::getline(data, str); // skip the first line
    std::getline(data, str); // skip the second line
    int k = 0;
    while (std::getline(data, str))
    {
        std::istringstream iss(str);
        iss.good();
        std::string d;
        int i = 1;
        
        while (std::getline(iss, d, ';'))
        {   
            if(i == 1){
                year.push_back(std::stoi(d));
                std::cout << std::stoi(d) << " ";
            }else if(i == 2){
                length.push_back(std::stoi((d == "") ? "0" : d));
                std::cout << d << " ";
            }else if(i == 3){
                title.push_back(d);
                std::cout << d << " ";
            }else if(i == 4){
                subject.push_back(d);
                std::cout << d << " ";
            }else if(i == 5){
                actor.push_back(d);
                std::cout << d << " ";
            }else if(i == 6){
                actress.push_back(d);
                std::cout << d << " ";
            }else if(i == 7){
                director.push_back(d);
                std::cout << d << " ";
            }else if(i == 8){
                popularity.push_back(make_pair(std::stoi((d == "") ? "0" : d), k));
                std::cout << d << " ";
            }else if(i == 9){
                awards.push_back(d);
                std::cout << d << " ";
            }else if(i == 10){
                image.push_back(d);
                std::cout << d << " ";
            }
            i++;

        }
        std::cout << std::endl;
        k++;
    }

    ofstream output("output.txt");

    output << "If length was blank, it was filled in with 0" << endl;
    output << "Total Length: " << accumulateLength(length) << endl;
    cout << "Total Length: " << accumulateLength(length) << endl;
    output << std::endl;

    sortPopularity(popularity);
    output << "If popularity was blank, if was filled in with 0" << endl;
    output << "Popularity:    Title" << endl;
    for(int i = 0; i < popularity.size(); i++){
        cout << popularity[i].first <<  "                " << title[popularity[i].second] << endl; 
        output << popularity[i].first <<  "             " << title[popularity[i].second] << endl; 

    }
    output << std::endl;


    output << "Value 100 retrieved using find(): " << *(findValue(length, 100)) << endl;
    cout << "Value 100 retrieved using find(): " << *(findValue(length, 100)) << endl;
    output << std::endl;

    vector<int> actionYears;
    vector<int> comedyYears;

    for(int i = 0; i < subject.size(); i++){
        if(subject[i] == "Action"){
            actionYears.push_back(year[i]);
        }
        if(subject[i] == "Comedy"){
            comedyYears.push_back(year[i]);
        }
    }

    uniqueYears(actionYears);
    uniqueYears(comedyYears);

    output << "Unique Action Years:      Unique Comedy Years:" << endl;
    cout << "Unique Action Years:      Unique Comedy Years:" << endl;
    for(int i = 0; i < actionYears.size(); i++){
        cout << actionYears[i] << "                                 " << comedyYears[i] << endl;
        output << actionYears[i] << "                      " << comedyYears[i] << endl;
    }
    output << std::endl;

    output << "Are comedy and actions year lists equal? " << ((isEqual(actionYears, comedyYears) == 0) ? "No" : "Yes")  << endl; 
    cout << "Are comedy and actions year lists equal? " << ((isEqual(actionYears, comedyYears) == 0) ? "No" : "Yes")  << endl; 
    output << std::endl;
    

    return 0;
}
