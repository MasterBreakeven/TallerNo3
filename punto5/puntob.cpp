/* 
programa: programa que suma los numeros enteros ingresados hasta que el
usuario ingrese 0 
fecha: 22/08/2018
elaborado: juan david hoyos ramirez
*/
#include <stdio.h>
#include <iostream>
using namespace std;
//funcion principal
int main()
	//variables
{
	char c;
	int acu, cont, num;
	acu = 0;
	cont = 0;
//empieza el ciclo de la cuma de los numeros ingresados	
	do
	{
		printf ("\n");
		printf( "introdusca el numero a sumar ");
		scanf( "%d", &num);
		printf("\n");
		acu += num;
		cont++;
		printf("si no quiere ingresar mas oprima 0 de contrario s ");
		fflush(stdin);
		scanf( "%c", &c);
	} while ( c != '0' );
	printf( "La suma total es: %d", acu );
	return 0;
}
