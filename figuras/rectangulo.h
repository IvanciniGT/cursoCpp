
#ifndef FIGURAS_RECTANGULO_H
#define FIGURAS_RECTANGULO_H
class Rectangulo{
public:

    double base;
    double altura;

    Rectangulo(double laBase=0, double laAltura=0);

    double area();
    double perimetro();

};
#endif //FIGURAS_RECTANGULO_H
