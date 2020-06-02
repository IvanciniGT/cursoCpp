//
// Created by Ivan Osuna Ayuste on 01/06/2020.
//

#ifndef FIGURAS_VECTOR_H
#define FIGURAS_VECTOR_H
#include "punto.h"

class Vector{
public:
    Punto origen;
    Punto destino;

    Vector(Punto pOrigen, Punto pDestino);

    double moduloVector();

    double anguloVector();

};

#endif //FIGURAS_VECTOR_H
