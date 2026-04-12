#ifndef __FECHA_H__
#define __FECHA_H__


#include "types.h"

struct Fecha{
    T1 d1;     //dias
    T1 m1;     //meses
    T1 y1;     //años
};

// Declaración de funciones (prototipos)
bool esBisiesto(T1 y1);

L1 FechaDias(Fecha f);
B1 FechaValida(Fecha f);  // Nuevo prototipo


#endif // FECHA_H