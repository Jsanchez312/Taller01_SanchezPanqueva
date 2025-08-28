//challenge 2

#include <stdio.h>    // Incluir librerias necesarias para la compilacion efectiva del codigo
#include <string.h>   
#include <stdlib.h>   

int main() {
    char *q = NULL;    // Declarar e inicializar q como puntero nulo
    printf("Requesting space for \"Goodbye\"\n"); // Notificar que se solicita espacio para "Goodbye"
    q = (char *)malloc(strlen("Goodbye") + 1);    // Asignar memoria para el string "Goodbye" más el terminador nulo "\0"
    if (!q) {           // Verificar si la asignación de memoria falló
        perror("Failed to allocate space because"); // Verificar si la asignación de memoria falló
        exit(1);        // Verificar si la asignación de memoria falló
    }
    printf("About to copy \"Goodbye\" to q at address %p\n", (void*)q); // Notificar y mostrar la dirección de memoria de q
    strcpy(q, "Goodbye"); // se copia el string "goodbye" a la direccion de q
    printf("String copied\n"); // Confirmar que la cadena fue copiada
    printf("%s\n", q);   // Imprimir el strring en q
    free(q);             // Liberar la memoria asignada para evitar leaks de memoria
    return 0;            
}