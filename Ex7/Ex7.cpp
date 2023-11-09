#include <iostream>
#include <string>

class RegistroAsistencia {
public:
    //Estas son las propiedades de la clase
    std::string fecha;
    std::string estado;

    //Para poder inicializar las propiedades de la clase
    RegistroAsistencia(const std::string& fecha, const std::string& estado)
    : fecha(fecha), estado(estado) {}

    //Funcion miembro para mostrar la informacion del estudiante
    void mostrar_asistencia() {
        std::cout << "Fecha de la clase: " << fecha << std::endl;
        std::cout << "Estado de asistencia: " << estado << std::endl;
    }

};

int main(){

    std::string fecha;
    std::string estado;

    //Solicitar al usuario que introduzca los datos del estudiante
    std::cout << "Introduce la fecha de la clase: ";
    getline(std::cin, fecha);
    std::cout<< "Introduce el estado de asistencia: ";
    getline(std::cin, estado);

    //Crear un objeto de la clase RegistroAsistencia
    RegistroAsistencia registro_asistencia(fecha, estado);

    //Mostrar la informacion del estudiante
      registro_asistencia.mostrar_asistencia();



}