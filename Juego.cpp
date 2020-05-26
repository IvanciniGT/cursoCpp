#include <iostream>
#include "JuegoHelpers.h"
#include "Jugador.h"

/*
 * Juega una partida para un jugador.
 */
int jugarPartida()
{
    int numeroPensado=numeroAleatorio();
    int vidas=3;
    int numeroJugador;
    int diferencia;
    std::cout << "He pensado un número. A ver si lo adivinas. Tienes 3 intentos"<< std::endl;
    do{
        std::cout << "Dame un número: ";
        std::cin >> numeroJugador;
        if(numeroJugador==numeroPensado){
            //Acierto
            std::cout << "Que grande eres. Acertaste!!!"<< std::endl;
            return 4-vidas; //break;
        }else{
            // No acierto
            diferencia=std::abs(numeroJugador-numeroPensado);
            if(diferencia>5)
                std::cout << "Upps. Frio, frio"<< std::endl;
            else if(diferencia<3)
                std::cout << "Upps. Caliente, caliente"<< std::endl;
            else
                std::cout << "Upps. Templado"<< std::endl;
        }

    }while(--vidas>0);// && numeroJugador!=numeroPensado);

    //if(vidas==0)
    std::cout << "El número que había pensado era: "<< numeroPensado << std::endl;
    return 0;
}

/*
 * Función principal. Comienza el juego.
 */
void iniciarJuego(){

    jugador listadoJugadores[10];
    std::string respuesta;

    do{
        std::string nombre;
        std::cout << "Me dices tu nombre?: " << std::endl;
        std::cin >> nombre;
        jugador jugadorActual=recuperaYRegistra(listadoJugadores,nombre);

        // ///////////////////////////////////////////////////////////////////////////////////////
        // Contra el ejecutar al menos un juego y luego pregunta si quiere jugar mas a un jugador
        do{
            int intentos=jugarPartida();
            jugadorActual.numeroTotalPartidasJugadas++;
            if(intentos!=0 && jugadorActual.numeroMinimoDeIntentos>intentos) // Todo: !!!!
                jugadorActual.numeroMinimoDeIntentos==intentos;
            std::cout << "Llevas jugadas " << jugadorActual.numeroTotalPartidasJugadas<< " partidas. ";
            std::cout << "Quieres jugar otra?: (si/no)" << std::endl;
            std::cin >> respuesta;
        }while(respuesta == "si");
        guardarDatosJugador(listadoJugadores,jugadorActual);

        std::cout << "Ok. Hasta la próxima!!!" << std::endl;
        // ////////////////////////////////////////////////////////////////////////////////////////

        std::cout << "Hay algun jugador que quiera jugar?: (si/no)" << std::endl;
        std::cin >> respuesta;
    }while(respuesta == "si");


}
