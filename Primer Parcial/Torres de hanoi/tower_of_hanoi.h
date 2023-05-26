/*UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Nombre del archivo: tower_of_hanoi.h
 * Autores:  Matias Suarez,Karla Ansatuña,Alexis Chimba
 * Fecha de creación: 23/05/2023
 * Fecha de modificación: 25/05/2023
 * Descripción: Deber uso de funciones lambda
 */
#ifndef TOWER_OF_HANOI_H
#define TOWER_OF_HANOI_H

#include <functional>

template<typename T>
void Jugada(std::function<void(T, T, int)> moveDisk, T torre1, T torre2, T torre3, int disco);

#endif
