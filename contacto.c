#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "contacto.h"


void limpiar_consola() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void agregar_contacto(Contacto contactos[], int *cantidad){
    limpiar_consola();
    printf("AGREGAR CONTACTO \n");
    
    char nombre[50];
    printf("Ingrese su Nombre: ");
    scanf("%s", nombre);
    
    char telefono[20];
    printf("Ingrese su Telefono: ");
    scanf("%s", telefono);

    char email[100];
    printf("Ingrese su Email: ");
    scanf("%s", email);
    printf(" %s", "Contacto agregado !!!\n");
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    Contacto contacto;
    strcpy(contacto.nombre,nombre);
    strcpy(contacto.telefono,telefono);
    strcpy(contacto.email,email);

    printf("+-----------------------------------------------------------------+\n");
    printf("%-20s %-15s %-25s\n", "Nombre", "Telefono", "Email");
    printf("+-----------------------------------------------------------------+\n");
    printf("%-20s %-15s %-25s\n", contacto.nombre, contacto.telefono, contacto.email);
    contactos[*cantidad] = contacto;
    (*cantidad)++;

    printf("\nPresione ENTER para continuar...");
    getchar(); 
}

void listar_contactos(Contacto contactos[], int cantidad){
    limpiar_consola();
    printf("LISTA DE CONTACTOS \n");
    if (cantidad==0) {
        printf("No hay contactos cargados.\n");
    } else {
        printf("+-----------------------------------------------------------------+\n");
        printf("%-4s %-20s %-15s %-25s\n", "Nº", "Nombre", "Telefono", "Email");
        printf("+-----------------------------------------------------------------+\n");
        for (int i = 0; i < cantidad; i++) {
            printf("%-4d %-20s %-15s %-25s\n", i+1, contactos[i].nombre, contactos[i].telefono, contactos[i].email);
        }
        printf("+-----------------------------------------------------------------+\n");
    }
    printf("\nPresione ENTER para continuar...");
    getchar(); 
}

void actualizar_contacto(Contacto contactos[], int cantidad, int indice){
    printf("soy actualizarContacto\n");
}
void eliminar_contacto(Contacto contactos[], int cantidad, int indice){
    printf("soy eliminarContacto");
}
void buscar_contacto(Contacto contactos[], int cantidad, char nombre[]){
    printf("soy buscarContacto");
}

void cargar_contactos_de_prueba(Contacto contactos[], int *cantidad) {
    Contacto prueba[10] = {
        {"Ana Garcia",      "3624111111", "ana.garcia@mail.com"},
        {"Bruno Lopez",     "3624222222", "bruno.lopez@mail.com"},
        {"Carla Fernandez", "3624333333", "carla.fernandez@mail.com"},
        {"Diego Martinez",  "3624444444", "diego.martinez@mail.com"},
        {"Elena Rodriguez", "3624555555", "elena.rodriguez@mail.com"},
        {"Fabian Torres",   "3624666666", "fabian.torres@mail.com"},
        {"Gabriela Sosa",   "3624777777", "gabriela.sosa@mail.com"},
        {"Hector Diaz",     "3624888888", "hector.diaz@mail.com"},
        {"Ines Romero",     "3624999999", "ines.romero@mail.com"},
        {"Julian Acosta",   "3624000000", "julian.acosta@mail.com"}
    };

    for (int i = 0; i < 10; i++) {
        contactos[*cantidad] = prueba[i];
        (*cantidad)++;
    }
    printf("\n10 contactos de prueba cargados.\n");
}