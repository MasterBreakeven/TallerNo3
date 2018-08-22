/* 
programa: programa que le solicite al usuario numeros y haga la suma de ellos
y muestre el resultado y cuantos numeros ingreso.
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
	int resultado,num,contador,acumulador;
	acumulador = 0;
	contador = 0;
// empieza a ejecutar el proceso proceso	
	do
	{
		printf ("\n introduzca un numero entero: ");
		scanf("%d",&num);
			printf ("%d",resultado=num*num-num);
		acumulador += resultado;
		contador++;
		printf ("\n desea ingresar otro numero (s/n)?: ");
		fflush (stdin);
		scanf ("%c",&c);
		printf ("\n ");
	}while (c != 'n');
	printf("\n");
	printf( "Has introducido %d numeros", contador);
	printf ("\n");
	printf ("la suma total es %d",acumulador);
	return 0;
}

