

#ifndef FIGURAS_PUNTO_H
#define FIGURAS_PUNTO_H

class Punto{
    public:
        double x;
        double y;

    Punto(double coordenadaX, double coordenadaY); // Constructor
    Punto();

    double distanciaEntrePuntos( Punto b );

    double distanciaAlOrigen();

    int cuadrante();
};


#endif //FIGURAS_PUNTO_H
