/*UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Nombre del archivo: main.cpp
 * Autores:  Matias Suarez,Karla Ansatuña,Alexis Chimba
 * Fecha de creación: 17/05/2023
 * Fecha de modificación: 18/05/2023
 * Descripción: Deber de suma de matrices 
 */
#include <iostream>
#include <limits>
#include "Matriz.h"
#include "Matriz.cpp"

template<typename T>
T obtenerEntero(T numero) {
    while (true) {
        std::cin >> numero;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Entrada invalida. Por favor, ingrese un numero entero: ";
        } else {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return numero;
        }
    }
}

int main() {
    int filas, columnas;

    // Ingresar la dimensión de las matrices
    std::cout << "Ingrese la cantidad de filas: ";
    filas = obtenerEntero(filas);

    std::cout << "Ingrese la cantidad de columnas: ";
    columnas = obtenerEntero(columnas);

    // Crear la primera matriz y generar valores aleatorios
    Matriz<int> matriz1(filas, columnas);
    matriz1.generarAleatorio();

    // Crear la segunda matriz y generar valores aleatorios
    Matriz<int> matriz2(filas, columnas);
    matriz2.generarAleatorio();

    // Sumar las dos matrices
    Matriz<int> resultadoSuma = matriz1 + matriz2;

    // Imprimir las matrices y el resultado de la suma
    std::cout << "Primera matriz:" << std::endl;
    matriz1.imprimir();

    std::cout << "Segunda matriz:" << std::endl;
    matriz2.imprimir();

    std::cout << "Resultado de la suma:" << std::endl;
    resultadoSuma.imprimir();

    return 0;
}


