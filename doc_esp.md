#### [Volver](README.md)
---
# Documentacion En Español

# Index
-   [Variables](#variables)
-   [Condicionales](#Condicionales)
    -   [If](#If)
    -   [If Else](#If_Else)
    -   [If Anidado](#If_Anidado)
    -   [Multiple](#Multiple)
-   [Ciclos]()
    -   [While](#While)
    -   [For](#For)
    -   [Do While](#Do_While)
-   [Entras y Salidas]()
    -   [Entrada](#Entrada)
    -   [Salida](#Salida)
<br>

---

<br>

## Variables

```
    Pseudo   C++            Ejemplo
    ---------------------------------------------------------------
    entero   int	    /* -inf <= 0 <= +inf */
    reales   unsigned int   /* 0,1,....N, N >= 0 */
    decimal  double	    /* 3.1416 */
    booleano bool	    /* true or false (verdadero o falso) */
    caracter char	    /* a, b, c, .... */
    texto    string         /* "abcde..." */
```

## Condicionales

### If

```
    si(condicion) entonces
	instrucciónes;	
    fin_si
```

### If_Else

```
    si(condicion) entonces
        instrucciónes;
    sino
        instrucciónes;	
    fin_si
```

### If_Anidado

```
    si(condicion) entonces
        instrucciónes;
    sino 
        si(condicion) entonces
            instrucciónes;
        sino
            si(condicion) entonces
                instrucciónes;
            sino
                instrucciónes;	
            fin_si
        fin_si
    fin_si
```

### Multiple

```
    segun(variable) hacer
	caso (valor 1)
	     instrucciones 1;
	     alto

	de_otro_modo
	    instrucciones N;
    fin_segun
```

## Ciclos

### While

```
    // N valor real
    // x valor de inicialización de i
    // y valor de incremento

    i = x;
    mientras(i <= N) hacer
        instrucciónes;
        i siguiente y;
    fin_mientras
```

### For

```
    // N valor real
    // x valor de incremento
    para(entero i) = 1 hasta(i) N paso(i) x hacer
	instrucciones;
    fin_para
```

### Do_While

```
    // N valor real
    repetir
	instrucciones;
    hasta_que(i < N)
```

## Entradas y Salidas

### Entrada

```
    leer >> variable >> .. >> variable_N;
```

### Salida

```
    imprimir << variable << .. << "texto";
```
