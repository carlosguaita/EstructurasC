#include <stdio.h>
#include <string.h>
#include "funciones.h"

int main (int argc, char *argv[]) {

    struct Factura facturas[5];
    leerFactura(&facturas[0]);
    imprimirFactura(&facturas[0]);  

    return 0;
}