#include <iostream>
#include <string>
#include <vector>

class Estudiante {
public:
    // Propiedades de la clase
    std::string nombre;
    int edad;
    std::string grado;
    std::vector<std::string> materias;

    // Constructor para inicializar las propiedades
    Estudiante(const std::string& nombre, int edad, const std::string& grado)
            : nombre(nombre), edad(edad), grado(grado) {}

    // Función miembro para mostrar la información del estudiante
    void mostrar_info() {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << std::endl;
        std::cout << "Grado: " << grado << std::endl;
    }

    // Función miembro para registrar una materia
    void registrar_materia(const std::string& materia) {
        materias.push_back(materia);
    }


    // Función miembro para mostrar las materias registradas
    void mostrar_materias() {
        std::cout << "Materias registradas:" << std::endl;
        for (const std::string& materia : materias) {
            std::cout << "- " << materia << std::endl;
        }
    }
};

int main() {
    std::string nombre;
    int edad;
    std::string grado;

    // Solicitar al usuario que introduzca los datos del estudiante
    std::cout << "Introduce el nombre del estudiante: ";
    getline(std::cin, nombre);

    std::cout << "Introduce la edad del estudiante: ";
    std::cin >> edad;

    std::cin.ignore(); // Para consumir el salto de línea pendiente

    std::cout << "Introduce el grado del estudiante: ";
    getline(std::cin, grado);

    // Crear un objeto de la clase Estudiante
    Estudiante estudiante(nombre, edad, grado);

    // Mostrar la información del estudiante
    estudiante.mostrar_info();

    // Solicitar al usuario que introduzca una materia
    std::string materia;
    std::cout << "Introduce una materia: ";
    getline(std::cin, materia);

    estudiante.registrar_materia(materia);

    // Son las materias que se registran
    estudiante.registrar_materia("Matematicas");
    estudiante.registrar_materia("Fisica");
    estudiante.registrar_materia("Programacion");

    // Mostrar las materias registradas
    estudiante.mostrar_materias();
    //.

    return 0;
}