//Exercise 1.11
//For

#include <iostream>
int main(){
    std::cout << "Enter two numbers (num1 < num2):" << std::endl; 
    int v1 = 0, v2 = 0; 
    std::cin >> v1 >> v2; 

    for (int i = v1; i <= v2; i++){
        std::cout << i << std::endl; 
    }

    return 0;
}