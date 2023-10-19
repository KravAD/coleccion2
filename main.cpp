#include <iostream>
#define PI 3.14159
#define AREA_CIRCULO(r) (PI * (r) * (r))
#include "matematicas.h"
int main() {

    std::cout << "Hola Clion" << std::endl;

    int radio = 5;
    auto area = static_cast<float>(AREA_CIRCULO(radio));
    std::cout << "El área del círculo con radio " << radio << " es " << area << std::endl;


    int a = 10;
    int b = 5;

    std::cout << "Suma: " << suma(a, b) << std::endl;
    std::cout << "Resta: " << resta(a, b) << std::endl;
    std::cout << "Multiplicación: " << multiplicacion(a, b) << std::endl;

    if (b != 0) {
        std::cout << "División: " << division(a, b) << std::endl;
    } else {
        std::cout << "No se puede dividir por cero." << std::endl;
    }

    return 0;
}
