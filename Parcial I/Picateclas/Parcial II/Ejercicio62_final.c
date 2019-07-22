/*Programa: SumaDiagonalPrincipal.c
Descripci�n: Lee una matriz de 5x5 elementos y calcula e imprime la suma de 
los elementos en la diagonal principal.
Autor: Picateclas
Integrantes:
-L�pez Madera Fernanda Jacqueline
-Dur�n Matos Juan Jos�
-Gonzalez Bautista No� Alejandro
Versi�n: 1.0
Fecha de creaci�n: 13/marzo/2019*/

#include <stdio.h>
#include <conio.h>

//MACROS
#define FOR(A,B) for(A=0; A<B; A++)
int main(int argc, char *argv[]) {
	//VARIABLES
	float elemento[5][5], sumatoria=0;
	int f, c;
	//ENTRADA- lee los elementos de la matriz
	FOR(f,5){
		FOR(c,5){
			printf("Ingrese el elemento de la fila %i, columna %i >> ", f+1, c+1);
			scanf(" %f", &elemento[f][c]);
		}
	}
	
	//PROCESO- ubica los elementos de la diagonal principal y calcula la sumatoria
	FOR(f,5){
		sumatoria+=elemento[f][f];
	}
	
	//SALIDA- imprime la sumatoria
	printf("\nLa suma de los elementos en la diagonal principal es: %f", sumatoria);
	
	
	getch();
	return 0;
}

/*
QA
El programa funciona correctamente,codigo sencillo y bien identificado,
secciones bien definidas y uso de variables representativas.
Revis�:Los compiladores_Carlos Arturo �lvarez Trejo
*/

