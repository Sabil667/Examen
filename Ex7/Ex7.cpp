#include <iostream>
#include <string>

class RegistroAsistencia {
    public
    //Estas son las propiedades de la clase
    std::string fecha;
    std::string estado;

    //Para poder inicializar las propiedades de la clase
    RegistroAsistencia(const std::string& fecha, const std::string& estado)
    : fecha(fecha), estado(estado) {}


};