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
