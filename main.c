#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "contacto.h"
#include "persistencia.h"


void limpiar_consola() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int main(){
    limpiar_consola();
    Contacto contactos[MAX_CONTACTOS];
    int cantidad = 0;
    int indice = 0;
    char nombre[50];
    char opcion;
    
    //cargarContactosBinario(contactos);

    do {
        printf("\n\t\t=== AGENDA ===\n");
        printf("\t\t1. Agregar Contacto\n");
        printf("\t\t2. Listar Contactos\n");
        printf("\t\t3. Actualizar Contacto\n");
        printf("\t\t4. Eliminar Contacto\n");
        printf("\t\t5. Buscar Contacto\n");
        printf("\t\t0. Salir\n");
        printf("\t\tOpcion: ");
        scanf(" %c", &opcion);
        int c;
        while ((c = getchar()) != '\n' && c != EOF);

        switch(opcion) {
            case '1': agregarContacto(contactos, &cantidad); break;
            case '2': listarContactos(contactos, cantidad); break; 
            case '3': actualizarContacto(contactos, cantidad, indice); break;
            case '4': eliminarContacto(contactos, cantidad, indice); break;
            case '5': buscarContacto(contactos, cantidad, nombre); break;
            case '9': cargarContactosDePrueba(contactos, &cantidad); break;   
            case 'q': printf("salida del programa!!!"); break;
        }
        limpiar_consola();
    } while(opcion !='q');
    //guardarContactosBinario(contactos, cantidad);
    return 0;
}