#include <iostream>
#include <string>

class Profesor{
public:
    std::string nombre;
    int edad;
    std::string materia,
    int añosExperiencia;

    //Constructor para inicializar las propiedades
    Profesor(const std::string& nombre, int edad, const std::string& materia, int añosExperiencia)
    :nombre(nombre), edad(edad), materia(materia), añosExperiencia(añosExperiencia) {}

    //Funcion miembro para mostrar la informacion del profesor
        void mostrar_info(){
        std::cout<<"Nombre: "<<nombre<<std::endl;
        std::cout<<"Edad: "<<edad<<std::endl;
        std::cout<<"Materia: "<<materia<<std::endl;
        std::cout<<"Experiencia: "<<añosExperiencia<<std::endl;

    }


};
