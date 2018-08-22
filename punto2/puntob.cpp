/* 
programa:solicitar al usuario ingresar 3 numeros y decir cual es el mayor
fecha: 19/08/2018
elaborado: juan david hoyos ramirez
*/
#include <stdio.h>
#include <iostream>
using namespace std;
//funcion principal
int main(int argc, char *argv[]) {
	int n1,n2,n3;
	printf ("ingrese 3 numeros de forma aleatoria\n");
	printf ("ingrese el primer numero\n");
	scanf ("%d",&n1);
	printf ("ingrese el segundo numero\n");
	scanf ("%d",&n2);
	printf ("ingrese el tercer numero\n");
	scanf ("%d",&n3);
	//decision comparacion de los 3 numeros ingresados
	if (n1>n2 && n1>n3){
		printf ("el mayor es %d",n1);
	}else{
		if(n2>n1 && n2>n3){
			printf ("el mayor es %d",n2);
		}else{
			printf ("el mayor es %d",n3);
		}
	}
	return 0;
}



