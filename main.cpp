#include <iostream>
#include <cmath>
#include "Fecha.h"

using namespace std;

T1 main(){
    Fecha f1 , f2;
    cout<< "Introduce fecha 1 (dia mes año): "<<endl;
    cin >> f1.d1 >> f1.m1 >> f1.y1;
    
    if (!FechaValida(f1)) {
        cout << "Fecha 1 inválida." << endl;
        return 1;
    }

    cout << "Introduce fecha 2 (dia mes año): "<< endl;
    cin >> f2.d1 >> f2.m1 >> f2.y1;

    if (!FechaValida(f2)) {
        cout << "Fecha 2 inválida." << endl;
        return 1;
    }

    /* code */
    L1 dias1 = FechaDias(f1);
    L1 dias2 = FechaDias(f2);

    
    cout << "La diferencia es: " << abs(dias1 - dias2) << " dias." << endl;

    return 0;
}
