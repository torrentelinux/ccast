// ccast.h
// C-CASTellano.
// Proyecto 13 (Trece): Traducir el lenguaje C/C++ al lenguaje Castellano.
//                      Traducci�n al Castellano de las palabras reservadas de C y de C++
//                      del compilador Embarcadero C++ Builder.
// Octulio Bilet�n - torrentelinux@gmail.com
// Versi�n 1.0 - Febrero de 2019.
//
// This file, ccast.h, is licensed under the GNU General Public License v3.0
//

#if !defined(__CCAST__)
#   define __CCAST__		/* constante de CCAST.H */

#define deftipo			typedef
#define autom�tico		auto
#define externo			extern
#define registro		register
#define vol�til			volatile
#define est�tico		static
#define constante		const
#define l�gico			bool
#define caracter		char
#define corto			short
#define entero			int
#define entero_corto		short int
#define entero_doble		long int
#define largo			long
#define largo_doble		long long
#define flotante		float
#define doble			double
#define con_signo		signed
#define sin_signo		unsigned
#define nada			void

#define uni�n			union
#define estructura		struct
#define enumeraci�n		enum

#define retornar		return
#define mientras		while
#define para			for
#define hacer			do
#define continuar		continue
#define si			if
#define sino			else
#define dejar			break
#define conmutar		switch
#define caso			case
#define por_omisi�n		default
#define ir_a                    goto

#define __intentar              __try
#define __excepci�n             __except
#define __enl�nea		__inline

#define puntero_gen�rico	void*
#define puntero_caracteres	char*

#define verdadero		true
#define falso			false

#define ensam                   asm
#define tamde                   sizeof

// Palabras reservadas de C++: listado incompleto...
#ifdef __cplusplus
#  define clase			class
#  define amiga			friend
#  define p�blica		public
#  define protegida		protected
#  define privada		private
#  define intentar		try
#  define capturar		catch
#  define lanzar		throw
#  define nueva			new
#  define borrar		delete
#endif
// -----------------------------------

/* Interfaz entre funciones C y CPP
   Usar: Lenguaje(C)
	 ...funciones C...
	 FinLenguaje
*/
#define Lenguaje(x)  extern #x {
#define FinLenguaje  }

// n�mero entero --> int
// n�mero precisi�n simple --> float
// n�mero precisi�n doble  --> double
#define n�mero
#define precisi�n

// Alias de ir_a
#define ir_hacia                ir_a
#define saltar                  ir_a

// Alias de ensam
#define ensamblador             ensam
#define c�digo_ensamblador      ensam
#define lenguaje_ensamblador    ensam

// Alias de l�gico
#define buleano			l�gico

// Alias de mientras
#define ciclar			mientras

// Alias de caracter
#define caracteres		caracter

// Para la construcci�n: si... entonces / si... pues
#define entonces
#define pues

// Alias de conmutar
#define conmutar_por_si		conmutar

// Alias de caso
#define acaso			caso

// Alias de entero_doble
#define entero_grande		entero_doble

// Alias de largo_doble
#define entero_grande_doble	largo_doble

// Alias de nada
#define sin_devoluci�n		nada
#define sin_argumento		nada

// Alias de dejar
#define abandonar		dejar
#define cesar			dejar
#define terminar		dejar
#define completado		dejar

// Alias de retornar
#define regresar		retornar
#define devolver		retornar

// Alias de flotante
#define simple			flotante

// Alias de largo doble: long double
#define extendida		(largo doble)

#endif  /* __CCAST__ */
