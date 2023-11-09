#include <iostream>
#include <vector>

//Funcion para calcular el promedio de calificaciones
double calcularPromedio(const std::vector<int>& calificaciones) {


    int suma = 0;
    for (int calificacion : calificaciones) {
        suma += calificacion;
    }

    return static_cast<double>(suma) / calificaciones.size();
}

int main(){
    std::vector<int> calificaciones={50,60,70,80,90,100};
    double promedio=calcularPromedio(calificaciones);
    std::cout<<"El promedio de las calificaciones es: "<<promedio<<std::endl;



}
