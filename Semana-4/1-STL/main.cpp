#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <string>
//Código que mostra os usos da bibliteca STL

int main() {
    // Exemplo de uso de std::vector
    std::vector<int> vec = {1, 2, 3, 4, 5};
    for (int i : vec) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // Exemplo de uso de std::map
    std::map<std::string, int> myMap;
    myMap["um"] = 1;
    myMap["dois"] = 2;
    myMap["tres"] = 3;

    for (const auto& pair : myMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}