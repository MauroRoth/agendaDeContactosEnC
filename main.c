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
        printf("\n\t\t=== AGENDA ===\n");
        printf("\t\t1. Agregar Contacto\n");
        printf("\t\t2. Listar Contactos\n");
        printf("\t\t3. Actualizar Contacto\n");
        printf("\t\t4. Eliminar Contacto\n");
        printf("\t\t5. Buscar Contacto\n");
        printf("\t\t0. Salir\n");
        printf("\t\tOpcion: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1: agregarContacto(contactos, &cantidad); break;
            case 2: listarContactos(contactos, cantidad); break;
            case 3: actualizarContacto(contactos, cantidad, indice); break;
            case 4: eliminarContacto(contactos, cantidad, indice); break;
            case 5: buscarContacto(contactos, cantidad, nombre); break;
            case 9: cargarContactosDePrueba(contactos, &cantidad); break;   
            case 0: printf("salida del programa!!!"); break;
        }

    } while(opcion !=0);
    //guardarContactosBinario(contactos, cantidad);
    return 0;
}