/* 
programa: programa que muestra los cuadrados de los 10 primeros numeros 
naturales
fecha: 22/08/2018
elaborado: juan david hoyos ramirez
*/
#include <math.h>
#include <stdio.h>
#include <iostream>
using namespace std;
//funcion principal
int main(int argc, char *argv[]) {
//variables	
	int num;
	printf("los cuadrados de los primeros 10 numeros naturales son:  \n\n");
//ciclo para mostrar los cuadrados para los 10 primeros numeros naturales	
	for (num = 1 ;num <= 10; num++ )
	{
		printf("%.f",pow(num,2 ));
	}
	return 0;
}

