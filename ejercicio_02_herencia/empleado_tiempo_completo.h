#ifndef EMPLEADO_TIEMPO_COMPLETO_H
#define EMPLEADO_TIEMPO_COMPLETO_H

#include "empleado.h"

class EmpleadoTiempoCompleto : public Empleado {
private:
    int horasSemanales;
    float bono;

public:
    EmpleadoTiempoCompleto();
    EmpleadoTiempoCompleto(std::string nombre, std::string id, float salarioBase, int horasSemanales, float bono);

    void actualizarHorasSemanales(int nuevasHoras);
    void actualizarBono(float nuevoBono);

    int obtenerHorasSemanales();
    float obtenerBono();

    void mostrarInformacion(); // Sobrescritura
    float calcularSalarioTotal();
};

#endif
