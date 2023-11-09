#include <iostream>
#include <string>
#include <vector>

//Definicion de una excepcion en este caso personalizada "MateriaYaRegistrada"
class MateriaYaRegistradaException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Materia ya registrada.";
    }

};
class Estudiante {
public:
    std::string nombre;
    std::vector<std::string> materias;

    Estudiante(const std::string& nombre) : nombre(nombre) {}

    // Función para registrar una materia
    void registrarMateria(const std::string& materia) {
        // Verificar si la materia ya está registrada
        for (const std::string& materiaRegistrada : materias) {
            if (materiaRegistrada == materia) {
                // Lanzar la excepción personalizada
                throw MateriaYaRegistradaException();
            }
        }
        // Si no está registrada, agregar la materia
        materias.push_back(materia);
    }
};
int main() {
    Estudiante estudiante("Estudiante1");
    try {
        estudiante.registrarMateria("Matematicas");
        estudiante.registrarMateria("Historia");
        estudiante.registrarMateria("Lengua");
        estudiante.registrarMateria("Matematicas");
        estudiante.registrarMateria("Arabe");
    } catch (const MateriaYaRegistradaException& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    // Mostrar las materias registradas
    std::cout<<"Materias registradas por el estudiante: "<<estudiante.nombre<<":"<<std::endl;
    for (const std::string& materia : estudiante.materias) {
        std::cout << "- " << materia << std::endl;
    }
}
