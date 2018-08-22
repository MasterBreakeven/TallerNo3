/* 
programa: programa que calcula el area de un cubo siempre y cuando sus medidas 
sean diferentes a 0 
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
	int lado=6;
	printf ("introduzca la medida de uno de los lados del cubo\n");
	printf ("ADVERTENCIA si ingresa 0 se terminara la ejecucion\n\n");
	scanf ("%f",&num);
	//se determina el area del cubo y rectifica que la medida no sea igual a 0	
	while (num !=0)
	{
		printf ("el area del cubo es: %.f",lado*num*num);
		printf("\n\n");
		printf ("si desea puede hallar otra medida de lo contrario oprima 0\n");
		scanf ("%f",&num);
	}
	return 0;
}

