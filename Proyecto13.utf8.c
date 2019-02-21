// ___________________________________________________
// Proyecto13.utf8.c
// Programa ejemplo que utiliza ccast.h o ccast.utf8.h
// para la traducción de C en castellano.
// En Linux: /base/incluir/ccast.utf8.h
// En Windows: \base\incluir\ccast.h
// ---------------------------------------------------
// En CentOS 7 Linux:
// <Compilar>
// gcc -std=gnu11 -Wall -s -v -I /base/incluir -lncurses -o /base/programa/Proyecto13 Proyecto13.utf8.c
//
// <Ejecutar>
// /base/programa/Proyecto13
// ---------------------------------------------------
// En Windows, Embarcadero C++ Builder:
// <Compilar>
// bcc32 -An -v- -y- -w -lr -I\base\incluir Proyecto13.utf8.c
// <Ejecutar>
// Proyecto13.exe
//

#if defined(__linux__)
#  include <ncurses.h>
#  include <ccast.utf8.h>
#else
#  include <windows.h>
#  include <stdio.h>
#  include <conio.h>
#  include <ccast.h>
#  pragma hdrstop
#endif

// Función main() para Linux.
#if defined(__linux__)
entero main(sin_argumento)
{
        puntero_caracteres titulo = "Proyecto 13\n";
        puntero_caracteres mensaje = "Traducción al idioma castellano las palabras reservadas de C/C++.\n";

   initscr();
   raw();
   keypad(stdscr, TRUE);
   noecho();
   cbreak();

   printw(titulo);
   printw(mensaje);

   refresh();
   getch();
   endwin();

   devolver 0;
}
#else
// Función main() para Windows.
entero main(sin_argumento)
{
        corto entero código_página = 850;
        puntero_caracteres título = "Proyecto 13";
        puntero_caracteres mensaje = "Traducci\xA2n al idioma castellano las palabras reservadas de C/C++.";

   // Cambia a OEM-850 el juego de caracteres para la entrada/salida estándar.
   SetConsoleOutputCP(código_página);
   SetConsoleCP(código_página);
   SetFileApisToOEM();

   clrscr();
   puts(título);
   puts(mensaje);

   getch();
   devolver 0;
}
#endif
