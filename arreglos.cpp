// #include "pch.h"
#include <iostream>   // Librería para entrada y salida estándar
#include <omp.h>      // Librería de OpenMP para paralelismo

#define N 5000        // Tamaño de los arreglos
#define chunk 300     // Tamaño de los pedazos (chunks) para dividir el trabajo
#define mostrar 50     // Cantidad de elementos a imprimir

// Función para imprimir los primeros "mostrar" elementos de un arreglo
void imprimeArreglo(float *d);

int main() {
    std::cout << "Sumando Arreglos en Paralelo!\n";
    float a[N], b[N], c[N]; // Arreglos a, b y c
    int i;

    // Inicialización de los arreglos
    for (i = 0; i < N; i++) {
        a[i] = i * 10;         // Llenar arreglo a con múltiplos de 10
        b[i] = (i + 3) * 3.7;  // Llenar arreglo b con valores calculados
    }

    int pedazos = chunk; // Asignar tamaño de los chunks

    // Bloque paralelo con OpenMP
    #pragma omp parallel for \
    shared(a, b, c, pedazos) private(i) \
    schedule(static, pedazos)
    for (i = 0; i < N; i++) {
        c[i] = a[i] + b[i]; // Suma de los arreglos a y b, guardada en c
    }

    // Imprimir los primeros "mostrar" elementos de cada arreglo
    std::cout << "Imprimiendo los primeros " << mostrar << " valores del arreglo a: " << std::endl;
    imprimeArreglo(a);

    std::cout << "Imprimiendo los primeros " << mostrar << " valores del arreglo b: " << std::endl;
    imprimeArreglo(b);

    std::cout << "Imprimiendo los primeros " << mostrar << " valores del arreglo c: " << std::endl;
    imprimeArreglo(c);

    return 0;
}

// Función para imprimir los primeros "mostrar" elementos de un arreglo
void imprimeArreglo(float *d) {
    for (int x = 0; x < mostrar; x++) {
        std::cout << d[x] << " - "; // Imprimir elemento del arreglo
    }
    std::cout << std::endl; // Salto de línea al final
}

// /usr/local/opt/llvm/bin/clang++ -fopenmp -L$(brew --prefix libomp)/lib -lomp -o arreglosparalelos.out arreglos.cpp
