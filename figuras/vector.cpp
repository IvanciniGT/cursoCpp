#include <cmath>
#include "vector.h"

Vector::Vector(Punto pOrigen, Punto pDestino){
    origen=pOrigen;
    destino=pDestino;
}

double Vector::moduloVector(){
    return origen.distanciaEntrePuntos(destino);
}
double Vector::anguloVector(){
    double PI = 3.1416;
    double base = destino.x - origen.x;
    double altura = destino.y - origen.y;
    return std::atan2(altura,base)*180/PI;
}
