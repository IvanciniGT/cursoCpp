#include <iostream>
#include "Jugador.h"
/*
 * Estructura para guardar información de un jugador y sus estadísticas.
 */

jugador recuperaYRegistra(jugador listadoJugadores[10], std::string nombre){
    // Mirar si el jugador ya existe:
    for( int i=0; i<10; i++){
        if( listadoJugadores[i].nombre.empty() ){
            // Ya no hay más jugadores dados de alta
            // Deducción: Mi jugador no está en la lista. -> Lo creo
            listadoJugadores[i].nombre=nombre;
            listadoJugadores[i].numeroTotalPartidasJugadas=0;
            listadoJugadores[i].numeroPartidasGanadasSeguidas=0;
            listadoJugadores[i].numeroMinimoDeIntentos=0;  // 0 significa que no ha jugado aun
        }
        if( listadoJugadores[i].nombre == nombre ){
            //Lo he encontrado, lo devuelvo
            return listadoJugadores[i];
        }
    }
    // No devolvería nada // TODO: devolver algo cuando he agotado los jugadores
    // Esta linea va en iniciarJUEGO:    jugador jugadorActual=recuperaYRegistra(listadoJugadores,nombre);
}


void guardarDatosJugador(jugador listadoJugadores[10], jugador jugadorAGuardar){
    for( int i=0; i<10; i++){
        if( listadoJugadores[i].nombre == jugadorAGuardar.nombre){
            listadoJugadores[i].numeroTotalPartidasJugadas=jugadorAGuardar.numeroTotalPartidasJugadas;
            listadoJugadores[i].numeroPartidasGanadasSeguidas=jugadorAGuardar.numeroPartidasGanadasSeguidas;
            listadoJugadores[i].numeroMinimoDeIntentos=jugadorAGuardar.numeroMinimoDeIntentos;
            break;
        }
    }
}




/*
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

 */