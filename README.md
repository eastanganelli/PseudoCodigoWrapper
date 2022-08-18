# PseudoCode Warpper (Pseudo Codigo Warpper)

    Autor: Stanganelli, Ezequiel Augusto

## Index
-   ### [Introducción](#Introduccion)
-   ### [Requisitos](#Requisitos)
-   ### [Documentación](#Documentacion)
-   ### [Ejemplos](#Ejemplos)
    - #### [Condicional If](#Condicional_If)
    - #### [Ciclo For](#Ciclo_For)
---

## Introduccion

Pseudo Codigo Warpper es una herramienta que permite correr "pseudo código" dentro de C/C++ y poder ejecutarlo dentro de una aplicación de consola.

La librería se base es su gran porcentaje en la redefinición de las funciones de C/C++ con macros que permitiran simular la escritura de pseudo codigo como también pode realizar ejemplos hibridos entre pseudo codigo y C/C++.

## Requisitos
- CMake
- C/C++ Compiler
  - MinGW
  - Visual Studio con C++
  - Qt con C++
  - CodeBlocks con MinGW
  - Cualquier editor de código con compilador de C/C++

## Doocumentacion



## Ejemplos

<p>
A continuación podrá observar ejemplos script de pseudo codigo que puede ejecutar.
</p>

### Condicional_If
```
    si 1 < 4 y_ 3 > 2 entonces
		imprimir << "Si";
	sino
		imprimir << "NO";
	fin_si
```
### Ciclo_For
```
    para(entero i) = 2 hasta(i) 15 paso(i) 1 hacer
		imprimir << "hola\n";
	fin_para
```