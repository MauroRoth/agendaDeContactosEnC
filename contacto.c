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
void listarContactos(Contacto contactos[], int indice){
    printf("LISTA DE CONTACTOS \n");
    for (int i = 0; i < indice; i++) {
        printf("%d\n",i+1);
        printf("%s\n", contactos[i].nombre);
        printf("%s\n", contactos[i].telefono);
        printf("%s\n", contactos[i].email);
        printf("---\n");
    }
}

void actualizarContacto(Contacto contactos[], int cantidad, int indice){
    printf("soy actualizarContacto");
}
void eliminarContacto(Contacto contactos[], int cantidad, int indice){
    printf("soy eliminarContacto");
}
void buscarContacto(Contacto contactos[], int cantidad, char nombre[]){
    printf("soy buscarContacto");
}