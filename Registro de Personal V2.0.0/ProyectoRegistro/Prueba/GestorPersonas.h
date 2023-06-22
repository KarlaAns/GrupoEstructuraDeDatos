#ifndef GESTORPERSONAS_H
#define GESTORPERSONAS_H

#include "ListaCircularDoble.h"
#include "Persona.h"

class GestorPersonas {
private:
    ListaCircularDoble listaPersonas;

public:
    void ingresarPersona();
    Persona* buscarPersona();
    void imprimirPersona();
    void eliminarPersona();
        void ordenamientoShellSort();

};

#endif
