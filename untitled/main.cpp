#include <iostream>

using namespace std;

void BubbleSort(int matriz[], int n) {
    int tmp;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (matriz[i] > matriz[j]) {
                tmp = matriz[i];
                matriz[i] = matriz[j];
                matriz[j] = tmp;
            }
        }
    }
}


int main() {
    int numeros[] = {9, 6, 4, 2, 8, 3, 12, 34, 56, 31};
    int n = sizeof(numeros) / sizeof(numeros[0]);
    std::cout << "Arreglo antes de ordenar" << std::endl;

    for (int i: numeros) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    std::cout << "\nArreglo ordenado" << std::endl;
    BubbleSort(numeros, n);
    for (int i: numeros) {
        std::cout << i << " ";
    }

    return 0;
}

/*
 * La complejidad de tiempo del Bubble Sort es O(n^2) en el peor caso. Esto significa que el tiempo de ejecución
 * aumenta cuadráticamente con el tamaño del arreglo. Por lo tanto, para arreglos grandes, Bubble Sort no es eficiente.
 * Sin embargo, es un buen punto de partida para comprender los algoritmos de ordenamiento.
 */
