#ifndef LISTACIRCULARDOBLE_H
#define LISTACIRCULARDOBLE_H

#include "Persona.h"

class ListaCircularDoble {
private:
    struct Nodo {
        Persona* dato;
        Nodo* siguiente;
        Nodo* anterior;

        Nodo(Persona* persona) : dato(persona), siguiente(nullptr), anterior(nullptr) {}
    };

    Nodo* primero;
    Nodo* ultimo;

public:
    ListaCircularDoble();
    ~ListaCircularDoble();

    bool estaVacia();
    void ordenarPorNombre();
    void insertarAlInicio(Persona* persona);
    void insertarAlFinal(Persona* persona);
    void eliminarPersona(Persona* persona);
    void eliminarAlInicio();
    void eliminarAlFinal();
    void mostrarLista();
    Persona* buscarPorCedula(const std::string& cedula);
};

#endif /* LISTACIRCULARDOBLE_H */
