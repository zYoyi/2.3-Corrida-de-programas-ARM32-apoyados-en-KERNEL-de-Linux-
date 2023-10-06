#include <iostream>

int main() {
    // Declarar una variable para almacenar el número ingresado por el usuario
    double numero;

    // Pedir al usuario que ingrese un número
    std::cout << "Por favor, ingrese un número: ";
    std::cin >> numero;

    // Realizar la división entre 3
    double resultado = numero / 3.0;

    // Mostrar el resultado
    std::cout << "El resultado de la división de " << numero << " entre 3 es: " << resultado << std::endl;

    return 0;
}

