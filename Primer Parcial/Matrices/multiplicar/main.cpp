#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Matriz.h"
#include "Matriz.cpp"
#define MAX 3
#define RANDMAX 5

using namespace std;

int main(int argc, char** argv) {
    int** matriz1 = nullptr;
    int** matriz2 = nullptr;
    int** matrizResultado = nullptr;
    matriz1 = (int**)malloc(MAX * sizeof(int*));
    matriz2 = (int**)malloc(MAX * sizeof(int*));
    matrizResultado = (int**)malloc(MAX * sizeof(int*));

    for (int j = 0; j < MAX; j++) {
        *(matriz1 + j) = (int*)malloc(MAX * sizeof(int*));
        *(matriz2 + j) = (int*)malloc(MAX * sizeof(int*));
        *(matrizResultado + j) = (int*)malloc(MAX * sizeof(int*));

    }

    srand(time(NULL));

    for (int i = 0; i < MAX; i++) {

        for (int j = 0; j < MAX; j++) {
            *(*(matriz1 + i) + j) = (int)((rand() % RANDMAX));
            *(*(matriz2 + i) + j) = (int)((rand() % RANDMAX));
            *(*(matrizResultado + i) + j) = 0;

        }

    }

    cout << "\nLa matriz 1 es:\n";
    imprimirMatriz(matriz1, MAX, MAX);
    cout << "\n";
    cout << "\nLa matriz 2 es:\n";
    imprimirMatriz(matriz2, MAX, MAX);
    multiplicarMatrices(matriz1, matriz2, matrizResultado, MAX - 1, MAX - 1);
    cout << "Multiplicacion de Matrices es: \n";
    imprimirMatriz(matrizResultado, MAX, MAX);
    return 0;

}