/*UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Nombre del archivo: Fraccion.h
 * Autores:  Matias Suarez, Karla Ansatuña ,Alexis Chimba
 * Fecha de creación: 10/05/2023 
 * Fecha de modificación: 14/05/2023  
 * Descripción: Implementacion clase Fraccion
 */
 

#if !defined(__Class_Diagram_1_Fraccion_h)
#define __Class_Diagram_1_Fraccion_h

//#pragma once
//class Proceso;

template <typename T>
class Fraccion
{
public:
   T getNumerador(void);
   T setNumerador(T newNumerador);
   T getDenominador(void);
   void setDenominador(T newDenominador);
   T calculo(T obj1, T obj2);
   Fraccion<T> calculo(Fraccion<T> obj1, Fraccion<T> obj2);
   void imprimir(Fraccion obj);
   Fraccion(T num, T den);
   Fraccion();
   ~Fraccion();

protected:
private:
   T numerador;
   T denominador;


};

#endif