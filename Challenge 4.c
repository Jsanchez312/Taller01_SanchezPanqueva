//challenge 4

#include <stdio.h>    // Incluir librerias necesarias para la compilacion efectiva del codigo
#include <stdlib.h>   

int main() {
    int n, i, *ptr, sum = 0;    // Declarar variables: n, i, ptr y sum. n para el número de elementos, i para el "loop", ptr para el puntero, sum para sumar y esta inicializado a 0
    printf("Enter number of elements: "); // Solicitar al usuario el número de elementos a tratar
    scanf("%d", &n);             // recibe el número de elementos en n
    ptr = (int*)calloc(n, sizeof(int)); // Asignar e inicializar memoria para n enteros que el usuario nos da
    if (ptr == NULL) {           // Verificar si la asignación de memoria falló
        printf("Error! memory not allocated.\n"); // Verificar si la asignación de memoria falló
        exit(1);                 // Verificar si la asignación de memoria falló
    }
    printf("Enter elements:\n");  // Solicitar al usuario que ingrese los elementos
    for (i = 0; i < n; ++i) {    // "loop" para leer cada elemento ingresado
        scanf("%d", ptr + i);    // Leer el entero en la posición actual del loop
        sum += *(ptr + i);       // Sumar el valor almacenado en la posición actual
    }
    printf("Sum = %d\n", sum);   // Imprimir la suma total de numeros
    free(ptr);                   // Liberar la memoria asignada
    return 0;                    
}