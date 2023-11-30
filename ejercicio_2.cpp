#include <iostream>
#include <list>
#include <stack>

int main() {

    std::list<double> milista = {1.1, 2.2, 3.3, 4.4, 5.5};


    std::stack<double, std::list<double>> miPila(milista);


    std::cout << "Secuencia original en la lista:" << std::endl;
    for (const auto& elemento : milista) {
        std::cout << elemento << " ";
    }
    std::cout << std::endl;


    miPila.push(6.6);


    std::cout << "Secuencia despues de push en la pila:" << std::endl;
    while (!miPila.empty()) {
        std::cout << miPila.top() << " ";
        miPila.pop();
    }
    std::cout << std::endl;

    return 0;
}
