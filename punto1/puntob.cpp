/* 
programa: solicitar al usuario que ingrese una variable con el valor de un 
dolar en pesos colombianos, y en otra variable la cantidad de dolares que tiene
,devolver la cantidad en pesos colombianos que tiene.
fecha: 19/08/2018
elaborado: juan david hoyos ramirez
*/
#include <stdio.h>
#include <iostream>
using namespace std;
//funicion principal
int main(int argc, char *argv[]) {
	float dolar, Pcolombiano, cantDolar;
	dolar= 0;
	Pcolombiano=0;
	cantDolar=0;
	printf ("Ingrese el valor del dolar\n");
	scanf ("%f",&dolar);
	printf ("ingrese la cantidad de dolares que sea saber\n");
	scanf ("%f",&cantDolar);
	Pcolombiano = (dolar*cantDolar);
	printf ("su total es: %2.0f\n",Pcolombiano);
	return 0;
}







