#pragma once
#include<iostream>
#include<string>
#include"cMonstruo.h"
using namespace std;

class cPersona
{
protected:
	int Fuerza;
	int Inteligencia;
	int Vida_Actual;
	int Vida_Maxima;
	int Armadura;
	int PoderdeAtaque;
	bool Estado;


public:
	cPersona(int Fuerza_, int Inteligencia_, int Vida_Maxima_, int Armadura_, int PoderAtaque_);
	~cPersona();

	void Atacar(cMonstruo* Monstruo);
	bool ControlarEstado();

	friend class cMonstruo;
	friend class cMago;
	friend class cElite;
	friend class cJefe;
	friend class cEspadachin;




protected:
	void RecibirDaño(int Daño_, cMonstruo* Monstruo);

};

