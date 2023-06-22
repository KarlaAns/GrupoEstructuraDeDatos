/*UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Nombre del archivo: Fraccion.h
 * Autores:  Matias Suarez,Karla Ansatuña,Alexis Chimba
 * Fecha de creación: 10/05/2023 
 * Fecha de modificación: 11/05/2023  
 * Descripción: Implementacion clase Fraccion
 */
 
#pragma once
#if !defined(__Class_Diagram_1_Fraccion_h)
#define __Class_Diagram_1_Fraccion_h

//#pragma once
//class Proceso;

class Fraccion
{
public:
   float getNumerador(void);
   void setNumerador(float newNumerador);
   float getDenominador(void);
   void setDenominador(float newDenominador);
   float calculo(float obj1, float obj2);
   Fraccion calculo(Fraccion obj1, Fraccion obj2);
   void imprimir(Fraccion obj);
   Fraccion(float num, float den);
   Fraccion();
   ~Fraccion();

protected:
private:
   float numerador;
   float denominador;


};

#endif