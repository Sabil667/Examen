#include <iostream>
int main(){
    //Hacemos una operacion que pueda tener una excepcion, en este caso la division entre 0.
 try{
     int dividendo;
     std::cout<<"Escoja un valor para el dividendo:";
     std::cin>>dividendo;
     int divisor;
     std::cout<<"Escoja un valor para el divisor:";
     std::cin>>divisor;


     //En este ejercicio se podra escoger el valor del dividendo y del divisor, si el divisor es 0, se lanza una excepción.

     if (divisor == 0) {
         throw std::runtime_error("Division por cero no permitida");
     }

     int resultado=dividendo/divisor;
     std::cout << "El resultado de la division es: " << resultado << std::endl;


 }
 catch (const std::exception& e) {
     // Capturamos y manejamos la excepción
     std::cerr << "Error: " << e.what() << std::endl;
 }

}