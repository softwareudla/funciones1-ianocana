#include <stdio.h>
#include <string.h>
#include "funciones.h"

char nombresProd[10][30];
float precioProd[10];
 
int leerNumeroProductos(int num) {
    do {
        printf("Ingrese la cantidad de productos que desea registrar: \n");
        scanf("%d", &num);
    } while (num <= 0 || num > 10);
    return num;
}
 
void asignacionNombrePrecio(int num) {
    for (int i = 0; i < num; i++) {
        printf("---------------------------------------\n");
        printf("Ingrese el nombre del producto %d: \n", i + 1);
        getchar();
        fgets(nombresProd[i], sizeof(nombresProd[i]), stdin);
        nombresProd[i][strcspn(nombresProd[i], "\n")] = '\0'; 
 
        printf("Ingrese el precio del producto %d: \n", i + 1);
        scanf("%f", &precioProd[i]);
 
        if (precioProd[i] < 0) {
            printf("El valor ingresado no es valido. Intentalo de nuevo.\n");
            i--;
        }
    }
}
 
float Total(int valor) {
    float total = 0;
    for (int i = 0; i < valor; i++) {
        total += precioProd[i];
    }
    return total;
}
 
void maximo(int valor) {
    float nummax;
    char nombre[30];
    for (int i = 0; i < valor; i++) {
        if (i == 0) {
            nummax = precioProd[i];
            strcpy(nombre, nombresProd[i]);
        } else {
            if (precioProd[i] > nummax) {
                nummax = precioProd[i];
                strcpy(nombre, nombresProd[i]);
            }
        }
    }
    printf("El producto mas caro es %s con precio de: %.2f \n", nombre, nummax);
}
 
void minimo(int valor) {
    float nummin;
    char nombre[30];
 
    for (int i = 0; i < valor; i++) {
        if (i == 0) {
            nummin = precioProd[i];
            strcpy(nombre, nombresProd[i]);
        } else {
            if (precioProd[i] < nummin) {
                nummin = precioProd[i];
                strcpy(nombre, nombresProd[i]);
            }
        }
    }
    printf("El producto mas barato es %s con precio de: %.2f \n", nombre, nummin);
}
 
float promedio(float total, int valor) {
    return total / valor;
}
 
int buscar(int valor) {
    char nombre[30];
    int bandera = 0;
 
    printf("Ingrese el nombre del producto a buscar: \n");
    getchar();
    fgets(nombre, sizeof(nombre), stdin);
    nombre[strcspn(nombre, "\n")] = '\0';
 
    for (int i = 0; i < valor; i++) {
        if (strcmp(nombresProd[i], nombre) == 0) {
            printf("El precio del producto buscado %s es de: %.2f \n", nombre, precioProd[i]);
            return 0;
        }
    }
 
    printf("El producto %s no esta en el sistema \n", nombre);
    return 0;
}