#include "rectangulo.h"

Rectangulo::Rectangulo(double laBase,double laAltura){
    base=laBase;
    altura=laAltura;
}

double Rectangulo::perimetro() {
    return 2*base+2*altura;
}

double Rectangulo::area() {
    return base*altura;
}
