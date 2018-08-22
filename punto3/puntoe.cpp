/* 
programa: programa que calcula el promedio de 3 notas para n estudiantes
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
	int i,cantidad;
	float nota1,nota2,nota3,resultado;
	printf ("ingrese la cantidad de estudiantes a promediar las notas\n");
	scanf ("%d",&cantidad);
//ciclo para sacar el promedio de las notas de n estudiantes	
	for (i=1;i<=cantidad;i++)
	{
		printf("ingrese las notas del estudiante\n");
		scanf ("%f",&nota1);
		scanf ("%f",&nota2);
		scanf ("%f",&nota3);
		resultado=((nota1+nota2+nota3)/3);
		printf ("la nota definitiva es: %0.2f",resultado);
		printf("\n");
	}
	return 0;
}

