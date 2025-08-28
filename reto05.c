//challenge 5

#include <stdio.h>    // Incluir librerias necesarias para la compilacion efectiva del codigo
#include <stdlib.h>   

int main() {
    int *ptr, i, n1, n2;    // Declarar puntero ptr, i para el "loop" y variables n1 (tamaño inicial), n2 (nuevo tamaño)
    printf("Enter size: ");  // Solicita al usuario el tamaño inicial (n1)
    scanf("%d", &n1);        // recibe el tamaño inicial en n1
    ptr = (int*)malloc(n1 * sizeof(int)); // Asigna la memoria para n1 enteros
    if (ptr == NULL) {       // Verificar si malloc falló
        printf("Error: Fallo en la asignación de memoria\n");// Verificar si malloc falló
        exit(1);             // Verificar si malloc falló
    }
    printf("Addresses of previously allocated memory:\n"); // Mostrar encabezado
    for (i = 0; i < n1; ++i) // loop para mostrar las direcciones de la memoria asignadas inicialmente
        printf("nnp = %p\n", (void*)(ptr + i)); // Imprimir la dirección de memoria de cada elemento
    printf("Enter the new size: "); // Solicitar al usuario el nuevo tamaño (n2)
    scanf("%d", &n2);        // recibe el nuevo tamaño en n2
    int *temp = realloc(ptr, n2 * sizeof(int)); // Asignar temporalmente el resultado de realloc en temp
    if (temp == NULL) {      // Verificar si realloc falló
        printf("Error: Fallo en la reasignación de memoria\n");// Verificar si realloc falló
        free(ptr);           // Liberar la memoria anterior si realloc falla
        exit(1);            
    }
    ptr = temp;              // Actualizar ptr solo si realloc fue exitoso
    printf("Addresses of newly allocated memory:\n"); // Mostrar encabezado
    for (i = 0; i < n2; ++i) // loop para mostrar las direcciones de la memoria reasignada
        printf("nnp = %p\n", (void*)(ptr + i)); // Imprimir la dirección de memoria de cada elemento
    free(ptr);               // Liberar la memoria asignada
    return 0;               
}
