#ifndef CONTACTO_H
#define CONTACTO_H
#define MAX_CONTACTOS 100
#define ANCHO_NOMBRE 20
#define ANCHO_TEL    15
#define ANCHO_EMAIL  25

typedef struct {
    char nombre[50];
    char telefono[20];
    char email[50];
} Contacto;
void limpiar_consola();
void agregar_contacto(Contacto contactos[], int *cantidad);
void listar_contactos(Contacto contactos[], int cantidad);
void actualizar_contacto(Contacto contactos[], int cantidad, int indice);
void eliminar_contacto(Contacto contactos[], int cantidad, int indice);
void ordenar_contactos(Contacto contactos[], int cantidad, int indice);
void buscar_contacto(Contacto contactos[], int cantidad, char nombre[]);
void cargar_contactos_de_prueba(Contacto contactos[], int *cantidad);

#endif