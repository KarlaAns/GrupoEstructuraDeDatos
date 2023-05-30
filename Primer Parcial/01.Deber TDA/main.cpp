/*UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Nombre del archivo: main.cpp
 * Autores:  Matias Suarez,Karla Ansatuña,Alexis Chimba
 * Fecha de creación: 10/05/2023
 * Fecha de modificación: 11/05/2023
 * Descripción: Deber uso de TDA
 */


#include <iostream>
#include "Fraccion.cpp"
#include "Operacion.cpp"
#include "Multiplicacion.cpp"
#include "Proceso.h"


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

    Fraccion fraccion1(numerador1, denominador1);
    Fraccion fraccion2(numerador2, denominador2);

	std::cout<<"Fraccion 1: "<<std::endl;
	fraccion1.imprimir(fraccion1);
	std::cout<<" "<<endl;
	std::cout<<"Fraccion 2: "<<std::endl;
	fraccion2.imprimir(fraccion2);
	std::cout<<" "<<endl;
	Fraccion producto = fraccion1.calculo(fraccion1,fraccion2);
	std::cout<<"Producto: "<<std::endl;
	producto.imprimir(producto);
	return 0;
}
