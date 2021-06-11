#pragma once
#include "cMonstruo.h"
class cMago :
    public cMonstruo
{
    int inteligencia;
public:
    cMago(string Nombre_, int Vida_, int Ataque_, int Inteligencia_);
    ~cMago();
    
    void Atacar(cPersona* Persona);

};

