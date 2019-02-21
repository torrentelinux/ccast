// ________________________________________
// Proyecto13.cpp
// Programa ejemplo que utiliza ccast.h
// para la traducción de C++ en castellano.
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
   devolver 0;
}
