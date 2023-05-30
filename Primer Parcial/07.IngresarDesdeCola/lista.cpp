/*UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Nombre del archivo: IngresarCola
 * Autores:  Matias Suarez,Karla Ansatuña,Alexis Chimba
 * Fecha de creación: 29/05/2023
 * Fecha de modificación: 30/05/2023
 * Descripción: Ingreso de datos a la lista desde la cola
 */
#include "lista.h"

Nodo::Nodo(std::string val, Nodo* sig, Nodo* ant) {
    valor = val;
    siguiente = sig;
    anterior = ant;
}

Lista::Lista() {
    primero = nullptr;
    ultimo = nullptr;
}

bool Lista::listaVacia() {
    return (primero == nullptr);
}

void Lista::insertar(std::string val) {
    Nodo* nuevo = new Nodo(val);
    if (listaVacia()) {
        primero = nuevo;
        ultimo = nuevo;
    }
    else {
        nuevo->anterior = ultimo;
        ultimo->siguiente = nuevo;
        ultimo = nuevo;
    }
}

void Lista::mostrarLista() {
    Nodo* tmp = ultimo;
    while (tmp) {
        std::cout << tmp->valor << "-->";
        tmp = tmp->anterior;
    }
    std::cout << "NULL";
}