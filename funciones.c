#include <stdio.h>
int LeerNumeroProductos (int num);
void AsignacionNombrePrecio (int num, int valor);

int main (int argc, char *argv[]) {
    int valor;
    float total;
    int num;
   
    valor = LeerNumeroProductos(num);
    char nombresProd[valor][30];
    float precioProd[valor];
    total = Total (valor);

    return 0;
}

int LeerNumeroProductos (int num) {
    do {
        printf("Ingrese la cantidad de productos que desea registrar: \n");
        scanf("%d", &num);
    } while(num>0 && num<=10);
    return num;
}
void AsignacionNombrePrecio ( int num, int valor) {
    for (int i = 0; i < num; i++)
    {   
        char nombresProd[valor][30];
        float precioProd[valor];
        printf("Ingrese el nombre del producto %d", i+1);
        scanf("%s", nombresProd[i]);
        printf ("Ingrese el valor del producto %d", i+1);
        scanf ("%f", precioProd[i]);
        
    }
    
}
float Total (int valor) {
    float total;
    float precioProd[valor];
    for( int i = 0; i < valor; i++)
    {
        total= precioProd[i] + total;
    }
    return total;
}  
float Maximo (int valor) {
    float precioProd[valor];
    float nummax;
    if (i == 0) 
    {
       nummax = precioProd[i];
    } 
    else 
    {
       if (precioProd[i] > nummax)
       {
           nummax = precioProd[i];
       }
    }
    return nummax;
}
