/* 
programa: programa que calcula los numeros pares entre 1 y 1000
fecha: 22/08/2018
elaborado: juan david hoyos ramirez
*/
#include <stdio.h>
#include <iostream>
using namespace std;
//funcion principal
int main()
{
//variables	
	int numero;
	printf( "\n   " );
//ciclo que muestra los numeros pares 	
	for ( numero = 2 ; numero <= 1000 ; numero += 2 )
	{
		printf( "%d ", numero );
	}
	return 0;
}

