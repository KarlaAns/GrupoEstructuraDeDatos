#include "Persona.h"
#include "Registro.h"
#include "Fecha.h"

Persona::Persona() {
   // Implementación del constructor por defecto
}

Persona::Persona(std::string cedula, std::string nombre, std::string apellido, Fecha fechaNacimiento) {
   this->cedula = cedula;
   this->nombre = nombre;
   this->apellido = apellido;
   this->fecha = fechaNacimiento;
}

std::string Persona::getCedula() {
   return cedula;
}

void Persona::setCedula(std::string newCedula) {
   cedula = newCedula;
}

std::string Persona::getNombre() {
   return nombre;
}

void Persona::setNombre(std::string newNombre) {
   nombre = newNombre;
}

std::string Persona::getApellido() {
   return apellido;
}

void Persona::setApellido(std::string newApellido) {
   apellido = newApellido;
}

Fecha Persona::getFecha() {
   return fecha;
}

void Persona::setFecha(Fecha newFecha) {
   fecha = newFecha;
}

Persona::~Persona() {
   // Implementación del destructor si es necesario
}
