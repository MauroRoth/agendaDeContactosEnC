#include <stdio.h>
#include <string.h>
#include "contacto.h"
#include "persistencia.h"

int main(){
    Contacto contactos[MAX_CONTACTOS];
    int cantidad = 0;
    int indice = 0;
    char nombre[50];
    int opcion;

    do {
        printf("\n=== AGENDA ===\n");
        printf("1. Agregar Contacto\n");
        printf("2. Listar Contactos\n");
        printf("3. Actualizar Contacto\n");
        printf("4. Eliminar Contacto\n");
        printf("5. Buscar Contacto\n");
        printf("6. Salir\n");
        printf("Opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1: agregarContacto(contactos, &cantidad); break;
            case 2: listarContactos(contactos, cantidad); break;
            case 3: actualizarContacto(contactos, cantidad, indice); break;
            case 4: eliminarContacto(contactos, cantidad, indice); break;
            case 5: buscarContacto(contactos, cantidad, nombre); break;
        }

    } while(opcion != 5);
    guardarContactosBinario(contactos, cantidad);
    return 0;
}