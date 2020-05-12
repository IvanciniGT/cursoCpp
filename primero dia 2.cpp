#include <iostream>

/*
determinarParidad(int numero)
{
    bool esNumeroPar = (numero % 2)==0;
    if (esNumeroPar) {
        std::cout << "PAAAAAR !!!!!";
        std::cout << "El número (" << numero << ") es par";
    } else {
        std::cout << "IMPAAAAR !!!!!!";
        std::cout << "El número (" << numero << ") es impar";
    }
}
*/


int mayor(int numeroA, int numeroB){
    if(numeroA > numeroB)
        return numeroA;
    return numeroB;
}

int mayorDe3(int numeroA, int numeroB, int numeroC){
    return mayor(mayor(numeroA,numeroB),numeroC);
}

int mayorOtraForma(int numeroA, int numeroB){
    if(numeroA > numeroB)
        return numeroA;
    else
        return numeroB;
}

int main()
{
    int numero1, numero2, numero3;
    std::cout << "Dame un número: ";
    std::cin >> numero1;

    std::cout << "Dame otro número: ";
    std::cin >> numero2;

    std::cout << "Dame otro número: ";
    std::cin >> numero3;

    std::cout << "Los números son: " << numero1 << ", "  << numero2 << " y " << numero3 << std::endl;

    std::cout << "Su suma es: " << ( numero1 + numero2 ) << std::endl;
    std::cout << "Su resta es: " << ( numero1 - numero2 ) << std::endl;
    std::cout << "Su producto es: " << ( numero1 * numero2 ) << std::endl;
    std::cout << "Su division entera es: " << ( numero1 / numero2 ) << std::endl;
    std::cout << "Su division decimal es: " << ( numero1 / (double)numero2 ) << std::endl;
    std::cout << "El resto de la division entera es: " << ( numero1 - (numero1/numero2) * numero2 ) << std::endl;
    std::cout << "El resto de la division entera es: " << ( numero1 % numero2 ) << std::endl;

    std::cout << "El mayor de los 2 primero números es: " << mayor(numero1,numero2);
    std::cout << "El mayor de los 3: " << mayorDe3(numero1,numero2,numero3);

//    determinarParidad(numero1);
//    determinarParidad(numero2);
    
    return 0;
}
