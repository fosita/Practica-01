#include "pch.h"
#include"Lanzador.hpp"
#include<conio.h>

using namespace System;

int main()


{

    Console::SetWindowSize(80, 40);
    Console::CursorVisible = false;

    //crear el objeto lanzador
    Clanzador* objLanzador = new Clanzador();

    //puntero pelota
    Cpelota* objPelota;

    //dibujar al lanzador 

    Console::SetCursorPosition(39, 25);
    //cambiar el color en la consola 
    Console::ForegroundColor = ConsoleColor::Red;
    cout << "^";
    cout << "#";
    Console::ForegroundColor = ConsoleColor::White;
    

    while (true)

    {
        if (kbhit())
        {
            char tecla = getch(); //captura tecla
            if (toupper(tecla) == 'L')
            {
                //crear instancia de pelota
                objPelota = new Cpelota();
                //agregar al arreglo de pelotas
                objLanzador->agregarPelota(objPelota);
            }
        }
        //validar si hay pelotas en el arreglo entonces las lanzo
        if (objLanzador->getN() > 0)

        {
            objLanzador->lanzarPelotas();
        }
        _sleep(100);//retardo
    }
}
