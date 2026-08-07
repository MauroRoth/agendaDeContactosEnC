#ifndef PERSISTENCIA_H
#define PERSISTENCIA_H

#include "contacto.h"

void guardarContactosBinario(Contacto contactos[], int cantidad);
int cargarContactosBinarios(Contacto contactos[]);

#endif