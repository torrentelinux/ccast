// Encabezamiento: ccast.utf8.h
// Autor         : Octulio Biletán
// Propósito     : "C-CASTellano"
//		   Proyecto 13 (Trece).
//		   Traducir el lenguaje C/C++ al lenguaje Castellano.
//		   Traducción al Castellano de las palabras reservadas
//		   de C y de C++ del compilador Embarcadero C++ Builder.
// Versión       : v1.5 - Mayo de 2020.
// Licencia      : Copyright (c) 2019-2020 Octulio Biletán - torrentelinux@gmail.com
//		   This file, ccast.utf8.h, is licensed under the GNU General Public License v3.0
//

#if !defined(__CCAST__)
#   define __CCAST__		/* constante de CCAST.H */

#define automático		auto
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
#define estático		static
#define externo			extern
#define flotante		float
#define largo			long
#define largo_doble		long long
#define _lógico			_Bool
#define lógico			bool
#define nada			void
#define registro		register
#define sin_signo		unsigned
#define volátil			volatile

#define _complejo		_Complex
#define _imaginario		_Imaginary

/* Caso especial: los números naturales, incluído cero.
   No se trata de una traducción inglés-castellano sino
   de una clasificación por tipos de datos entero, desde
   cero hasta el máximo permitido por la arquitectura del
   microprocesador de la computadora.
*/
#define natural			unsigned int
#define natural_corto		unsigned short int
#define natural_grande		unsigned long int
#define natural_inmenso		unsigned long long
#define natural_enorme		unsigned __int64

/* Caso especial: el conjunto de caracteres ASCII (7 bits)
   y el conjunto de caracteres ASCII extendido (8 bits).
   Se contempla la codificación de caracteres ASCII 
   tanto del conjunto de códigos entre -127 y +128 y del
   conjunto de códigos comprendidos entre 0 y 255.
*/
#define ascii			signed char
#define ascii_extendido		unsigned char

#define enumeración		enum
#define estructura		struct
#define unión			union

#define caso			case
#define conmutar		switch
#define continuar		continue
#define dejar			break
#define hacer			do
#define ir_a			goto
#define mientras		while
#define para			for
#define por_omisión		default
#define retornar		return
#define si			if
#define sino			else

#define __intentar		__try
#define __enlínea		__inline
#define enlínea			inline
#define __excepción		__except

#define puntero_caracteres		char*
#define puntero_caracteres_amplio	wchar_t*
#define puntero_genérico		void*
#define restringir			restrict

#define falso			false
#define verdadero		true

#define ensam			asm
#define tam_de			sizeof

// Palabras reservadas de C++:
#ifdef __cplusplus
#  define clase			class
#  define amiga			friend
#  define pública		public
#  define protegida		protected
#  define privada		private
#  define plantilla		template
#  define intentar		try
#  define capturar		catch
#  define lanzar		throw
#  define nueva			new
#  define borrar		delete
#  define ámbito		namespace
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

// número entero --> int
// número precisión simple --> float
// número precisión doble  --> double
#define número
#define precisión

// Alias de restringir
#define limitar			restringir

// Alias de hebra
#define hilo			hebra

// Alias de o_excluyente
#  define _o_ex			o_excluyente

// Alias de __excepción
#define exceptuar		__excepción

// Alias de 'para'
#define contar			para

// Alias de ir_a
#define ir_hacia		ir_a
#define saltar			ir_a

// Alias de ensam
#define ensamblador		ensam
#define código_ensamblador	ensam
#define lenguaje_ensamblador	ensam

// Alias de lógico
#define buleano			lógico

// Alias de mientras
#define ciclar			mientras

// Alias de caracter
#define caracteres		caracter

// Alias de caracter_amplio
#define caracteres_amplio	caracter_amplio

// Alias de puntero_caracteres_amplio
#define ptr_txt_unicode		puntero_caracteres_amplio

// Para la construcción: si... entonces / si... pues
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
#define sin_devolución		nada
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
