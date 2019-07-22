#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*
Nombre: 51_sumatoria-do-while.c
Autor: Programadores empedernidos
Descripci�n: E.P. que lea un vector de n elementos y que calcule e imprima su sumatoria.
Fecha: 06/03/2019
Versi�n: 1.0
*/

void inbox(); // Sirve para generar un box inbox(1-3,longitud);printf("contenido \n");

int main() {
	/* Se declaran las variables */
	int n, i;
	float sum=0;
	
	/* Entrada: Se piden los N n�meros del vector*/
	printf("Dame la cantidad de numeros que sumaras: ");
	do{
		scanf("%d", &n);
		if(n<0){
			printf("\nNo puedes ingresar numeros negativos, vuelve a ingresar uno valido: ");
		}

	}
	while(n<0);
	
	float v[n];
	
	printf("Ingresa %d numeros para sumar:\n", n);
	i=0;
	do{
		printf("%d. ", i+1);
		scanf("%f", &v[i]);
		i++;
	}
	while(i<n);
	
	/* Proceso: Se hace la sumatoria de lo */
	i=0;
	do{
		sum += v[i];
		i++;
	}
	while(i<n);
	/* Salida: */
	
	inbox(1,11);printf(" SUMA: \n");
	inbox(2,11);printf(" %.3f\n",sum);
	inbox(3,11);printf("\n");
	
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
Al ingresar un numero negativo  o de tipo flotante como tama�o del vector, el programa se termina,
no suma numeros decimales,
forma practica y atractiva de impresion
Revis�: Los Compiladores_Carlos Arturo �lvarez Trejo

*/

