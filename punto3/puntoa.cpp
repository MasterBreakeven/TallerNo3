/* 
programa: programa que calcule el área de un circulo
fecha: 22/08/2018
elaborado: juan david hoyos ramirez
*/
#include <stdio.h>
#include <iostream>
using namespace std;
//funcion prioncipal
int main(int argc, char *argv[]) {
	//variables
	float area, radio;
	int i;
	
	//realiza el calculo de 5 radios
	for(i=1; i<=5;i++)
	{
		printf ("introduzca radio %d: \n",i);
		scanf ("%f",&radio);
		
		area = 3.1416 * radio * radio;
		
		printf ("\n el area de la circunferencia %d es: %.2f\n",i,area);
		
		
	}
	return 0;
}

