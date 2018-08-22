/* 
programa:solicita al usuario un numero del 1 al 7 y diga el dia de la semana
correspondiente
fecha: 19/08/2018
elaborado: juan david hoyos ramirez
*/
#include <stdio.h>
#include <iostream>
using namespace std;
//funcion principal
int main(int argc, char *argv[]) {
	int numero;
	printf ("ingrese un numero y le diremos que dia es\n");
	scanf ("%d",&numero);
//decision entre los numeros	
	if (numero==1){
		printf ("el dia de hoy es domingo");
	}else{
		if (numero ==2){
			printf ("el dia de hoy es lunes");
		}else{
			if(numero==3){
				printf ("el dia de hoy es martes");
			}else{
				if(numero==4){
					printf ("el dia de hoy es miercoles");
				}else{
					if(numero==5){
						printf ("el dia de hoy es jueves");
					}else{
						if(numero==6){
							printf ("el dia de hoy es viernes");
						}else{
							if(numero==7){
								printf("el dia de hoy es sabado");
							}else{
								printf("se produjo un error");
							}
						}
					}
				}
			}
		}
	}
	return 0;
}



