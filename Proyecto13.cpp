// ________________________________________
// Proyecto13.cpp
// Programa ejemplo que utiliza ccast.h
// para la traducci�n de C++ en castellano.
// ----------------------------------------

#include <vcl.h>
#include <windows.h>
#include <tchar.h>
#include <iostream.h>
#include <conio.h>
#include <ccast.h>
#pragma hdrstop

sin_devoluci�n _tmain(sin_argumento)
{
	n�mero corto entero c�digo_p�gina = 850;
	puntero_caracteres t�tulo = "Proyecto 13";
	puntero_caracteres mensaje = "Traducci�n al idioma castellano las palabras reservadas de C/C++.";

   // Cambia el juego de caracteres para la entrada/salida est�ndar
   SetConsoleOutputCP(c�digo_p�gina);
   SetConsoleCP(c�digo_p�gina);
   SetFileApisToOEM();

   cout << t�tulo << endl;
   cout << mensaje << endl;

   getch();
}
