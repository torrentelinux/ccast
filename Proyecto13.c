// ______________________________________
// Proyecto13.c
// Programa ejemplo que utiliza ccast.h
// para la traducci�n de C en castellano.
// --------------------------------------

#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <ccast.h>
#pragma hdrstop

#ifdef _WIN32
#include <tchar.h>
#else
  deftipo caracter _TCHAR;
  #define _tmain main
#endif

entero _tmain(sin_argumento)
{
        n�mero corto entero c�digo_p�gina = 850;
        puntero_caracteres t�tulo = "Proyecto 13";
        puntero_caracteres mensaje = "Traducci�n al idioma castellano las palabras reservadas de C/C++.";

   // Cambia el juego de caracteres para la entrada/salida est�ndar
   SetConsoleOutputCP(c�digo_p�gina);
   SetConsoleCP(c�digo_p�gina);
   SetFileApisToOEM();

   puts(t�tulo);
   puts(mensaje);

   getch();
   devolver 0;
}
