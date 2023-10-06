#include <iostream>
#include <vector>

// Función para verificar si un número es primo
bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> numerosPrimos;
    int numero = 2; // Comenzamos con el primer número primo

    while (numerosPrimos.size() < 500) {
        if (esPrimo(numero)) {
            numerosPrimos.push_back(numero);
        }
        ++numero;
    }

    std::cout << "Los primeros 500 números primos son:" << std::endl;

    for (int primo : numerosPrimos) {
        std::cout << primo << " ";
    }

    return 0;
}
