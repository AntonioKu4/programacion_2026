#ifndef MOTO_H
#define MOTO_H

#include "Vehiculo.h" // Importamos al "padre"
#include <string>

// La clase Moto HEREDA (public) de Vehiculo
class Moto : public Vehiculo {
private:
    int cilindrada; // Dato único de la moto (ej. 600cc)

public:
    // Constructor: Para crear la moto con marca, modelo, placa y cilindrada
    Moto(std::string marca, std::string modelo, std::string placa, int cilindrada);

    // Método para mostrar la información completa
    void mostrarInfo() override;
};

#endif
