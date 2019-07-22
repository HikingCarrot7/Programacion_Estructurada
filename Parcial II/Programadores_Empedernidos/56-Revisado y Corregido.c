
/*Programa que lee una matriz 3x3 e imprime los valores.
Autor: Programadores Empedernidos. 
Versi�n: 1.0. 
Fecha: 12/03/19.
*/

#include <stdio.h>
//constantes y macros
#define MAX 3
#define FOR(A,B) for(A=0;A<B;A++)

int main(){
	int numeros[MAX][MAX], i, j; //declaraci�n de la matriz.
	
	FOR(i,MAX){
		FOR(j,MAX){
			printf("Digita el elemento [%d,%d]: ", i+1, j+1); //Entrada de datos.
			scanf("%d", &numeros[i][j]);
		}
	}
	FOR(i,MAX){ //Salida de datos.
		printf("\n");
		FOR(j,MAX){
			printf(" %d", numeros[i][j]);
		}
	}
	return 0;
}
/*Revisado por: Punto C (Erick cardenas)
El programa funciona con cualquier n�mero e imprima una matriz 3X3*/
