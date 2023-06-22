#ifndef PERSONA_H
#define PERSONA_H

#include <string>
#include "Fecha.h"

class Registro;
class NodoDoble;
class ListaCircularDoble;

class Persona {
public:
   Persona();
   Persona(std::string cedula, std::string nombre, std::string apellido, Fecha fechaNacimiento);

   std::string getCedula();
   void setCedula(std::string newCedula);
   std::string getNombre();
   void setNombre(std::string newNombre);
   std::string getApellido();
   void setApellido(std::string newApellido);
   Fecha getFecha();
   void setFecha(Fecha newFecha);
   ~Persona();

protected:
private:
   std::string cedula;
   std::string nombre;
   std::string apellido;
   Fecha fecha;

   Registro** registro;
   NodoDoble** nodoDoble;
   ListaCircularDoble** listaCircularDoble;
};

#endif
