/*UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Nombre del archivo: Fraccion.cpp
 * Autores:  Matias Suarez, Karla Ansatuña, Alexis Chimba 
 * Fecha de creación: 10/05/2023 
 * Fecha de modificación: 14/05/2023 
 * Descripción: Implementacion clase Operacion
 */
 
#include "Operacion.h"

template <typename T>
T Operacion<T>::calculo(T obj1, T obj2){
	return (obj1+obj2);
}
