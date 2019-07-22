#include <stdio.h>
#include <conio.h>

/*
Nombre: 50_vectores-while.c
Autor: Programadores empedernidos
Descripci�n: E.P. que lea un vector de 50 elementos y los imprima.
Fecha: 06/03/2019
Fecha de correcci�n: 13/03/19.
Versi�n: 1.1
*/

/* Se definen las contantes y macros */
#define VECTOR_SIZE 50

void inbox();

int main(int argc, char *argv[]) {
	
	/*Declaramos las variables*/
	int vector[VECTOR_SIZE],i,aux=1;
	
	/*Entrada: Solicitamos los datos con un while*/
	printf("Introduce 50 n�meros:\n");
	i=1;
	while (i<=VECTOR_SIZE){
		printf("%d. ",i);
		scanf("%d",&vector[i-1]);
		i++;
	}
	
	/*Proceso y salida: Se imprimen los n�meros del arreglo*/
	inbox(1,100);printf("Los n\243meros ingresados fueron:\n");
	i=1;
	while (i<=VECTOR_SIZE) {
		if (aux == 1){
			inbox(2,100);
		}
		printf("[%d] ",vector[i-1]);
		if (aux == 10){
			printf("\n");
			aux=0;
		}
		aux++;
		i++;
	}
	inbox(3,100);
	
	return 0;
}

void inbox(int tipo,int longitud){
	int caracter_inicio, caracter_final, caracter_relleno, x;
	switch(tipo){
	case 1:
		caracter_inicio = 201;
		caracter_final = 187;
		caracter_relleno = 205;
		break;
	case 2:
		caracter_inicio = 186;
		caracter_final = 186;
		caracter_relleno = 32;
		break;
	case 3:
		caracter_inicio = 200;
		caracter_final = 188;
		caracter_relleno = 205;
		break;
	};
	for (x=0;x<longitud+1;x++){
		printf("%c",caracter_relleno);
	};
	printf("%c\r%c",caracter_final,caracter_inicio);
}

/*
QA
El programa funciona correctamente para numeros enteros,
al ingresar valores decimales, el programa se termina,
la forma de imprimir los resultados es muy practica y atractiva
Revis�: Los Compiladores_Carlos Arturo �lvarez Trejo

*/
