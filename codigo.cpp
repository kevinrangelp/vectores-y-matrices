#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

struct Producto {
    std::string nombre;
    int cantidad;
    double precio;
};

int main() {
    std::vector<Producto> inventario = {
        {"Cuaderno", 10, 3500.0},
        {"Lapicero", 25, 1200.50},
        {"Borrador", 8, 800.0},
        {"Regla", 15, 2300.75}
    };

    std::cout << std::left
              << std::setw(15) << "Producto"
              << std::right
              << std::setw(10) << "Cantidad"
              << std::setw(12) << "Precio"
              << std::setw(14) << "Subtotal" << "\n";
    std::cout << std::string(51, '-') << "\n";

    double total = 0.0;
 
    std::cout << std::fixed << std::setprecision(2);

    for (const Producto& p : inventario) {
        double subtotal = p.cantidad * p.precio;
        total += subtotal;

        std::cout << std::left
                  << std::setw(15) << p.nombre
                  << std::right
                  << std::setw(10) << p.cantidad
                  << std::setw(12) << p.precio
                  << std::setw(14) << subtotal << "\n";
    }

    std::cout << std::string(51, '-') << "\n";
    std::cout << std::left << std::setw(37) << "TOTAL"
              << std::right << std::setw(14) << total << "\n";

    return 0;
}