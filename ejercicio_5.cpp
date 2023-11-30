#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>

int main() {

    auto cuadrado = [](int x) { return x * x; };


    int numero = 5;
    auto resultado = cuadrado(numero);


    std::cout << "El cuadrado de " << numero << " es: " << resultado << std::endl;


    auto miVariable = 10;


    std::vector<int> miVector = {1, 2, 3, 4, 5};


    std::cout << "Elementos del vector: ";
    std::for_each(miVector.begin(), miVector.end(), [](int elemento) {
        std::cout << elemento << " ";
    });
    std::cout << std::endl;


    std::unique_ptr<int> miPuntero = std::make_unique<int>(42);
    std::cout << "Valor apuntado por el puntero: " << *miPuntero << std::endl;

    return 0;
}

