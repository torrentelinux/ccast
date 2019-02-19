// ________________________________________
// Proyecto13.cpp
// Programa ejemplo que utiliza ccast.h
// para la traducción de C++ en castellano.
// ----------------------------------------

#include <vcl.h>
#include <windows.h>
#include <tchar.h>
#include <iostream.h>
#include <conio.h>
#include <ccast.h>
#pragma hdrstop

sin_devolución _tmain(sin_argumento)
{
	número corto entero código_página = 850;
	puntero_caracteres título = "Proyecto 13";
	puntero_caracteres mensaje = "Traducci¢n al idioma castellano las palabras reservadas de C/C++.";

   // Cambia el juego de caracteres para la entrada/salida estándar
   SetConsoleOutputCP(código_página);
   SetConsoleCP(código_página);
   SetFileApisToOEM();

   cout << título << endl;
   cout << mensaje << endl;

   getch();
}
