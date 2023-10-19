#include "funciones.h"
#include <iostream>

int suma(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}

int main() {
    int resultado_suma = suma(5, 3);
    int resultado_resta = resta(8, 2);

    std::cout << "Resultado de la suma: " << resultado_suma << std::endl;
    std::cout << "Resultado de la resta: " << resultado_resta << std::endl;

    return 0;
}
