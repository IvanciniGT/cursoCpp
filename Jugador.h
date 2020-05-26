//
// Created by Ivan Osuna Ayuste on 26/05/2020.
//
#include <iostream>

#ifndef UNTITLED_JUGADOR_H
#define UNTITLED_JUGADOR_H

struct jugador{
    int numeroTotalPartidasJugadas;
    int numeroPartidasGanadasSeguidas;
    int numeroMinimoDeIntentos;
    std::string nombre;
};

jugador recuperaYRegistra(jugador listadoJugadores[10], std::string nombre);
void guardarDatosJugador(jugador listadoJugadores[10], jugador jugadorAGuardar);

#endif //UNTITLED_JUGADOR_H
