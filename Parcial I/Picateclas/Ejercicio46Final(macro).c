/*Nombre Equipo: Picateclas
Autores:
Dur�n Matos Juan Jos�
Gonz�lez Bautista No� Alejandro
L�pez Madera Fernanda Jacqueline
Version: 1. 0. 0
Descripcion del programa: E.P. que lea 200 n�meros y que calcule e imprima cuantos son
negativos, cuantos son positivos y cuantos fueron iguales a cero.
Fecha de creacion: 17/feb/2019
*/
#include <stdio.h>
#define for(i,cantidad) for(i=0; i<cantidad ; i++)//DEFINIMOS EL CICLO FOR
	
int main(int argc, char *argv[]) {
	//VARIABLES
	int i, CP=0, CN=0, CC=0;
	float numero;
	//PROCESO.
	for(i, 200){//INICIAMOS EL CICLO FOR
		printf("\nIngrese cualquier n�mero: ");//ENTRADA
		scanf("%f", &numero);//LEEMOS EL N�MERO.
		if(numero>0){
			CP++;//AUMENTA EL CONTADOR DE N�MEROS POSITIVOS.
		}else{
			if(numero<0){
				CN++;//AUMENTA EL CONTADOR DE N�MEROS NEGATIVOS.
			}else{
				CC++;//AUMENTA EL CONTADOR DE N�MEROS IGUAL QUE 0.
			}
		}
	}
	printf("\n------------------------------------------");
	//SALIDAS
	printf("\nLa cantidad de n�meros positivos son: %i", CP);
	printf("\nLa cantidad de n�meros negativos son: %i", CN);
	printf("\nLa cantidad de n�meros igual a 0 son: %i", CC);
	return 0;
}

/*Revisi�n.

-No imprime acentos.
-El nombre de las variables podr�a ser m�s representativas.
-El c�digo cumple con su funci�n.

Revis�: Programadores Empedernidos.
*/
//Si imprime los acentos.
