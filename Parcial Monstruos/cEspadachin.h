#pragma once
#include "cMonstruo.h"
class cEspadachin :
    public cMonstruo
{
    int Fuerza_;
public:
    cEspadachin(string Nombre_, int Vida_, int Ataque_, int Fuerza_);
    ~cEspadachin();

    void Atacar(cPersona* Persona);

};

