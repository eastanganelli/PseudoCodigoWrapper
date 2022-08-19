#include <PseudoCodeWrapper/PseudoCodeWrapper.hpp>

int main() {

	/*
	* Just for testing
	*/

	si(1 < 4 y_ 3 > 2) entonces
		imprimir << "Si";
	sino
		imprimir << "NO";
	fin_si

	imprimir << "\n";

	para(entero i) = 2 hasta(i) 15 paso(i) 1 hacer
		imprimir << "hola con para\n";
	fin_para

	reales i = 0;

	mientras(i < 10) hacer
		imprimir << "hola con mientras\n";
		i = suma(i,1);
	fin_mientras

	i = 0;

	repetir
		imprimir << "hola con repetir\n";
		i siguiente 1;
	hasta_que(i < 10)

	caracter c = 'a';

	segun(c) hacer
		caso('a')
			imprimir << "hola con caso A\n";
			alto
		caso('b')
			imprimir << "hola con caso B\n";
			alto
		de_otro_modo
			imprimir << "hola con caso default\n";
	fin_segun

	return 0;
}
