#include "Fecha.h"

//using namespace std;

// creacion funcion  esBisiesto

B1 esBisiesto(Y1 y1){
   return (y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0);
}

L1 FechaDias(Fecha f){
    T1 dias = 0;
    // Calcular los días para la fecha f   
    T1 diasxmes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    // Años pasados
    for (T1 i =0 ; i < f.y1 ; i++){//
        if(esBisiesto(i)) dias +=366; else dias +=365;
    }
    // Meses pasados en el año actual
    for(T1 j = 0; j <f.m1 - 1; j++){
        dias += diasxmes[j];
    }
    // Días pasados en el mes actual
    if (f.m1 > 2 && esBisiesto(f.y1)) dias++;

    // Agregar los días del mes actual
    dias += f.d1;

    return dias;
}

