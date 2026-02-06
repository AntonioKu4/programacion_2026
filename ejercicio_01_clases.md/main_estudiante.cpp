#include <iostream>
#include "estudiante.h"

using namespace std;

int main() {
    cout << "=== Sistema de Gestión de Estudiante ===" << endl << endl;

    // Estudiante con constructor por defecto
    Estudiante estudiante1;
    cout << "Estudiante 1 (constructor por defecto):" << endl;
    estudiante1.mostrarInformacionCompleta();
    cout << endl;

    // Actualizar datos de estudiante1
    estudiante1.actualizarNombre("María García López");
    estudiante1.actualizarCodigo("EST-2024-001");
    estudiante1.actualizarEdad(20);
    estudiante1.actualizarPromedio(9.2);
    estudiante1.actualizarActivo(true);

    cout << "Estudiante 1 después de actualizar:" << endl;
    estudiante1.mostrarInformacionCompleta();
    estudiante1.calcularEstadoAcademico();
    cout << endl;

    // Estudiante con constructor con parámetros
    Estudiante estudiante2("Juan Pérez Martínez", "EST-2024-002", 22, 7.5, true);
    cout << "Estudiante 2 (constructor con parámetros):" << endl;
    estudiante2.mostrarInformacionCompleta();
    estudiante2.calcularEstadoAcademico();
    cout << endl;

    // Probar incremento de edad
    cout << "Incrementando edad del estudiante 2:" << endl;
    estudiante2.incrementarEdad();
    estudiante2.mostrarEdad();
    cout << endl;

    // Probar validación de promedio
    cout << "Intentando actualizar promedio con valor inválido:" << endl;
    estudiante2.actualizarPromedio(15.0);
    estudiante2.mostrarPromedio();
    cout << endl;

    return 0;
}
