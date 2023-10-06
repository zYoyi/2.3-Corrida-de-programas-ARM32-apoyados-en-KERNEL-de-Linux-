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

    // Encontrar el número más grande en el arreglo
    int maximo = numeros[0]; // Suponemos que el primer número es el más grande

    for (int i = 1; i < 10; ++i) {
        if (numeros[i] > maximo) {
            maximo = numeros[i];
        }
    }

    // Imprimir el número más grande
    std::cout << "Los números generados son: ";
    for (int i = 0; i < 10; ++i) {
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "El número más grande es: " << maximo << std::endl;

    return 0;
}
