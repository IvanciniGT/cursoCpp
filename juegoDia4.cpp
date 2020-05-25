#include <iostream>
#include <random>

/*
 * Estructura para guardar información de un jugador y sus estadísticas.
 */
struct jugador{
    int numeroTotalPartidasJugadas;
    int numeroPartidasGanadasSeguidas;
    int numeroMinimoDeIntentos;
    std::string nombre;
};

/*
 * Función para generar números aleatorios.
 */
int numeroAleatorio(){
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_real_distribution<double> dist(1.0, 11.0);
    return dist(mt);
}

/*
 * Juega una partida para un jugador.
 */
void jugarPartida()
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
            return; //break;
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

}

/*
 * Función principal. Comienza el juego.
 */
int main(){
/*
  std::string respuesta;
    do{
        jugarPartida();
        std::cout << "Quieres jugar otra vez?: (si/no)" << std::endl;
        std::cin >> respuesta;
    }while(respuesta == "si");
    std::cout << "Ok. Hasta la próxima!!!" << std::endl;
    return 0;
    */
    
    // Ejemplos para ver como se utilizan las estructuras.
    jugador ivan;
    ivan.nombre="Ivan";
    ivan.numeroMinimoDeIntentos=1;
    ivan.numeroPartidasGanadasSeguidas=2;
    ivan.numeroTotalPartidasJugadas=17;

    jugador alba;
    alba.nombre="Alba";
    alba.numeroMinimoDeIntentos=1;
    alba.numeroPartidasGanadasSeguidas=6;
    alba.numeroTotalPartidasJugadas=12;

    jugador Luis;
    alba.nombre="Luis";
    alba.numeroMinimoDeIntentos=2;
    alba.numeroPartidasGanadasSeguidas=3;
    alba.numeroTotalPartidasJugadas=87;

    std::cout << ivan.nombre << std::endl;
    std::cout << ivan.numeroMinimoDeIntentos << std::endl;
    std::cout << ivan.numeroPartidasGanadasSeguidas << std::endl;
    std::cout << ivan.numeroTotalPartidasJugadas << std::endl;


}


/*
 * Si la diferencia entre el numero del jugador y el pensado es mayor que 5: frio
 * Si la diferencia entre el numero del jugador y el pensado es menor o igual a 5: templado
 * Si la diferencia entre el numero del jugador y el pensado es menor que 3: caliente
 */




