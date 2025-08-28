//challenge 1

#include <stdio.h>              // incluir las librerias necesarias para que el codigo compile de forma correcta
#include <string.h>   
int main() { 
    char *p = NULL;    // Declara e inicializa el puntero p como nulo
    char *q = NULL;    // Declara e inicializa el puntero q como nulo                   
    p = malloc(40 * sizeof(char)); // se le asigna 40 bytes de memoria a p para una cadena de caracteres tipo char
    q = malloc(10 * sizeof(char)); // se le asigna 10 bytes de memoria a q 
    printf("Address of p = %p\n", (void*)p); // Imprime la direccion de memoria de p
    strcpy(p, "Hello, I'm the best in Operating Systems!!!"); // se copia el string "hello, im the best in operating systems" a p
    printf("%s\n", p);                   // Se imprime el string ubicado en p
    printf("About to copy \"Goodbye\" to q\n"); // notifica que se va a copiar algo en q
    strcpy(q, "Goodbye");                // se copia el string "goodbyes" a q
    printf("String copied\n");            // se confirma la copia del string en q
    printf("%s\n", q);                   // Se imprime el string ubicado en q
    free(p);                             // libera la memoria ubicada en p
    free(q);                             // libera la memoria ubicada en q
    return 0;                            
}