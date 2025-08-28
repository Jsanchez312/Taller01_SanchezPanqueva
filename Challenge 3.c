//challenge 3

#include <stdio.h>    // Incluir librerias necesarias para la compilacion efectiva del codigo
#include <stdlib.h>   

int main() {
    int *ptr;         // Declarar un puntero "ptr" a un valor tipo entero
    ptr = malloc(15 * sizeof(*ptr)); // Asignar la memoria para 15 enteros, usando sizeof()
    if (ptr == NULL) {               // Verificar si la asignación de memoria falló
        printf("Error: Fallo en la asignación de memoria\n"); // Verificar si la asignación de memoria falló
        return 1;                    // Verificar si la asignación de memoria falló
    }
    *(ptr + 5) = 480;                // Asignar el valor "480" al sexto entero (valor numero 5, ya que comienza en 0)
    printf("Valor del 6to entero es %d\n", *(ptr + 5)); // Imprimir el valor asignado
    free(ptr);                       // Liberar la memoria asignada para evitar leaks de memoria
    return 0;       
}