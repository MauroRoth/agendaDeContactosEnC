#include <stdio.h>
#include "persistencia.h"

void guardar_contactos_binario(Contacto contactos[], int cantidad) {
    FILE *archivo = fopen("contactos.dat", "wb");
    if (archivo == NULL) return;
    fwrite(&cantidad, sizeof(int), 1, archivo);         // guardo cuántos hay
    fwrite(contactos, sizeof(Contacto), cantidad, archivo); // guardo el array entero
    fclose(archivo);
}

int cargar_contactos_binario(Contacto contactos[]) {
    FILE *archivo = fopen("contactos.dat", "rb");
    if (archivo == NULL) return 0;
    int cantidad;
    fread(&cantidad, sizeof(int), 1, archivo);
    fread(contactos, sizeof(Contacto), cantidad, archivo);
    fclose(archivo);
    return cantidad;
}