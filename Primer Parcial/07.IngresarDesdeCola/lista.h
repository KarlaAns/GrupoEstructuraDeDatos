/*UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Nombre del archivo: IngresarCola
 * Autores:  Matias Suarez,Karla Ansatuña,Alexis Chimba
 * Fecha de creación: 29/05/2023
 * Fecha de modificación: 30/05/2023
 * Descripción: Ingreso de datos a la lista desde la cola
 */
#ifndef LISTA_H
#define LISTA_H

#include <iostream>
#include <string>

class Nodo {
private:
    std::string valor;
    Nodo* siguiente;
    Nodo* anterior;
public:
    Nodo(std::string val, Nodo* sig = nullptr, Nodo* ant = nullptr);

    friend class Lista;
};

class Lista {
private:
    Nodo* primero;
    Nodo* ultimo;
public:
    Lista();

    bool listaVacia();

    void insertar(std::string val);

    void mostrarLista();
};

#endif // LISTA_H