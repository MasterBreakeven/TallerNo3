/* 
programa: escriba un programa que calcule el area de un triangulo
fecha: 16/08/2018
elaborado: juan david hoyos ramirez
*/
#include <stdio.h>
#include <iostream>
using namespace std;
//funicon principal
int main(int argc, char *argv[]) {
	int base, altura, area;
	area=0;
	base=0;
	altura=0;
	printf ("Ingrese la base del triangulo\n");
	scanf ("%d",&base);
	printf ("Ingrese la altura del triangulo\n");
	scanf ("%d",&altura);
	area = (base*altura)/2;
	printf ("el area del triangulo es: %d\n",area);
	return 0;
}



