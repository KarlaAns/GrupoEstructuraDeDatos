/*UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Nombre del archivo: tower_of_hanoi.cpp
 * Autores:  Matias Suarez,Karla Ansatuña,Alexis Chimba
 * Fecha de creación: 23/05/2023
 * Fecha de modificación: 25/05/2023
 * Descripción: Deber uso de funciones lambda
 */
#include "tower_of_hanoi.h"

template<typename T>
void Jugada(std::function<void(T, T, int)> moveDisk, T torre1, T torre2, T torre3, int disco) {
    if (disco == 1) {
        moveDisk(torre1, torre3, disco);
    } else {
        Jugada(moveDisk, torre1, torre3, torre2, disco - 1);
        moveDisk(torre1, torre3, disco);
        Jugada(moveDisk, torre2, torre1, torre3, disco - 1);
    }
}

template void Jugada<int>(std::function<void(int, int, int)>, int, int, int, int);
template void Jugada<char>(std::function<void(char, char, int)>, char, char, char, int);
template void Jugada<std::string>(std::function<void(std::string, std::string, int)>, std::string, std::string, std::string, int);

