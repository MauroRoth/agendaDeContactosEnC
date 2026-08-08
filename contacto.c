#include <stdio.h>
#include <string.h>
#include "contacto.h"

void agregarContacto(Contacto contactos[], int *cantidad){
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

    Contacto contacto;
    strcpy(contacto.nombre,nombre);
    strcpy(contacto.telefono,telefono);
    strcpy(contacto.email,email);

    contactos[*cantidad] = contacto;
    (*cantidad)++;
}
void listarContactos(Contacto contactos[], int cantidad){
    printf("LISTA DE CONTACTOS \n");
    if (cantidad==0) {
        printf("No hay contactos cargados.\n");
        return;
    }
    printf("%-20s %-15s %-25s\n", "Nombre", "Telefono", "Email");
    for (int i = 0; i < cantidad; i++) {
        //printf("%d)",i+1);
        printf("%-20s %-15s %-25s\n", contactos[i].nombre, contactos[i].telefono, contactos[i].email);
    }
    printf("\nPresione ENTER para continuar...");
    getchar(); 
}

void actualizarContacto(Contacto contactos[], int cantidad, int indice){
    printf("soy actualizarContacto\n");
}
void eliminarContacto(Contacto contactos[], int cantidad, int indice){
    printf("soy eliminarContacto");
}
void buscarContacto(Contacto contactos[], int cantidad, char nombre[]){
    printf("soy buscarContacto");
}

void cargarContactosDePrueba(Contacto contactos[], int *cantidad) {
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