#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>

class Empleado {
protected:
    std::string nombre;
    double salarioBase;
public:
    Empleado(const std::string& nombre, double salarioBase);
    virtual ~Empleado() = default;
    virtual double calcularSalario() const;
    std::string getNombre() const;
};

#endif
