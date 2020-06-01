#include <iostream>
#include <cmath>
#include "punto.h"

double distanciaEntrePuntos(Punto a, Punto b){
    double base=b.x-a.x;
    double altura=b.y-a.y;
    double distancia=std::sqrt(base*base+altura*altura);
    return distancia;
}

double moduloVector(Vector v){
    return distanciaEntrePuntos(v.origen,v.destino);
}
double anguloVector(Vector v){
    double PI = 3.1416;
    double base = v.destino.x - v.origen.x;
    double altura = v.destino.y - v.origen.y;
    return std::atan2(altura,base)*180/PI;
}

double distanciaAlOrigen(Punto a){
    Punto ORIGEN={0,0};
    return distanciaEntrePuntos(a,ORIGEN);
}
int cuadrante(Punto a){
    if(a.y>0){
        if(a.x>0) return 1;
        return 2;
    }
    if(a.x>0) return 4;
    return 3;
}
int main() {

    Punto A,B;
    A.x=1;
    A.y=1;

    B.x=-1;
    B.y=3;

    std::cout << "Tengo el punto A: ("<< A.x << "," <<A.y<< ")" << std::endl;
    std::cout << "   Su distancia al origen es: "<< distanciaAlOrigen(A) << std::endl;
    std::cout << "   Esta en el cuadrante: "<< cuadrante(A) << std::endl;
    std::cout << "Tengo el punto B: ("<< B.x << "," <<B.y<< ")" << std::endl;
    std::cout << "   Su distancia al origen es: "<< distanciaAlOrigen(B) << std::endl;
    std::cout << "   Esta en el cuadrante: "<< cuadrante(B) << std::endl;

    std::cout << "La distancia entre ambos es de : "<< distanciaEntrePuntos(A,B) << std::endl;

    Vector v={A,B};
    //Vector v;
    //v.origen=A;
    //v.destino=B;
    std::cout << "El modulo del vector es : "<< distanciaEntrePuntos(v.origen,v.destino) << std::endl;
    std::cout << "El modulo del vector es : "<< moduloVector(v) << std::endl;
    std::cout << "El angulo del vector es : "<< anguloVector(v) << std::endl;

    return 0;
}
