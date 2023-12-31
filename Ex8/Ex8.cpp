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

int main(){
    //Lista de estudiantes
    std::vector<Estudiante> estudiantes;
    estudiantes.push_back(Estudiante("Estudiante1", 19, "Ingenieria en Sistemas"));
    estudiantes.push_back(Estudiante("Estudiante2", 18, "Ingenieria en Sistemas"));
    estudiantes.push_back(Estudiante("Estudiante3", 21, "Medicina"));
    estudiantes.push_back(Estudiante("Estudiante4", 22, "Odontologia"));

    //Grado que buscamos
    std::string gradoBuscado = "Ingenieria en Sistemas";

    //Filtrar estudiantes por grado
    std::vector<Estudiante> estudiantesFiltrados = filtrarEstudiantes(estudiantes, gradoBuscado);

    //Mostrar estudiantes filtrados

    std::cout << "Estudiantes en el grado " << gradoBuscado << ":" << std::endl;
    for (const Estudiante& estudiante : estudiantesFiltrados) {
        std::cout << "Nombre: " << estudiante.nombre << ", Edad: " << estudiante.edad << std::endl;
    }


}