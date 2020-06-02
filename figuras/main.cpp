#include <iostream>
#include "punto.h"
#include "vector.h"
#include "cuadrado.h"
#include "rectangulo.h"

int main() {

    Punto A=Punto(1,1);
    Punto B=Punto(-1,3);

    std::cout << "Tengo el punto A: ("<< A.x << "," <<A.y<< ")" << std::endl;
    std::cout << "   Su distancia al origen es: "<< A.distanciaAlOrigen() << std::endl;
    std::cout << "   Esta en el cuadrante: "<< A.cuadrante() << std::endl;
    std::cout << "Tengo el punto B: ("<< B.x << "," <<B.y<< ")" << std::endl;
    std::cout << "   Su distancia al origen es: "<< B.distanciaAlOrigen() << std::endl;
    std::cout << "   Esta en el cuadrante: "<< B.cuadrante() << std::endl;

    std::cout << "La distancia entre ambos es de : "<< A.distanciaEntrePuntos(B) << std::endl;

    Vector v = Vector(A, B);

    //Vector v;
    //v.origen=A;
    //v.destino=B;
    std::cout << "El modulo del vector es : "<< v.origen.distanciaEntrePuntos(v.destino) << std::endl;
    std::cout << "El modulo del vector es : "<< v.moduloVector() << std::endl;
    std::cout << "El angulo del vector es : "<< v.anguloVector() << std::endl;

    Rectangulo r1=Rectangulo(10,5);
    std::cout << "El area del rectangulo vale : "<< r1.area() << std::endl;
    std::cout << "El perimetro del rectangulo vale : "<< r1.perimetro() << std::endl;

    Cuadrado c2=Cuadrado(10);
    std::cout << "La base de cuadrado vale : "<< c2.base << std::endl;
    std::cout << "La altura de cuadrado vale : "<< c2.altura << std::endl;
    std::cout << "El lado del cuadrado vale : "<< c2.lado << std::endl;
    std::cout << "El area del cuadrado vale : "<< c2.area() << std::endl;
    std::cout << "El perimetro del cuadrado vale : "<< c2.perimetro() << std::endl;


    return 0;
}
