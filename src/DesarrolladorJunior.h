#ifndef DESARROLLADORJUNIOR_H
#define DESARROLLADORJUNIOR_H

#include "Empleado.h"

class DesarrolladorJunior : public Empleado {
public:
    DesarrolladorJunior(const std::string& nombre, double salarioBase);
    double calcularSalario() const override;
};

#endif
