/*UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Nombre del archivo: Fraccion.cpp
 * Autores:  Matias Suarez, Karla Ansatuña, Alexis Chimba
 * Fecha de creación: 10/05/2023 
 * Fecha de modificación: 14/05/2023  
 * Descripción: Implementacion clase Fraccion
 */
 

#include <iostream>

template <typename T>
class Fraccion {
private:
    T numerador;
    T denominador;

public:
    Fraccion(T num, T den);
    Fraccion();
    ~Fraccion();

    T getNumerador();
    void setNumerador(T newNumerador);
    T getDenominador();
    void setDenominador(T newDenominador);

    Fraccion calculo(Fraccion obj1, Fraccion obj2);
    void imprimir(Fraccion obj);
    T calculo(T obj1, T obj2);

    bool operator!=(const Fraccion& otro) const;
};

template <typename T>
Fraccion<T>::Fraccion(T num, T den) {
    numerador = num;
    denominador = den;
}

template <typename T>
Fraccion<T>::Fraccion() {
    numerador = 0;
    denominador = 1;
}

template <typename T>
Fraccion<T>::~Fraccion() {
    // Implementación del destructor si es necesario
}

template <typename T>
T Fraccion<T>::getNumerador() {
    return numerador;
}

template <typename T>
void Fraccion<T>::setNumerador(T newNumerador) {
    numerador = newNumerador;
}

template <typename T>
T Fraccion<T>::getDenominador() {
    return denominador;
}

template <typename T>
void Fraccion<T>::setDenominador(T newDenominador) {
    denominador = newDenominador;
}

template <typename T>
Fraccion<T> Fraccion<T>::calculo(Fraccion<T> obj1, Fraccion<T> obj2) {
    Fraccion<T> obj3;
    obj3.setDenominador(obj1.getDenominador() * obj2.getDenominador());
    obj3.setNumerador((obj1.getNumerador() * obj2.getDenominador()) + (obj2.getNumerador() * obj1.getDenominador()));
    return obj3;
}

template <typename T>
void Fraccion<T>::imprimir(Fraccion<T> obj) {
    std::cout << obj.getNumerador() << "/" << obj.getDenominador();
}

template <typename T>
T Fraccion<T>::calculo(T obj1, T obj2) {
    return (obj1 / obj2);
}

template <typename T>
bool Fraccion<T>::operator!=(const Fraccion& otro) const {
    bool resultado = (numerador != otro.numerador) || (denominador != otro.denominador);
    return resultado;
}


