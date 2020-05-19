#include <iostream>
#include <cmath>

double f(double x){
    return x*x - 6*x  +2;
}

double calcularRaiz(double a, double b, double tolerancia, int &numeroDivisiones, int maximoDivisionesPermitido){

    double fa, fb, m;
    fa=f(a);
    fb=f(b);

    if (fa*fb<0) {
        // Aqui hay una raiz
        m = (a + b) / 2;
        if(b-a>tolerancia && numeroDivisiones < maximoDivisionesPermitido) {
            //Sigo dividiendo
            double raiz=calcularRaiz(a, m, tolerancia, numeroDivisiones, maximoDivisionesPermitido);
            if(raiz==NAN)
                return calcularRaiz(m, b, tolerancia, numeroDivisiones, maximoDivisionesPermitido);
            else
                return raiz;
        }else{
            // No sigo dividiendo
            return m;
        }
    }else if (fa*fb==0){
        // He dado con la raiz (a o b , uno de ellos es la raiz)
        if(fa==0) {
            return a;// a es la raiz
        }else{
            return b; // b es la raiz
        }
    }else{ // fa*fb>0
        // Aqui no puedo asegurar que hay una raiz
        // abandonar
        return NAN;
    }

}

int main()
{
    int numeroInicialDivisiones=0;
    double a, b ,tolerancia;
    int maximoDivisionesPermitido;
    // a
    std::cout << "Dame el límite inferior de cálculo: ";
    std::cin  >> a;
    // b
    std::cout << "Dame el límite superior de cálculo: ";
    std::cin  >> b;
    // tolerancia
    std::cout << "Dame la tolerancia: ";
    std::cin  >> tolerancia;
    // Nº max divisiones
    std::cout << "Dame el máximo de divisiones posibles: ";
    std::cin  >> maximoDivisionesPermitido;

    double resultado=calcularRaiz(a,b,tolerancia,numeroInicialDivisiones, maximoDivisionesPermitido);
    if(resultado==NAN)
        std::cout <<"No hemos podido determinar si la función no tiene raices en el intervalo especificado. ";
    else
        std::cout << "Raiz encontrada. Su valor es : " << resultado;
    return 0;
}
