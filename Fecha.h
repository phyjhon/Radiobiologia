#ifndef __FECHA_H__
#define __FECHA_H__


#include "types.h"

struct Fecha
{
    D1 d1;     //dias
    M1 m1;     //meses
    Y1 y1;     //años
};

// Declaración de funciones (prototipos)
bool esBisiesto(Y1 y1);

L1 FechaDias(Fecha f);

#endif // FECHA_H