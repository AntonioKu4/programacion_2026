#include "Moto.h"
#include <iostream>

// El constructor le pasa la marca, modelo y placa al "padre" (Vehiculo)
// y nosotros nos quedamos con la cilindrada.
Moto::Moto(std::string marca, std::string modelo, std::string placa, int cilindrada)
    : Vehiculo(marca, modelo, placa) {
    this->cilindrada = cilindrada;
}

// Aquí mostramos los datos. Usamos "getPlaca()" o los atributos del padre.
void Moto::mostrarInfo() {
    std::cout << "[TIPO: MOTO]" << std::endl;
    // Llamamos a la función del padre para no repetir código
    Vehiculo::mostrarInfo();
    std::cout << "Cilindrada: " << cilindrada << "cc" << std::endl;
    std::cout << "--------------------------" << std::endl;
}
