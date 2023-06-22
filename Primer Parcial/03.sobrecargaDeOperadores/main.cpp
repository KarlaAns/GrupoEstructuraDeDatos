/*UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Nombre del archivo: main.cpp
 * Autores:  Matias Suarez, Karla Ansatuña ,Alexis Chimba
 * Fecha de creación: 10/05/2023
 * Fecha de modificación: 14/05/2023
 * Descripción: Deber uso de templates
 */
#include <iostream>
#include <limits> 

template <typename T>
class MyFraccion {
public:
    MyFraccion(T numerador, T denominador) : numerador_(numerador), denominador_(denominador) {}

    bool operator!=(const MyFraccion& otra) const {
        return (numerador_ != otra.numerador_ || denominador_ != otra.denominador_);
    }

private:
    T numerador_;
    T denominador_;
};

int main() {
    float numerador1, denominador1;
    float numerador2, denominador2;

    std::cout << "Ingrese el primer numerador: ";
    while (!(std::cin >> numerador1)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Entrada invalida. Ingrese el primer numerador nuevamente: ";
    }

    std::cout << "Ingrese el primer denominador: ";
    while (!(std::cin >> denominador1)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Entrada invalida. Ingrese el primer denominador nuevamente: ";
    }

    std::cout << "Ingrese el segundo numerador: ";
    while (!(std::cin >> numerador2)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Entrada invalida. Ingrese el segundo numerador nuevamente: ";
    }

    std::cout << "Ingrese el segundo denominador: ";
    while (!(std::cin >> denominador2)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Entrada invalida. Ingrese el segundo denominador nuevamente: ";
    }

    MyFraccion<float> fraccion1(numerador1, denominador1);
    MyFraccion<float> fraccion2(numerador2, denominador2);

    if (fraccion1 != fraccion2) {
        std::cout << "Las fracciones son diferentes." << std::endl;
    } else {
        std::cout << "Las fracciones son iguales." << std::endl;
    }

    return 0;
}
