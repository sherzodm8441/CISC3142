#include <iostream>
#include <vector>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    vector<string> vtr;
    string input;
    cout << "Enter words (enter q to stop)" << endl;

    while((cin >> input) && input != "q"){
        transform(input.begin(), input.end(), input.begin(), ::toupper);
        vtr.push_back(input);
    }

    for (int i = 0; i < vtr.size(); i++){
        if((i + 1) % 8 == 0){
            cout << vtr[i] << endl;
        }else{
            cout << vtr[i] << " ";
        }
            
    }

    return 0;
}
