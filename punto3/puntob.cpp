/* 
programa: programa que calcula los multiplos de 4
fecha: 22/08/2018
elaborado: juan david hoyos ramirez
*/
#include <stdio.h>
#include <iostream>
using namespace std;
//funcion principal
int main(int argc, char *argv[]) {
	//variables
	int num;
	//ciclo para tomar multiplos de 4
	for(num = 64 ; num >= 4; num +=-4)
	{
		printf ("%d\n",num);
	}
	return 0;
}

