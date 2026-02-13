#ifndef CELULAR_H
#define CELULAR_H

#include <string>

class Celular {
private:
    // 5 Atributos
    std::string marca;
    std::string modelo;
    int almacenamiento; // en GB
    double nivelBateria; // porcentaje 0.0 a 100.0
    bool encendido;

public:
    // Constructor
    Celular(std::string _marca, std::string _modelo, int _almacenamiento);

    // 3 Métodos
    void encender();
    void cargarBateria(double cantidad);
    void mostrarInfo();
};

#endif
