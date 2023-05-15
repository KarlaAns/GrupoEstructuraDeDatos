/*UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Nombre del archivo: Fraccion.cpp
 * Autores:  Matias Suarez, Karla Ansatuña, Alexis Chimba
 * Fecha de creación: 10/05/2023 
 * Fecha de modificación: 14/05/2023  
 * Descripción: Implementacion clase Fraccion
 */
 

#include "Fraccion.h"
#include <iostream>

using namespace std;

template <typename T>
T Fraccion<T>::getNumerador(void)
{
   return numerador;
}

template <typename T>
T Fraccion<T>::setNumerador(T newNumerador)
{
   numerador = newNumerador;
}

template <typename T>
T Fraccion<T>::getDenominador(void)
{
   return denominador;
}

template <typename T>
void Fraccion<T>::setDenominador(T newDenominador)
{
   denominador = newDenominador;
}

template <typename T>
Fraccion<T>::Fraccion(T num, T den)
{
   // TODO : implement
   this->numerador=num;
   this->denominador=den;
}

template <typename T>
Fraccion<T>::Fraccion(){
	this->numerador=0;
	this->denominador=1;
}

template <typename T>
Fraccion<T>::~Fraccion()
{
   // TODO : implement
}

template <typename T>
Fraccion<T> Fraccion<T>::calculo(Fraccion<T> obj1, Fraccion<T> obj2){
	Fraccion obj3;
	obj3.setDenominador(obj1.getDenominador()*obj2.getDenominador());
	obj3.setNumerador((obj1.getNumerador()*obj2.getDenominador())+(obj2.getNumerador()*obj1.getDenominador()));
	return obj3;
}
	
template <typename T>
void Fraccion<T>::imprimir(Fraccion<T> obj){
	cout<<obj.getNumerador()<<"/"<<obj.getDenominador();
}

template <typename T>
T Fraccion<T>::calculo(T obj1, T obj2){
	return (obj1/obj2);
}