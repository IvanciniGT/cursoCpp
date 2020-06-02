
#include <cmath>
#include "punto.h"

Punto::Punto(double coordenadaX, double coordenadaY) {
    x=coordenadaX;
    y=coordenadaY;
}

Punto::Punto() {
    x=0;
    y=0;
}

double Punto::distanciaAlOrigen(){
    Punto ORIGEN=Punto(0,0);
    return distanciaEntrePuntos(ORIGEN);
}

double Punto::distanciaEntrePuntos( Punto b ){
    double base=b.x-x;
    double altura=b.y-y;
    double distancia=std::sqrt(base*base+altura*altura);
    return distancia;
}

int Punto::cuadrante(){
    if(y>0){
        if(x>0) return 1;
        return 2;
    }
    if(x>0) return 4;
    return 3;
}