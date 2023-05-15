/*UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Nombre del archivo: main.cpp
 * Autores:  Matias Suarez, Karla Ansatuña ,Alexis Chimba
 * Fecha de creación: 10/05/2023
 * Fecha de modificación: 14/05/2023
 * Descripción: Deber uso de templates
 */


#include <iostream>
#include "Fraccion.cpp"
#include "Operacion.cpp"
#include "Multiplicacion.cpp"



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

	cout<<"Fraccion 1: "<<endl;
	fraccion1.imprimir(fraccion1);
	cout<<" "<<endl;
	cout<<"Fraccion 2: "<<endl;
	fraccion2.imprimir(fraccion2);
	cout<<" "<<endl;
	Fraccion<float> producto = fraccion1.calculo(fraccion1,fraccion2);
	cout<<"Producto: "<<endl;
	producto.imprimir(producto);
	return 0;
}
