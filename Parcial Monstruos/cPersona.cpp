#include "cPersona.h"

cPersona::cPersona(int Fuerza_, int Inteligencia_, int Vida_Maxima_, int Armadura_, int PoderAtaque_)
{
	Fuerza = Fuerza_;
	Inteligencia = Inteligencia_;
	Vida_Maxima = Vida_Maxima_;
	Vida_Actual = Vida_Maxima;
	Armadura = Armadura_;
	PoderdeAtaque = PoderAtaque_;
}

cPersona::~cPersona()
{
}

void cPersona::Atacar(cMonstruo* Monstruo)
{
}

bool cPersona::ControlarEstado()
{
	return false;
}

void cPersona::RecibirDaño(int Daño_, cMonstruo* Monstruo)
{
}
