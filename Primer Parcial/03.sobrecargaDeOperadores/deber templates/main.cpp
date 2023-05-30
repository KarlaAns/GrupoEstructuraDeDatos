/*UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Nombre del archivo: main.cpp
 * Autores:  Matias Suarez, Karla Ansatuña ,Alexis Chimba
 * Fecha de creación: 10/05/2023
 * Fecha de modificación: 14/05/2023
 * Descripción: Deber uso de templates
 */


#include <iostream>
#include "Fraccion.cpp"




using namespace std;

int main(){
	float numerador1, denominador1;
    float numerador2, denominador2;

    cout << "Ingrese el primer numerador: ";
    cin >> numerador1;
    cout << "Ingrese el primer denominador: ";
    cin >> denominador1;
    cout << "Ingrese el segundo numerador: ";
    cin >> numerador2;
    cout << "Ingrese el segundo denominador: ";
    cin >> denominador2;

    Fraccion<float> fraccion1(numerador1, denominador1);
    Fraccion<float> fraccion2(numerador2, denominador2);

    if (fraccion1 != fraccion2) {
        std::cout << "Las fracciones son diferentes." << std::endl;
    } else {
        std::cout << "Las fracciones son iguales." << std::endl;
    }

    return 0;
}

