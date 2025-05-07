#include "Empleado.h"

Empleado::Empleado(const std::string& nombre, double salarioBase)
        : nombre(nombre), salarioBase(salarioBase) {}

double Empleado::calcularSalario() const {
    return salarioBase;
}

std::string Empleado::getNombre() const {
    return nombre;
}