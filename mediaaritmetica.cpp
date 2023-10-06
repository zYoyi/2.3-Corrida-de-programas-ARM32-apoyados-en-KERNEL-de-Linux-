#include <iostream>
#include <cstdlib> // Necesario para funciones de generación de números aleatorios
#include <ctime>   // Necesario para inicializar la semilla del generador de números aleatorios

int main() {
    // Inicializar la semilla del generador de números aleatorios
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Declarar un arreglo para almacenar los números aleatorios
    int numeros[10];

    // Generar 10 números aleatorios y almacenarlos en el arreglo
    for (int i = 0; i < 10; ++i) {
        numeros[i] = std::rand() % 100; // Números aleatorios en el rango de 0 a 99
    }

    // Calcular la suma de los números en el arreglo
    int suma = 0;
    for (int i = 0; i < 10; ++i) {
        suma += numeros[i];
    }

    // Calcular la media aritmética
    double media = static_cast<double>(suma) / 10.0;

    // Imprimir los números generados y la media aritmética
    std::cout << "Los números generados son: ";
    for (int i = 0; i < 10; ++i) {
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "La media aritmética es: " << media << std::endl;

    return 0;
}

