// ejemplo1.cpp
// Octulio Bilet�n - Ene_2021
// Ejemplo sobre la funci�n access(), para recorrer un vector num�rico.

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

   // indicador hacia atr�s
   const bool rewind  = false;

   // Recorre el arreglo de 'elems' elementos en la direcci�n indicada
   // ya sea hacia adelante o hacia atr�s
   void access(int &arreglo, int elems, const bool direccion)
   {
	int *ptr;

   	if(direccion == extension::forward)
   	{
     	  ptr = &arreglo;    // Recorre el arreglo desde la posici�n 0.

     	  for(int i = 0; i < elems; i++)
     	  {
       	    cout << *ptr++;  // Muestra el contenido del vector, posici�n vigente
       	    if(i != elems-1)
              cout << ", " << flush;
     	  }
   	}
   	else
   	{
     	  ptr = &arreglo;    // Recorre el arreglo desde la �ltima posici�n.
     	  ptr = &ptr[elems-1];

     	  for(int i = elems; i >= 1; i--)
     	  {
       	    cout << *ptr--;  // Muestra el contenido del vector, posici�n vigente
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

   // Muestra el vector desde la posici�n 0 hasta el final.
   access(*vector, sizeof(vector) / sizeof(int), extension::forward);

   // Muestra el vector desde la �ltima posici�n hasta el principio.
   access(*vector, sizeof(vector) / sizeof(int), extension::rewind);

   cout << "Presione cualquier tecla para terminar." << flush;
   getch();

   return 0;
}
