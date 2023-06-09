/*UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Nombre del archivo: Proceso.h
 * Autores:  Matias Suarez,Karla Ansatuña,Alexis Chimba
 * Fecha de creación: 10/05/2023 
 * Fecha de modificación: 11/05/2023  
 * Descripción: Implementacion clase Proceso
 */
 
#include "Fraccion.h"

#if !defined(__Class_Diagram_1_Proceso_h)
#define __Class_Diagram_1_Proceso_h

class Proceso
{
public:
   virtual float calculo(float obj1, float obj2) = 0;
   virtual Fraccion calculo(Fraccion obj1, Fraccion obj2) = 0;
protected:
private:
};

#endif