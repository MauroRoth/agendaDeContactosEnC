#ifndef CONTACTO_H
#define CONTACTO_H
#define MAX_CONTACTOS 100

typedef struct {
    char nombre[50];
    char telefono[20];
    char email[50];
} Contacto;

void agregarContacto(Contacto contactos[], int *cantidad);
void listarContactos(Contacto contactos[], int cantidad);
void actualizarContacto(Contacto contactos[], int cantidad, int indice);
void eliminarContacto(Contacto contactos[], int cantidad, int indice);
void ordenarContactos(Contacto contactos[], int cantidad, int indice);
void buscarContacto(Contacto contactos[], int cantidad, char nombre[]);

#endif