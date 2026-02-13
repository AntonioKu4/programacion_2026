#include "Celular.h"
#include <iostream>

// Implementación del Constructor
Celular::Celular(std::string _marca, std::string _modelo, int _almacenamiento) {
    marca = _marca;
    modelo = _modelo;
    almacenamiento = _almacenamiento;
    nivelBateria = 50.0; // Inicia con 50% por defecto
    encendido = false;
}

// Método 1: Encender el celular
void Celular::encender() {
    if (!encendido) {
        encendido = true;
        std::cout << "El celular " << marca << " " << modelo << " se ha encendido.\n";
    } else {
        std::cout << "El celular ya está encendido.\n";
    }
}

// Método 2: Cargar batería
void Celular::cargarBateria(double cantidad) {
    nivelBateria += cantidad;
    if (nivelBateria > 100.0) nivelBateria = 100.0;
    std::cout << "Cargando... Nivel actual: " << nivelBateria << "%\n";
}

// Método 3: Mostrar información técnica
void Celular::mostrarInfo() {
    std::cout << "--- Especificaciones del Celular ---\n";
    std::cout << "Marca: " << marca << "\n";
    std::cout << "Modelo: " << modelo << "\n";
    std::cout << "Almacenamiento: " << almacenamiento << "GB\n";
    std::cout << "Batería: " << nivelBateria << "%\n";
    std::cout << "Estado: " << (encendido ? "Encendido" : "Apagado") << "\n";
    std::cout << "------------------------------------\n";
}
