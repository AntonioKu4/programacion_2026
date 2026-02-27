#include "empleado.h"
#include <iostream>

using namespace std;

Empleado::Empleado() {
    this->nombre = "";
    this->id = "";
    this->salarioBase = 0.0;
}

Empleado::Empleado(string nombre, string id, float salarioBase) {
    this->nombre = nombre;
    this->id = id;
    this->salarioBase = salarioBase;
}

void Empleado::actualizarNombre(string nuevoNombre) { this->nombre = nuevoNombre; }
void Empleado::actualizarId(string nuevoId) { this->id = nuevoId; }
void Empleado::actualizarSalarioBase(float nuevoSalario) { this->salarioBase = nuevoSalario; }

string Empleado::obtenerNombre() { return nombre; }
string Empleado::obtenerId() { return id; }
float Empleado::obtenerSalarioBase() { return salarioBase; }

void Empleado::mostrarInformacion() {
    cout << "Nombre: " << nombre << endl;
    cout << "ID: " << id << endl;
    cout << "Salario base: " << salarioBase << endl;
}
