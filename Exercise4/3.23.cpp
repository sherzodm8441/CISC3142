
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vtr(10);
    
    for (int i = 0; i < vtr.size(); i++){
        vtr[i] = (i + 1) * 2;
        cout << vtr[i] << " "; 
    }

    return 0;
}