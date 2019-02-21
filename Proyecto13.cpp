// ________________________________________
// Proyecto13.cpp
// Programa ejemplo que utiliza ccast.h
// para la traducci�n de C++ en castellano.
// ----------------------------------------
// Utilizar compilador Embarcadero C++ Builder para Windows.
//

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <vcl.h>
#include <windows.h>
#include <iostream>
#include <conio.h>
#include <ccast.h>
#pragma hdrstop

using namespace std;

entero _tmain(sin_argumento)
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
   devolver 0;
}
