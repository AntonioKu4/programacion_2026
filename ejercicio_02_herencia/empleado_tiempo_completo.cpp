#include "empleado_tiempo_completo.h"
#include <iostream>

using namespace std;

// Constructor por defecto: llama al del padre
EmpleadoTiempoCompleto::EmpleadoTiempoCompleto() : Empleado() {
    this->horasSemanales = 0;
    this->bono = 0.0;
}

// Constructor con parámetros: pasa datos al padre
EmpleadoTiempoCompleto::EmpleadoTiempoCompleto(string nombre, string id, float salarioBase, int horasSemanales, float bono)
    : Empleado(nombre, id, salarioBase) {
    this->horasSemanales = horasSemanales;
    this->bono = bono;
}

void EmpleadoTiempoCompleto::actualizarHorasSemanales(int nuevasHoras) { this->horasSemanales = nuevasHoras; }
void EmpleadoTiempoCompleto::actualizarBono(float nuevoBono) { this->bono = nuevoBono; }

int EmpleadoTiempoCompleto::obtenerHorasSemanales() { return horasSemanales; }
float EmpleadoTiempoCompleto::obtenerBono() { return bono; }

void EmpleadoTiempoCompleto::mostrarInformacion() {
    // Llamamos al método del padre para no repetir código
    Empleado::mostrarInformacion();
    cout << "Horas semanales: " << horasSemanales << endl;
    cout << "Bono: " << bono << endl;
}

float EmpleadoTiempoCompleto::calcularSalarioTotal() {
    // Podemos usar salarioBase porque es 'protected' en la clase padre
    return salarioBase + bono;
}
