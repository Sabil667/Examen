#include <iostream>
#include <string>

class Profesor{
public:
    std::string nombre;
    int edad;
    std::string materia;
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

int main(){
    std::string nombre;
    int edad;
    std::string materia;
    int añosExperiencia;


    //Solicitar al usuario que introduzca los datos del profesor
    std::cout<<"Introduce el nombre del profesor: ";
    getline(std::cin, nombre);

    std::cout<<"Introduce la edad del profesor: ";
    std::cin>>edad;

    std::cin.ignore(); // Para consumir el salto de línea pendiente

    std::cout << "Ingrese la materia que imparte el profesor: ";
    getline(std::cin, materia);

    std::cout<< "Anios de experiencia del profesor: ";
    std::cin>>añosExperiencia;

    // Crear un objeto de la clase Profesor con los datos ingresados
    Profesor profesor(nombre, edad, materia, añosExperiencia);

    // Mostrar la información del profesor
    profesor.mostrar_info();


}