#pragma once
#include "cMonstruo.h"
class cElite :
    public cMonstruo
{
    int Fuerza, Inteligencia, Proba;
    bool Proba_Golpe;
public:
    cElite(string Nombre_, int Vida_, int Ataque_, int Fuerza_, int Inteligencia_);
    ~cElite();

    void Atacar(cPersona* Persona);


};

