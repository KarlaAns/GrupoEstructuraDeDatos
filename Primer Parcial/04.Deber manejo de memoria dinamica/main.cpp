/*UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Nombre del archivo: main.cpp
 * Autores:  Matias Suarez, Karla Ansatuña ,Alexis Chimba
 * Fecha de creación: 19/05/2023
 * Fecha de modificación: 21/05/2023
 * Descripción: Deber manejo de memoria dinámica
 */
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

template<typename T>
class Matriz {
private:
    T** matriz;
    T dim;
public:
    Matriz();
    Matriz(T);
    T getDim();
    void setDim(T);
    T** getMatriz();
    void setMatriz(T**);
};

template<typename T>
Matriz<T>::Matriz() {
}

template<typename T>
Matriz<T>::Matriz(T dim) {
    this->dim = dim;
    this->matriz = new T*[dim];
    for (int i = 0; i < dim; i++) {
        matriz[i] = new T[dim];
    }
}

template<typename T>
T Matriz<T>::getDim() {
    return dim;
}

template<typename T>
void Matriz<T>::setDim(T dim) {
    this->dim = dim;
}

template<typename T>
T** Matriz<T>::getMatriz() {
    return matriz;
}

template<typename T>
void Matriz<T>::setMatriz(T** matriz) {
    this->matriz = matriz;
}

template<typename T>
class Operaciones {
private:
    Matriz<T> _matriz;
public:
    Operaciones();
    Operaciones(Matriz<T>);
    void segmentar();
    void encerar();
    T** generar();
    void imprimir(T** matriz);
};

template<typename T>
Operaciones<T>::Operaciones() {
}

template<typename T>
Operaciones<T>::Operaciones(Matriz<T> m) {
    this->_matriz = m;
}

template<typename T>
void Operaciones<T>::segmentar() {
    T** matriz = new T*[_matriz.getDim()];
    for (int j = 0; j < _matriz.getDim(); j++) {
        matriz[j] = new T[_matriz.getDim()];
    }
    _matriz.setMatriz(matriz);
}

template<typename T>
void Operaciones<T>::encerar() {
    T** matriz = _matriz.getMatriz();
    for (int i = 0; i < _matriz.getDim(); i++) {
        for (int j = 0; j < _matriz.getDim(); j++) {
            matriz[i][j] = 0;
        }
    }
}

template<typename T>
void Operaciones<T>::imprimir(T** matriz) {
    cout << "La matriz es:" << endl;
    for (int i = 0; i < _matriz.getDim(); i++) {
        for (int j = 0; j < _matriz.getDim(); j++) {
            cout << setw(4) << matriz[i][j];
        }
        cout << endl;
    }
}

template<typename T>
T** Operaciones<T>::generar() {
    srand(time(NULL));
    T** matriz = new T*[_matriz.getDim()];
    for (int i = 0; i < _matriz.getDim(); i++) {
        matriz[i] = new T[_matriz.getDim()];
        for (int j = 0; j < _matriz.getDim(); j++) {
            matriz[i][j] = rand() % 10;
        }
    }
    return matriz;
}

template<typename T>
T ingresar(const char* mensaje) {
    T valor;
    cout << mensaje << ": ";
    cin >> valor;
    return valor;
}

template<typename T>
void iniciar(T dim) {
    Matriz<T> m(dim);
    Operaciones<T> operaciones(m);

    operaciones.segmentar();
    operaciones.encerar();

    T** matriz = operaciones.generar();
    operaciones.imprimir(matriz);

    // Liberar la memoria asignada con 'new'
    for (int i = 0; i < dim; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;
}

int main() {
    int dim = ingresar<int>("Ingrese la dimension de la matriz");
    iniciar<int>(dim);

    return 0;
}
