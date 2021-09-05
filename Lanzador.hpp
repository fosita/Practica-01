#pragma once
#include "Pelota.hpp"

class Clanzador {

private:

	Cpelota** arrpelotas;

	int n;
public :
	Clanzador(void);
	~Clanzador();

	//Metodos
	int getN();
	void agregarPelota(Cpelota* objPelota);
	void lanzarPelotas();
};

//implementar 
Clanzador::Clanzador(void)
{
	arrpelotas = nullptr;
	n = 0;

}
Clanzador::~Clanzador(){}

//get
int Clanzador::getN()
{
	return n;//retorna la cantidad de pelotas que tiene el arreglo
}

void Clanzador::agregarPelota(Cpelota* objPelota)
{
	Cpelota** arrtemporal = new Cpelota * [n + 1];
	for (int i = 0; i < n; i++)
	{
		arrtemporal[i] = arrpelotas[i];

	}
	arrtemporal[n] = objPelota;
	n = n + 1;
	if (arrpelotas != nullptr)delete[]arrpelotas;
	arrpelotas = arrtemporal;
}

void Clanzador::lanzarPelotas()
{
	//para cada una de los objetos pelota
	for (int i = 0; i < n; i++)
	{
		arrpelotas[i]->borrar();
		arrpelotas[i]->mover();
		arrpelotas[i]->dibujar();
	}
}