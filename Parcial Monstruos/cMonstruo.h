#pragma once
class cPersona;



class cMonstruo
{
	int Vida;
	int Ataque;
	string Nombre;
	bool Estado;

public:
	int static Cont_Monst;
	cMonstruo(string Nombre_,int Vida_, int Ataque_);
	~cMonstruo();

	virtual void Atacar(cPersona* Persona) = 0;
	bool ControlarEstado();

	friend class cPersona;
protected:
	void RecibirDaño(int Daño_);
};

