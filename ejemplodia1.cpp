#include <iostream>

int main()
{
    /*
    int entero=33;
    long entero_largo=333333333333333333;
    double decimal=445453534653465.5;
    float decimal_simple=3.5;
    bool llueve=true;
    char caracter='a';

    int numero1=3;   // numero1 es una variable
    numero1=7;
    int numero2=5;

    int resultado=numero1+numero2;

    std::cout << (resultado<=16);
*/
    std::cout << "Dame un número: ";
    int numero1;
    std::cin >> numero1;

    std::cout << "Dame otro número: ";
    int numero2;
    std::cin >> numero2;

    int suma=numero1+numero2;
    std::cout << "Su suma vale: ";
    std::cout << suma;

    return 0;
}
// Operadores aritmeticos: +, -, *, /
// (  ) -> Agrupar ordenes priorizando
// Operador igual: Operador comparativo  a==b a!=b > < >= <=
// Operador asignación =
