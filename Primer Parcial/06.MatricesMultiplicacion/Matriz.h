#ifndef MATRIZ_H
#define MATRIZ_H
#include <iostream>
#include <stdlib.h>
#include<stdio.h>
#define MAX 3

using namespace std;

template <typename T>

void multiplicarMatrices(T**, T**, T**, int, int);

template <typename T>

void imprimirMatriz(T** matriz, int filas, int columnas) {

    for (int i = 0; i < filas; i++) {

        for (int j = 0; j < columnas; j++) {

            printf("%d", *(*(matriz + i) + j));

            printf("%*s", j + 5, "");

        }

        cout << "\n";

    }

}
#endif