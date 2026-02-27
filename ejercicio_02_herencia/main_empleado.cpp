#include <iostream>
#include "empleado_tiempo_completo.h"

using namespace std;

int main() {
    cout << "=== Sistema de Gestión de Empleados ===" << endl << endl;

    // Probar clase base
    Empleado emp1("Ana López", "EMP-001", 15000.0);
    cout << "Empleado (clase base):" << endl;
    emp1.mostrarInformacion();
    cout << endl;

    // Probar clase derivada (defecto)
    EmpleadoTiempoCompleto etc1;
    cout << "Empleado tiempo completo (constructor por defecto):" << endl;
    etc1.mostrarInformacion();
    cout << endl;

    // Probar clase derivada (parámetros)
    EmpleadoTiempoCompleto etc2("Carlos Ruiz", "EMP-002", 20000.0, 40, 2000.0);
    cout << "Empleado tiempo completo (constructor con parámetros):" << endl;
    etc2.mostrarInformacion();
    cout << "Salario total: " << etc2.calcularSalarioTotal() << endl << endl;

    // Actualizar y recalcular
    etc2.actualizarBono(3000.0);
    cout << "Después de actualizar bono:" << endl;
    etc2.mostrarInformacion();
    cout << "Salario total: " << etc2.calcularSalarioTotal() << endl;

    return 0;
}
