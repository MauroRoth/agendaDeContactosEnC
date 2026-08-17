#ifndef PERSISTENCIA_H
#define PERSISTENCIA_H

#include "contacto.h"

void guardar_contactos_binario(Contacto contactos[], int cantidad);
int cargar_contactos_binarios(Contacto contactos[]);

#endif