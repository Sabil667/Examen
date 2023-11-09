#include <iostream>
#include <vector>

//Funcion para calcular el promedio de calificaciones
double calcularPromedio(const std::vector<int>& calificaciones) {


    int suma = 0;
    for (int calificacion : calificaciones) {
        suma += calificacion;
    }
