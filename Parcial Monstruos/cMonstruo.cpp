#include "cMonstruo.h"
#include"cPersona.h"


int cMonstruo::Cont_Monst = 0;

cMonstruo::cMonstruo(string Nombre_, int Vida_, int Ataque_)
{
	Nombre = Nombre_;
	Vida = Vida_;
	Ataque = Ataque_;
	Estado = true;
	Cont_Monst++;
}

cMonstruo::~cMonstruo()
{
}

bool cMonstruo::ControlarEstado()
{
	return Estado;
}

void cMonstruo::MostarMonstruosCreados()
{
	cout << "\nMonstruos Creados:" << Cont_Monst << endl;
}

void cMonstruo::RecibirDaño(int Daño_)
{
}
