/*UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Nombre del archivo: main.cpp
 * Autores:  Matias Suarez,Karla Ansatuña,Alexis Chimba
 * Fecha de creación: 23/05/2023
 * Fecha de modificación: 25/05/2023
 * Descripción: Deber uso de funciones lambda
 */
#include "tower_of_hanoi.h"
#include <iostream>

void MoverDisco(int source, int destination, int disco) {
    std::cout << "Mover disco " << disco << " de la torre " << source << " a la torre " << destination << std::endl;
}

int main() {
    int Torre1 = 1, Torre2 = 2, Torre3 = 3, Disco = 0;
    std::cout << "¿Con cuántos discos quieres jugar? ";
    std::cin >> Disco;

    std::function<void(int, int, int)> moveDisk = [](int source, int destination, int disco) {
        MoverDisco(source, destination, disco);
    };

    Jugada(moveDisk, Torre1, Torre2, Torre3, Disco);

    return 0;
}


