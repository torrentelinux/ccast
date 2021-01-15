// ejemplo1.cpp
// Octulio Biletán - Ene_2021
// Ejemplo sobre la función access(), para recorrer un vector numérico.

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <iostream>
#include <conio.h>
using namespace std;

// Ambito 'extension' para access().
namespace extension
{
   // indicador hacia adelante
   const bool forward = true;

   // indicador hacia atrás
   const bool rewind  = false;

   // Recorre el arreglo de 'elems' elementos en la dirección indicada
   // ya sea hacia adelante o hacia atrás
   void access(int &arreglo, int elems, const bool direccion)
   {
	int *ptr;

   	if(direccion == extension::forward)
   	{
     	  ptr = &arreglo;    // Recorre el arreglo desde la posición 0.

     	  for(int i = 0; i < elems; i++)
     	  {
       	    cout << *ptr++;  // Muestra el contenido del vector, posición vigente
       	    if(i != elems-1)
              cout << ", " << flush;
     	  }
   	}
   	else
   	{
     	  ptr = &arreglo;    // Recorre el arreglo desde la última posición.
     	  ptr = &ptr[elems-1];

     	  for(int i = elems; i >= 1; i--)
     	  {
       	    cout << *ptr--;  // Muestra el contenido del vector, posición vigente
       	    if(i != 1)
              cout << ", " << flush;
     	  }
   	}

   	cout << endl;
   }
}  // Fin de extension

using namespace extension;

int _tmain(void)
{
	int vector[] = { 4, 33, 23, 1, 0, 7, 99, -6, -62, 19 };

   // Muestra el vector desde la posición 0 hasta el final.
   access(*vector, sizeof(vector) / sizeof(int), extension::forward);

   // Muestra el vector desde la última posición hasta el principio.
   access(*vector, sizeof(vector) / sizeof(int), extension::rewind);

   cout << "Presione cualquier tecla para terminar." << flush;
   getch();

   return 0;
}
