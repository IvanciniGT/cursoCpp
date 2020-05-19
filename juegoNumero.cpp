#include <iostream>
#include <random>

int numeroAleatorio(){
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_real_distribution<double> dist(1.0, 11.0);
    return dist(mt);
}

int main()
{
    int numeroPensado=numeroAleatorio();
    int vidas=3;
    int numeroJugador;
    std::cout << "He pensado un número. A ver si lo adivinas. Tienes 3 intentos"<< std::endl;
    do{
        std::cout << "Dame un número: ";
        std::cin >> numeroJugador;
        if(numeroJugador==numeroPensado){
            //Acierto
            std::cout << "Que grande eres. Acertaste!!!"<< std::endl;
        }else{
            // No acierto
            std::cout << "Upps. Ese no era"<< std::endl;
        }

    }while(--vidas>0 && numeroJugador!=numeroPensado);

    if(vidas==0)
        std::cout << "El número que había pensado era: "<< numeroPensado << std::endl;

    return 0;
}
