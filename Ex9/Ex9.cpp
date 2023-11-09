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
