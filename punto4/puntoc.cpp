/* 
programa: programa que suma los primeros numeros primos del 1 al 50
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
	bool primo;
	printf("Ingrese la cantidad de numeros que sea ver\n");
	scanf("%i",&mostrar);
	printf("1: 2\n");
	mostrados = 1;
	n = 3;
//proceso para determinar los numeros pares	
	while (mostrados<mostrar) {
		primo = true;
		for (i=3;i<=sqrtf(n);i+=2) {
			if (n%i==0) {
				primo = false;
			}
		}
//decision para mostar solo los pares		
		if (primo) {
			mostrados = mostrados+1;
			printf("%i: %i\n",mostrados,n);
		}
		n = n+2;
	}
	return 0;
}


