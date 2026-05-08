#include <iostream>
#include "custom_stack.h"

int main() {
    CustomStack pila;
    pila.push(10);
    pila.push(20);

    std::cout << "Elemento arriba: " << pila.top() << std::endl;
    std::cout << "Tamano: " << pila.size() << std::endl;

    return 0;
}
