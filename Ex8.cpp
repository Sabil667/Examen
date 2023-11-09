#include <iostream>
#include <string>
#include <vector>

class Estudiante {
public:
    std::string nombre;
    int edad;
    std::string grado;

    Estudiante(const std::string& nombre, int edad, const std::string& grado)
            : nombre(nombre), edad(edad), grado(grado) {}
};
//Funcion para filtrar a los estudiantes por grado
std::vector<Estudiante> filtrarEstudiantes(const std::vector<Estudiante>& estudiantes, const std::string& grado) {
    std::vector<Estudiante> estudiantes_filtrados;
    for (const Estudiante& estudiante : estudiantes) {
        if (estudiante.grado == grado) {
            estudiantes_filtrados.push_back(estudiante);
        }
    }
    return estudiantes_filtrados;
}