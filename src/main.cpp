#include <iostream>
#include <vector>
#include <memory>
#include "DesarrolladorJunior.h"
#include "DesarrolladorSenior.h"
#include "LiderTecnico.h"
#include "Tester.h"

void inicializarDatos(std::vector<std::shared_ptr<Empleado>>& empleados) {
    empleados.emplace_back(std::make_shared<DesarrolladorJunior>("Ana", 3000));
    empleados.emplace_back(std::make_shared<DesarrolladorJunior>("Luis", 3100));
    empleados.emplace_back(std::make_shared<DesarrolladorSenior>("Carlos", 4000));
    empleados.emplace_back(std::make_shared<DesarrolladorSenior>("Laura", 4200));
    empleados.emplace_back(std::make_shared<LiderTecnico>("Sofía", 5000));
    empleados.emplace_back(std::make_shared<LiderTecnico>("Pedro", 5300));
    empleados.emplace_back(std::make_shared<Tester>("Julia", 2800));
    empleados.emplace_back(std::make_shared<Tester>("Mario", 2900));
}

int main() {
    std::vector<std::shared_ptr<Empleado>> empleados;
    inicializarDatos(empleados);

    double totalPago = 0.0;

    for (const auto& emp : empleados) {
        double salario = emp->calcularSalario();
        std::cout << emp->getNombre() << ": $" << salario << "\n";
        totalPago += salario;
    }

    std::cout << "\nTotal a pagar: $" << totalPago << "\n";
    return 0;
}
