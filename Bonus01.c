//Bonus 1

#include <stdio.h>    // Incluir librerias necesarias para la compilacion efectiva del codigo
#include <string.h>  
#include <stdlib.h>   

char* function(char* p) {    // Función que toma un puntero a cadena y retorna una nueva cadena
    char* q = malloc(strlen(p) + 1); // Asignar memoria dinámica para q, incluyendo el terminador nulo "\0"
    if (q == NULL) {                 // Verificar si la asignación de memoria falló
        printf("Error: Fallo en la asignación de memoria\n");// Verificar si la asignación de memoria falló
        exit(1);                     
    }
    strcpy(q, p);                    // Copiar la cadena p a q
    printf("From q: the string is %s\n", q); // Imprimir la cadena desde q
    return q;                        // Retornar el puntero a la memoria asignada dinámicamente
}

int main() {
    char *a = NULL;          // Declara e inicializa el puntero a como nulo
    char *b = NULL;          // Declara e inicializa el puntero b como nulo
    a = function("Hi, It's fun to learn"); // Asignar el valor retornado por function a a
    b = function("systems engineer");     // Asignar el valor retornado por function a b
    printf("From main: %s %s\n", a, b);   // Imprimir las cadenas a y b
    free(a);                  // Libera la memoria dinamica asignada para a
    free(b);                  // Libera la memoria dinamica asignada para b
    return 0;                 
}
