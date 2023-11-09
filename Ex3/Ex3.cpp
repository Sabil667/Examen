#include <iostream>

// Función para intercambiar los valores de dos variables usando punteros
void intercambiar(int *puntero1, int *puntero2) {
    int temp = *puntero1;
    *puntero1 = *puntero2;
    *puntero2 = temp;
}
int main() {
    int a = 7;
    int b = 14;

    std::cout << "Numeros antes de hacer el cambio:" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;

    // Llamamos a la función para intercambiar los valores de a y b
    intercambiar(&a, &b);

    std::cout << "Despues del intercambio:" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;
//2
    return 0;
}
