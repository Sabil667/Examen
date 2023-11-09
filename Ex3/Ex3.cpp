#include <iostream>

// Función para intercambiar los valores de dos variables usando punteros
void intercambiar(int *puntero1, int *puntero2) {
    int temp = *puntero1;
    *puntero1 = *puntero2;
    *puntero2 = temp;
}