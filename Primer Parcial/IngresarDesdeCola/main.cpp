/*UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Nombre del archivo: IngresarCola
 * Autores:  Matias Suarez,Karla Ansatuña,Alexis Chimba
 * Fecha de creación: 29/05/2023
 * Fecha de modificación: 30/05/2023
 * Descripción: Ingreso de datos a la lista desde la cola
 */
#include <iostream>
#include <string>
#include "lista.h"

int main() {
    Lista lst;
    int dato = 0;
    int a, b, c, d, e, f, g, h;
    std::string i, j, k, l, m, n, o, p;
    std::cout << "Ingresa datos aleatorios o solo integers o solo strings (8 datos): " << std::endl;
    std::cout << "1.- Integers" << std::endl;
    std::cout << "2.- Strings" << std::endl;
    std::cin >> dato;
    switch (dato) {
    case 1:
        std::cout << "Ingrese los datos integer: " << std::endl;
        std::cin >> a;
        std::cin >> b;
        std::cin >> c;
        std::cin >> d;
        std::cin >> e;
        std::cin >> f;
        std::cin >> g;
        std::cin >> h;
        lst.insertar(std::to_string(a));
        lst.insertar(std::to_string(b));
        lst.insertar(std::to_string(c));
        lst.insertar(std::to_string(d));
        lst.insertar(std::to_string(e));
        lst.insertar(std::to_string(f));
        lst.insertar(std::to_string(g));
        lst.insertar(std::to_string(h));
        lst.mostrarLista();
        break;
    case 2:
        std::cout << "Ingrese los datos string: " << std::endl;
        std::cin >> i;
        std::cin >> j;
        std::cin >> k;
        std::cin >> l;
        std::cin >> m;
        std::cin >> n;
        std::cin >> o;
        std::cin >> p;
        lst.insertar(i);
        lst.insertar(j);
        lst.insertar(k);
        lst.insertar(l);
        lst.insertar(m);
        lst.insertar(n);
        lst.insertar(o);
        lst.insertar(p);
        lst.mostrarLista();
        break;
    default:
        std::cout << "Sin opciones registradas" << std::endl;
    }
    return 0;
}