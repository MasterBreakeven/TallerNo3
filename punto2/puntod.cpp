/* 
programa:solicitar al usuario ingresar un caracter y determinar si es una 
vocal en mayuscula o si es una vocal en minuscula
fecha: 19/08/2018
elaborado: juan david hoyos ramirez
*/
#include <stdio.h>
#include <iostream>
using namespace std;
//funcion principal
int main(int argc, char *argv[]) {
	char vocal;
	printf ("ingrese una vocal (a,e,i,o,u)\n");
	scanf ("%c",&vocal);
//decision comparacion de las vocales	
	if (vocal=='a' || vocal=='e' || vocal=='i' || vocal=='o' || vocal=='u') {
		printf("es una vocal");
		printf(" en minuscula");
	} else {
		if (vocal=='A' || vocal=='E' || vocal=='I' || vocal=='O' || vocal=='U'){
			printf("es una vocal");
			printf(" en mayuscula");
		} else {
			printf ("se ha producido un error grave");
		}
	}
	return 0;
}



