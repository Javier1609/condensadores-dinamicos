#include <iostream>
#include <valarray>

int main() {

    std::valarray<double> valores1 = {1.0, 2.0, 3.0, 4.0, 5.0};
    std::valarray<double> valores2 = {2.0, 1.0, 4.0, 2.0, 1.0};


    std::valarray<double> suma = valores1 + valores2;
    std::valarray<double> resta = valores1 - valores2;
    std::valarray<double> multiplicacion = valores1 * valores2;
    std::valarray<double> division = valores1 / valores2;


    std::cout << "Valores1: ";
    for (const auto& valor : valores1) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;

    std::cout << "Valores2: ";
    for (const auto& valor : valores2) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;

    std::cout << "Suma: ";
    for (const auto& resultado : suma) {
        std::cout << resultado << " ";
    }
    std::cout << std::endl;

    std::cout << "Resta: ";
    for (const auto& resultado : resta) {
        std::cout << resultado << " ";
    }
    std::cout << std::endl;

    std::cout << "Multiplicacion: ";
    for (const auto& resultado : multiplicacion) {
        std::cout << resultado << " ";
    }
    std::cout << std::endl;

    std::cout << "Division: ";
    for (const auto& resultado : division) {
        std::cout << resultado << " ";
    }
    std::cout << std::endl;

    return 0;
}

