#include "pch.h"
#include"Caja.hpp"
#include<conio.h>
using namespace System;

int main()
{
    //propiedades de la consola = tamaño de la consola (limites)
    
    Console::SetWindowSize(80, 40);
    
    //cursor
    
    Console::CursorVisible = false;

    //crear el objeto CAJA
    
    CCaja* obCaja = new CCaja();
    
    //declarar puntero 

    CCuadrado* objCuadrado;
   
    //limpiar consola 
    
    Console::Clear();

    while (true)
    {
        //validar para agregar los cuadrados 
        if (obCaja->getN() > 0)
        {
            //acceder a cada objeto cuadrado para su animacion 
            for (int i = 0; i < obCaja->getN(); i++)
            {
                objCuadrado=obCaja->obtenerCuadrado(i);
                objCuadrado->borrar();
                objCuadrado->mover();
                objCuadrado->dibujar();
            }
        
        
      }

        //Agregar un nuevo cuadrado 
        if (kbhit())//saber si se pulsó algo por consola(una tecla)
        {
            char tecla = getch();//capturar tecla pulsada 
            if (toupper(tecla) == 'A')
            {
                //crear una nueva instacia en la clase CCuadrado
                objCuadrado = new CCuadrado(0, 0);
                //agregar el objeto creado al arreglo de cuadrados
                obCaja->agregarCuadrado(objCuadrado);
            }
        }
        _sleep(50);//retardo 
    }
    return 0;
}
