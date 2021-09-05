#pragma once
#include<iostream>

using namespace System;
using namespace std;

class CCuadrado
{

private:

	int x, y, dx, dy;

public :
	CCuadrado(void);
	CCuadrado(int x, int y);
	~CCuadrado();

	//metodos 
	void borrar();
	void mover();
	void dibujar();

};

//implementar clase 

CCuadrado::CCuadrado(void) {

	x = y = 0;
	dx = 1;
	dy = 0;
}
CCuadrado::CCuadrado(int x, int y)
{
	this->x = x;
	this->y = y;
	dx = 1;
	dy = 0;

}

CCuadrado::~CCuadrado(){}

//metodos 

void CCuadrado::borrar()
{
	//ubicar la posicion actual 

	Console::SetCursorPosition(x, y);
	cout << " ";
}
void CCuadrado::mover()
{
	//restriccion (limites) laterales y horizontales 
	if (x == 0 && y == 0) { dx = 1; dy = 0; }
	if (x == 79 && y == 0) { dx = 0; dy = 1; }
	if (x == 79 && y == 39) { dx = -1; dy = 0; }
	if (x == 0 && y == 39) { dx = 0; dy = -1; }
	//Modificar el valor de x y
	x += dx;
	y += dy;
}

void CCuadrado::dibujar()
{
	Console::SetCursorPosition(x, y);//Colocar en la posicion x y 
	//imprimir 
	cout << "O"; 
}