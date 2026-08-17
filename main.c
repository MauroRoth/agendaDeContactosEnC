#include <stdio.h>
#include <string.h>
#include "contacto.h"
#include "persistencia.h"


int main(){
    Contacto contactos[MAX_CONTACTOS];
    int cantidad = 0;
    int indice = 0;
    char nombre[50];
    char opcion;
    
    //cargarContactosBinario(contactos);

    do {
        limpiar_consola();
        printf("\n\t\t=== AGENDA ===\n");
        printf("\t\t1. Agregar Contacto\n");
        printf("\t\t2. Listar Contactos\n");
        printf("\t\t3. Actualizar Contacto\n");
        printf("\t\t4. Eliminar Contacto\n");
        printf("\t\t5. Buscar Contacto\n");
        printf("\t\tq. Salir\n");
        printf("\t\tOpcion: ");
        scanf(" %c", &opcion);
        int c;
        while ((c = getchar()) != '\n' && c != EOF);

        switch(opcion) {
            case '1': agregar_contacto(contactos, &cantidad); break;
            case '2': listar_contactos(contactos, cantidad); break; 
            case '3': actualizar_contacto(contactos, cantidad, indice); break;
            case '4': eliminar_contacto(contactos, cantidad, indice); break;
            case '5': buscar_contacto(contactos, cantidad, nombre); break;
            case '9': cargar_contactos_de_prueba(contactos, &cantidad); break;   
            case 'q': printf("salida del programa!!!"); break;
        }
    } while(opcion !='q');
    //guardarContactosBinario(contactos, cantidad);
    return 0;
}