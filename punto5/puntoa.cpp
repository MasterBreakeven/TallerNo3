/* 
programa: programa que de inicio solicite un numero comprendido entre 1 y 10 y
de salida muestre la tabla de multiplicar
fecha: 22/08/2018
elaborado: juan david hoyos ramirez
*/
#include <stdio.h>
#include <iostream>
using namespace std;
//funcion principal
int main(int argc, char *argv[]) {
//variables
	char c;
	int i,num;
	//inicia repira mientras para multiplicar
	do
		{
		printf ("introduzca un numero entero: ");
		scanf("%d",&num);
		printf ("\n la tabla de multiplicar del numero %d es:\n\n",num);
		
		//iniciamos tabla de multiplicar
		for (i=0;i<=10;i++)
		{
			printf ("%d * %d = %d \n",i,num,i*num);
		}
		printf ("\n desea visualizar otra tabla de multiplicar (s/n)?: ");
		fflush (stdin);
		scanf ("%c",&c);
		printf ("\n ");
	}while (c != 'n');
	return 0;
}

