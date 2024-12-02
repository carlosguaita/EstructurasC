#include <stdio.h>
#include <string.h>
#include "funciones.h"

void leerFactura(struct Factura *factura){
    printf("Ingrese el nombre del cliente: ");
    fgets(factura->nombre,20,stdin);
    printf("Ingrese el numero de cedula: ");
    scanf("%d",&factura->cedula);
    for (int i = 0; i < 3; i++)
    {
        printf("Ingrese el nombre del producto:");
        fflush(stdin);
        fgets(factura->producto[i].nombre,50,stdin);
        printf("Ingrese el precio: ");
        scanf("%lf",&factura->producto[i].precio);
        printf("Ingrese la cantidad: ");
        scanf("%d",&factura->producto[i].cantidad);
    }
    
}

void imprimirFactura(struct Factura *factura){
    double total=0;
    printf("Los datos de la factura son:\n");
    printf("Nombre: %s\n",factura->nombre);
    printf("Cedula: %d\n",factura->cedula);
    printf("Nombre\t\tPrecio\t\tCantidad\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%s\t\t%.2lf\t\t%d\n",factura->producto[i].nombre,
                                    factura->producto[i].precio,
                                    factura->producto[i].cantidad);
        total+=factura->producto[i].precio * factura->producto[i].cantidad;       
    }
    factura->total=total;
    printf("Total: %.2lf\n",factura->total);
}