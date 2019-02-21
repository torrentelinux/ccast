// ______________________________________
// Proyecto13.c
// Programa ejemplo que utiliza ccast.h
// para la traducción de C en castellano.
// --------------------------------------
// Utilizar compilador Embarcadero C++ Builder para Windows.
//

#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <ccast.h>
#pragma hdrstop

sin_devolución main(sin_argumento)
{
	número corto entero código_página = 850;
	puntero_caracteres título = "Proyecto 13";
	puntero_caracteres mensaje = "Traducci¢n al idioma castellano las palabras reservadas de C/C++.";

   // Cambia el juego de caracteres para la entrada/salida estándar
   SetConsoleOutputCP(código_página);
   SetConsoleCP(código_página);
   SetFileApisToOEM();

   puts(título);
   puts(mensaje);

   getch();
}
