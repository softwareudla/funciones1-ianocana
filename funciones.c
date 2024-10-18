#include <stdio.h>
#include <string.h>
#include "funciones.h"


int main (int argc, char *argv[]) {
    int valor;
    float total, promedio, valorbuscado;
    int num;
   
    valor = LeerNumeroProductos(num);
    AsignacionNombrePrecio (valor);
    total = Total (valor);
  
    
    printf("El valor total de los productos es: %.2f \n", total);
    Maximo (valor);
    Minimo (valor);
   
    promedio = Promedio (total, valor);

    printf ("El valor promedio de los productos es de: %.2f \n", promedio);
    buscar (valor); 
    
    return 0;
}

