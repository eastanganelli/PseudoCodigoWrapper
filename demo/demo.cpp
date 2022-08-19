#include <PseudoCodeWrapper/PseudoCodeWrapper.hpp>

int main() {
	
	repetir
		entero edad;

		imprimir << "Insertar edad: ";
		leer >> edad;

		si(edad mayor_igual 27) entonces
			imprimir << "Millenial" << salto_linea;
		sino
			si(edad mayor_igual 20) entonces
			imprimir << "Gen Z" << salto_linea;
		fin_si
			fin_si
	hasta_que(true)

	return 0;
}