/* 
programa: pedirle al usuario ingresar un numero y determiar si es par o impar
fecha: 19/08/2018
elaborado: juan david hoyos ramirez
*/
#include <stdio.h>
#include <iostream>
using namespace std;
//funcion principal
int main(int argc, char *argv[]) {
	int numero;
	printf ("ingrese un numero\n");
	scanf("%d",&numero);
//decision comparacion de numeros	
	if (numero%2==0){
		printf ("el numero ingresado es par\n");
	}else{
		printf ("el numero ingresado es impar\n");
	}
	return 0;
}



