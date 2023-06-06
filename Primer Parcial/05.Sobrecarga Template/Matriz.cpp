/*UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Nombre del archivo: Matriz.cpp
 * Autores:  Matias Suarez,Karla Ansatuña,Alexis Chimba
 * Fecha de creación: 17/05/2023
 * Fecha de modificación: 18/05/2023
 * Descripción: Deber de suma de matrices 
 */
#include <cstdlib>
#include <ctime>
#include "Matriz.h"
#include <iostream>

// Constructor de la clase Matriz
template<typename T>
Matriz<T>::Matriz(int filas, int columnas) : filas(filas), columnas(columnas) {
    elementos.resize(filas);
    for (int i = 0; i < filas; ++i) {
        elementos[i].resize(columnas);
    }
}

// Función para generar valores aleatorios en el rango del 1 al 10
template<typename T>
void Matriz<T>::generarAleatorio() {
    std::srand(std::time(nullptr));
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            elementos[i][j] = (std::rand() % 10) + 1;
        }
    }
}

// Operador de suma para la clase Matriz
template<typename T>
Matriz<T> Matriz<T>::operator+(const Matriz<T>& otra) {
    Matriz<T> resultado(filas, columnas);

    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            resultado.elementos[i][j] = elementos[i][j] + otra.elementos[i][j];
        }
    }

    return resultado;
}

// Función para imprimir la matriz
template<typename T>
void Matriz<T>::imprimir() {
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            std::cout << elementos[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
