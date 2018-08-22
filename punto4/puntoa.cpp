/* 
programa: programa que imprime los nmeros del 1 al 50
fecha: 22/08/2018
elaborado: juan david hoyos ramirez
*/
using namespace std;
#include <iostream>
#include <stdio.h>
#include<math.h>
//funcion principal
int main() {
//variables	
	int i;
	int mostrados;
	int mostrar;
	int n;
	printf("Ingrese la cantidad de numeros que sea ver\n");
	scanf("%i",&mostrar);
	printf(" 1\n");
	mostrados = 1;
	n = 2;
	//proceso para mostrar los numeros del 1 al 50	
	while (mostrados<mostrar) {
		for (i=1;i<=50;i++) {
			if (n%i==0) {
			}
		}
			printf(" %i\n",mostrados);
		n = n+1;
	}
	return 0;
}


