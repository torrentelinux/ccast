// Encabezamiento: ccast.h
// Autor         : Octulio Bilet�n
// Prop�sito     : "C-CASTellano"
//		   Proyecto 13 (Trece).
//		   Traducir el lenguaje C/C++ al lenguaje Castellano.
//		   Traducci�n al Castellano de las palabras reservadas
//		   de C y de C++ del compilador Embarcadero C++ Builder.
// Versi�n       : v1.5 - Mayo de 2020.
// Licencia      : Copyright (c) 2019-2020 Octulio Bilet�n - torrentelinux@gmail.com
//		   This file, ccast.h, is licensed under the GNU General Public License v3.0
//

#if !defined(__CCAST__)
#   define __CCAST__		/* constante de CCAST.H */

#define autom�tico		auto
#define caracter		char
#define caracter_amplio		wchar_t
#define constante		const
#define con_signo		signed
#define corto			short
#define deftipo			typedef
#define doble			double
#define entero			int
#define entero_corto		short int
#define entero_doble		long int
#define est�tico		static
#define externo			extern
#define flotante		float
#define largo			long
#define largo_doble		long long
#define _l�gico			_Bool
#define l�gico			bool
#define nada			void
#define registro		register
#define sin_signo		unsigned
#define vol�til			volatile

#define _complejo		_Complex
#define _imaginario		_Imaginary

/* Caso especial: los n�meros naturales, inclu�do cero.
   No se trata de una traducci�n ingl�s-castellano sino
   de una clasificaci�n por tipos de datos entero, desde
   cero hasta el m�ximo permitido por la arquitectura del
   microprocesador de la computadora.
*/
#define natural			unsigned int
#define natural_corto		unsigned short int
#define natural_grande		unsigned long int
#define natural_inmenso		unsigned long long
#define natural_enorme		unsigned __int64

/* Caso especial: el conjunto de caracteres ASCII (7 bits)
   y el conjunto de caracteres ASCII extendido (8 bits).
   Se contempla la codificaci�n de caracteres ASCII 
   tanto del conjunto de c�digos entre -127 y +128 y del
   conjunto de c�digos comprendidos entre 0 y 255.
*/
#define ascii			signed char
#define ascii_extendido		unsigned char

#define enumeraci�n		enum
#define estructura		struct
#define uni�n			union

#define caso			case
#define conmutar		switch
#define continuar		continue
#define dejar			break
#define hacer			do
#define ir_a			goto
#define mientras		while
#define para			for
#define por_omisi�n		default
#define retornar		return
#define si			if
#define sino			else

#define __intentar		__try
#define __enl�nea		__inline
#define enl�nea			inline
#define __excepci�n		__except

#define puntero_caracteres		char*
#define puntero_caracteres_amplio	wchar_t*
#define puntero_gen�rico		void*
#define restringir			restrict

#define falso			false
#define verdadero		true

#define ensam			asm
#define tam_de			sizeof

// Palabras reservadas de C++:
#ifdef __cplusplus
#  define clase			class
#  define amiga			friend
#  define p�blica		public
#  define protegida		protected
#  define privada		private
#  define plantilla		template
#  define intentar		try
#  define capturar		catch
#  define lanzar		throw
#  define nueva			new
#  define borrar		delete
#  define �mbito		namespace
#  define utilizando		using
#  define operador		operator
#  define _y_			and
#  define _o_			or
#  define o_excluyente		xor
#  define o_excluyente_igual	xor_eq
#  define _no_			not
#  define id_tipo		typeid

//#  define escribe_nombre	typename
#  define nombre_tipo		typename

#  define decl_tipo		decltype
#  define tipo_de		typeof
#  define aparente		virtual
#  define hebra			__thread
#  define alineado_a		alignof
#  define uuid_de		uuidof
#  define __uuid_de		__uuidof
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

// Alias de restringir
#define limitar			restringir

// Alias de hebra
#define hilo			hebra

// Alias de o_excluyente
#  define _o_ex			o_excluyente

// Alias de __excepci�n
#define exceptuar		__excepci�n

// Alias de 'para'
#define contar			para

// Alias de ir_a
#define ir_hacia		ir_a
#define saltar			ir_a

// Alias de ensam
#define ensamblador		ensam
#define c�digo_ensamblador	ensam
#define lenguaje_ensamblador	ensam

// Alias de l�gico
#define buleano			l�gico

// Alias de mientras
#define ciclar			mientras

// Alias de caracter
#define caracteres		caracter

// Alias de caracter_amplio
#define caracteres_amplio	caracter_amplio

// Alias de puntero_caracteres_amplio
#define ptr_txt_unicode		puntero_caracteres_amplio

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

// Alias de long double
#define extendida		long double

#endif  /* __CCAST__ */
