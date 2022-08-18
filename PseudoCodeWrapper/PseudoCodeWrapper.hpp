#pragma once

#include <iostream>
#include <string>

using namespace std;

/*
* Pseudo Codigo en Español
* Introducción a las redes e informática
* Docente: Stanganelli, Ezequiel Agusto
* Github: github.com/eastanganelli
*/

/*
* Generic redefinitions
*/

	#define COMENTARIO // Just a Dummy comment 😊
	#define hacer ){  /* Para, Mientras y Según */
	#define fin }

/*
* Logical Operators (LOP) (Operadores Lógicos)
*/

	#define y_ &&
	#define o_ ||
	#define no !
	#define mayor >
	#define mayor_igual >=
	#define menor <
	#define menor_igual <=
	#define iguales ==

/*
* If Statements (Condicional)
*/

	#define si         if(       /* Si (condicion) */
	#define sino_      }else if( /* Sino (condicion) */
	#define sino       }else{    /* Sino */
	#define fin_si fin           /* Fin Si */
	#define entonces   ){        /* Entonces */

/*
* Loops (Ciclos)
*/
	/*
	* while() {}
	*/

		#define mientras(condicion) while(##condicion){
		#define fin_mientras        fin

	/*
	* do {} while ();
	*/

		#define repetir              do{
		#define hasta_que(condicion) }while(##condicion); /* Hasta que (condicion); */

	/*
	* for(;;) {}
	*/

		#define para(var_name)	for(##var_name
		#define hasta(var_name) ; ##var_name < /* i < N */
		#define paso(var_name)  ; ##var_name +=     /* i = i + X */
		#define fin_para fin

/*
* Switch (Condición Multiple)
* Warning: requiere el uso de break;
*/

	#define segun switch( /* Segun (variable) hacer */
	#define fin_segun fin
	
	/*
	* Cases (Casos)
	*/

		#define caso case
		#define de_otro_modo default:

/*
* Input/Output (Entrada/Salida)
*/

	#define imprimir    std::cout /* imprimir << ..... << ..... ; */
	#define leer        std::cin  /* leer >> ..... >> ..... ; */
	#define salto_linea std::endl /* endl = `\n` */

/*
* Refinición de variables
*/

	typedef int entero;
	typedef unsigned int reales;
	typedef double decimal;
	typedef string texto;
	typedef char caracter;
	typedef bool booleano;

/*
* Macros
*/
	#define suma(x, y) (x + y)        /* SUMA  X + Y */
	#define resta(x, y) (x - y)       /* RESTA X - Y */
	#define multiplicar(x, y) (x * y) /* MULTIPLICAR X * Y */
	#define dividir(x, y) (x / y)     /* DIVIDIR X / Y */

