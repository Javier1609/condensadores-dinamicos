#include <iostream>
#include <vector>
#include <algorithm>

int main() {

    std::vector<int> miVector = {7, 2, 5, 1, 8, 3, 6, 4};


    std::sort(miVector.begin(), miVector.end());


    std::cout << "Vector ordenado:" << std::endl;
    for (const auto& elemento : miVector) {
        std::cout << elemento << " ";
    }
    std::cout << std::endl;


    auto maxElement = std::max_element(miVector.begin(), miVector.end());


    std::cout << "Elemento mas grande: " << *maxElement << std::endl;

    return 0;
}

