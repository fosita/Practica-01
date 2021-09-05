#pragma once
#include"cuadrado.hpp"

class CCaja
{
private:
	CCuadrado** arrCuadrados; //Asociacion con la clase cuadrados
	int n; //representa al numero de cuadrados del arreglo 
public:
	CCaja(void);
	~CCaja();

	//metodos 
	//get

	int getN();
	//METODOS
	void agregarCuadrado(CCuadrado* objCuadrado);
	CCuadrado* obtenerCuadrado(int indice);

};

//implementacion 
CCaja::CCaja(void)
{
	arrCuadrados = nullptr;
	n = 0;
}

CCaja :: ~CCaja(){}

//GET

int CCaja::getN()
{
	return n;
}

void CCaja::agregarCuadrado(CCuadrado* objCuadrado)
{
	CCuadrado** arrTemporal = new CCuadrado * [n + 1];
	for (int i = 0; i < n; i++)
	{
		arrTemporal[i] = arrCuadrados[i];
	}
	arrTemporal[n] = objCuadrado;
	n = n + 1;//aumentamos el tamaño del arreglo 
	//borrar el contenido del arreglo original 
	if (arrCuadrados != nullptr)delete[]arrCuadrados;

	arrCuadrados = arrTemporal;
}

CCuadrado* CCaja:: obtenerCuadrado(int indice)
{
	return arrCuadrados[indice];
}