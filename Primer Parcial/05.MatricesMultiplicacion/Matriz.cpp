#include "Matriz.h"
#define MAX 3

template <typename T>
void multiplicarMatrices(T** matriz1, T** matriz2, T** matrizResultado, int filas, int columnas) {

    if ((filas >= 0) && (columnas >= 0)) {
        T suma = 0;
        for (int i = 0; i < MAX; i++) {
            suma += *(*(matriz1 + filas) + i) * *(*(matriz2 + i) + columnas);
        }

        *(*(matrizResultado + filas) + columnas) = suma;
        multiplicarMatrices(matriz1, matriz2, matrizResultado, filas - 1, columnas);
        multiplicarMatrices(matriz1, matriz2, matrizResultado, filas, columnas - 1);

    }

}