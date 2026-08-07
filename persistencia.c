#include <stdio.h>
#include "persistencia.h"

void guardarContactosBinario(Contacto contactos[], int cantidad) {
    FILE *archivo = fopen("contactos.dat", "wb");
    if (archivo == NULL) return;
    fwrite(&cantidad, sizeof(int), 1, archivo);         // guardo cuántos hay
    fwrite(contactos, sizeof(Contacto), cantidad, archivo); // guardo el array entero
    fclose(archivo);
}

int cargarContactosBinario(Contacto contactos[]) {
    FILE *archivo = fopen("contactos.dat", "rb");
    if (archivo == NULL) return 0;
    int cantidad;
    fread(&cantidad, sizeof(int), 1, archivo);
    fread(contactos, sizeof(Contacto), cantidad, archivo);
    fclose(archivo);
    return cantidad;
}