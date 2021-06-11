#pragma once
#include "cMonstruo.h"
class cJefe :
    public cMonstruo
{
    int Fuerza;
    int Inteligencia;
    bool Proba_critico;
    int Proba;
public:
    cJefe(string Nombre_, int Vida_, int Ataque_, int Fuerza_, int Inteligencia_);
    ~cJefe();

    void Atacar(cPersona* Persona);


};

