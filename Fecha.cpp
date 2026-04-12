#include "Fecha.h"

T1 diasxmes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

// creacion funcion  esBisiesto
B1 esBisiesto(T1 y1){
   return (y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0);
}


L1 FechaDias( Fecha f){// Calcular el número total de días desde una fecha base (por ejemplo, 1/1/1) hasta la fecha dada
    //paso a referencia constante para evitar copias innecesarias
    T1 dias = 0;
    // Calcular los días para la fecha f   
    
    // Años pasados
    for (T1 i = 1 ; i < f.y1 ; i++){//
        if(esBisiesto(i)) dias +=366; else { dias +=365; }// Agregar días según si el año es bisiesto o no
        // dias += esBisiesto(i) ? 366 : 365; // Alternativa usando operador ternario
    }
    // Meses pasados en el año actual
    for(T1 j = 0; j <f.m1 - 1; j++){
        dias += diasxmes[j];
        if (j == 1 && esBisiesto(f.y1)) dias +=1;// Agregar un día si es bisiesto y ya se han pasado febrero
    }
    // Días pasados en el mes actual
 

    // Agregar los días del mes actual
    dias += f.d1;// Agregar los días del mes actual

    return dias;
}

// Nueva función de validación
B1 FechaValida( Fecha f) {// Validar año, mes y día
    if (f.y1 < 1 || f.m1 < 1 || f.m1 > 12 || f.d1 < 1) return false;// Validar mes y día
    if(f.m1 == 2 && esBisiesto(f.y1)) diasxmes[1] = 29;
    return f.d1 <= diasxmes[f.m1 - 1];// Validación completa
};
