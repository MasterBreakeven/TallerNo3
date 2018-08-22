/* 
programa: programa que calcula la mitad de un numero siempre y cuando sea 
diferente a 0 y 1
fecha: 22/08/2018
elaborado: juan david hoyos ramirez
*/
#include <stdio.h>
#include <iostream>
using namespace std;
//funcion principal
int main(int argc, char *argv[]) {
	//variables
	float num;
	printf ("introduzca un numero real\n");
	scanf ("%f",&num);
//se determina si lo ingresado es diferente a 0 y 1 y se calcula la mitad	
	while (num !=0 && num !=1)
	{
		printf ("la mitad de %.2f es: %.2f",num,num/2);
		printf ("\n introduzca otro numero real :");
		scanf ("%f",&num);
	}
	return 0;
}

