/*UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Nombre del archivo: Matriz.h
 * Autores:  Matias Suarez,Karla Ansatuña,Alexis Chimba
 * Fecha de creación: 17/05/2023
 * Fecha de modificación: 18/05/2023
 * Descripción: Deber de suma de matrices 
 */
#ifndef MATRIZ_H
#define MATRIZ_H

#include <vector>

// Plantilla de la clase Matriz
template<typename T>
class Matriz {
private:
    int filas;
    int columnas;
    std::vector<std::vector<T>> elementos;

public:
    // Constructor de la clase Matriz
    Matriz(int filas, int columnas);

    // Función para generar valores aleatorios en el rango del 1 al 10
    void generarAleatorio();

    // Operador de suma para la clase Matriz
    Matriz<T> operator+(const Matriz<T>& otra);

    // Función para imprimir la matriz
    void imprimir();
};

#endif  // MATRIZ_H
