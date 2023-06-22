#include "ListaCircularDoble.h"
#include <iostream>

ListaCircularDoble::ListaCircularDoble() {
    primero = nullptr;
    ultimo = nullptr;
}

ListaCircularDoble::~ListaCircularDoble() {
    // Eliminar todos los nodos de la lista
    while (primero != nullptr) {
        Nodo* temp = primero;
        primero = primero->siguiente;
        delete temp;
    }
}

bool ListaCircularDoble::estaVacia() {
    return primero == nullptr;
}

void ListaCircularDoble::insertarAlInicio(Persona* persona) {
    Nodo* nuevoNodo = new Nodo(persona);

    if (estaVacia()) {
        primero = nuevoNodo;
        ultimo = nuevoNodo;
        nuevoNodo->siguiente = nuevoNodo;
        nuevoNodo->anterior = nuevoNodo;
    } else {
        nuevoNodo->siguiente = primero;
        nuevoNodo->anterior = ultimo;
        primero->anterior = nuevoNodo;
        ultimo->siguiente = nuevoNodo;
        primero = nuevoNodo;
    }
}

void ListaCircularDoble::insertarAlFinal(Persona* persona) {
    Nodo* nuevoNodo = new Nodo(persona);

    if (estaVacia()) {
        primero = nuevoNodo;
        ultimo = nuevoNodo;
        nuevoNodo->siguiente = nuevoNodo;
        nuevoNodo->anterior = nuevoNodo;
    } else {
        nuevoNodo->siguiente = primero;
        nuevoNodo->anterior = ultimo;
        primero->anterior = nuevoNodo;
        ultimo->siguiente = nuevoNodo;
        ultimo = nuevoNodo;
    }
}


void ListaCircularDoble::eliminarAlInicio() {
    if (!estaVacia()) {
        if (primero == ultimo) {
            delete primero;
            primero = nullptr;
            ultimo = nullptr;
        } else {
            Nodo* temp = primero;
            primero = primero->siguiente;
            primero->anterior = ultimo;
            ultimo->siguiente = primero;
            delete temp;
        }
    }
}

void ListaCircularDoble::eliminarAlFinal() {
    if (!estaVacia()) {
        if (primero == ultimo) {
            delete primero;
            primero = nullptr;
            ultimo = nullptr;
        } else {
            Nodo* temp = ultimo;
            ultimo = ultimo->anterior;
            ultimo->siguiente = primero;
            primero->anterior = ultimo;
            delete temp;
        }
    }
}

void ListaCircularDoble::mostrarLista() {
    if (!estaVacia()) {
        Nodo* temp = primero;
        do {
            std::cout << temp->dato << " ";
            temp = temp->siguiente;
        } while (temp != primero);
        std::cout << std::endl;
    }
}

Persona* ListaCircularDoble::buscarPorCedula(const std::string& cedula) {
    if (primero == nullptr) {
        return nullptr; // La lista está vacía
    }

    Nodo* temp = primero;
    do {
        if (temp->dato->getCedula() == cedula) {
            return temp->dato; // Se encontró la persona con la cédula deseada
        }
        temp = temp->siguiente;
    } while (temp != primero);

    return nullptr; // No se encontró ninguna persona con la cédula deseada
}





void ListaCircularDoble::eliminarPersona(Persona* persona) {
    if (!estaVacia()) {
        Nodo* actual = primero;
        Nodo* anterior = nullptr;
        bool encontrado = false;

        do {
            if (actual->dato == persona) {
                encontrado = true;
                break;
            }

            anterior = actual;
            actual = actual->siguiente;
        } while (actual != primero);

        if (encontrado) {
            if (actual == primero) {
                eliminarAlInicio();
            } else if (actual == ultimo) {
                eliminarAlFinal();
            } else {
                anterior->siguiente = actual->siguiente;
                actual->siguiente->anterior = anterior;
                delete actual->dato;  // Eliminar la persona asociada al nodo
                delete actual;        // Eliminar el nodo
            }
        }
    }
}
//crea un metodo de ordenamiento shell sort para ordenar por nombre en la lista doble circular
void ListaCircularDoble::ordenarPorNombre() {
    if (!estaVacia()) {
        int distancia = 1;
        int n = 0;
        Nodo* temp = primero;
        do {
            n++;
            temp = temp->siguiente;
        } while (temp != primero);

        while (distancia <= n / 2) {
            Nodo* actual = primero;
            Nodo* siguiente = primero->siguiente;
            for (int i = 0; i < n - distancia; i++) {
                if (actual->dato->getNombre() > siguiente->dato->getNombre()) {
                    Persona* temp = actual->dato;
                    actual->dato = siguiente->dato;
                    siguiente->dato = temp;
                }
                actual = actual->siguiente;
                siguiente = siguiente->siguiente;
            }
            distancia *= 2;
        }
    }
}
