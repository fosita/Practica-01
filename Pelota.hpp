#pragma once
#include<iostream>

using namespace std;
using namespace System;

class Cpelota
{
private:

	int x, y, dx, dy;
	char forma;

public:

	Cpelota(void);
	Cpelota(int x,int y);
	~Cpelota();

	//metodos

	void borrar();
	void mover();
	void dibujar();
};
//implementacion 
Cpelota::Cpelota(void)
{
	x = 39;
	y = 25;

	dx = dy = 1;
	forma = 79;
}

Cpelota::~Cpelota(){}
void Cpelota::borrar()
{
	Console::SetCursorPosition(x, y);

	cout << " ";
	cout << " ";

}
void Cpelota::mover()
{
	if (x > 78 || x < 2) { dx *= -1; }
	if (y > 38 || y < 2 ) {dy *= -1; }
	x = x + dx;
	y = y + dy;
}

void Cpelota::dibujar()
{
	Console::SetCursorPosition(x, y);
	cout << char(forma);
}