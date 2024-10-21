#include <stdio.h>
#include <string.h>
#include "funciones.h"
#include "funciones.c"

int main (int argc, char *argv[]) {
    int valor;
    float total, prom, valorbuscado;
    int num;
   
    valor = leerNumeroProductos(num);
    asignacionNombrePrecio (valor);
    total = Total (valor);
  
    
    printf("El valor total de los productos es: %.2f \n", total);
    maximo (valor);
    minimo (valor);
   
    prom = promedio (total, valor);

    printf ("El valor promedio de los productos es de: %.2f \n", prom);
    buscar (valor); 
    
    return 0;
}