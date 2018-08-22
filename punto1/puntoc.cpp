/* 
programa: escriba un programa que calcule el area de un rectangulo
fecha: 19/08/2018
elaborado: juan david hoyos ramirez
*/
#include <stdio.h>
#include <iostream>
using namespace std;
//funcion principal
int main(int argc, char *argv[]) {
	int lado1, lado2, area;
	area=0;
	lado1=0;
	lado2=0;
	printf ("Ingrese la base del rectangulo\n");
	scanf ("%d",&lado1);
	printf ("Ingrese la altura del rectangulo\n");
	scanf ("%d",&lado2);
	area = (lado1*lado2);
	printf ("el area del rectangulo es: %d\n",area);
	return 0;
}





