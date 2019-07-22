#include <stdio.h>
#include <conio.h>

/*
Nombre: 52_producto-for.c
Autor: Programadores empedernidos
Descripci�n: E.P. que lea un vector de n elementos y que calcule e imprima el producto de sus elementos.
Fecha: 06/03/2019
Versi�n: 1.0
*/

/* Se definen constantes y macros */
#define FOR(A,B) for(A=0;A<B;A++)

void inbox(); // Sirve para generar un box inbox(1-3,longitud);printf("contenido \n");

int main(int argc, char *argv[]) {
	/* Se declaran las variables */
	int n, i; 
	float prod=1;
	
	/* Entrada: Se piden los N n�meros del vector*/
	printf("Dame la cantidad de numeros que multiplicaras: ");
	do{
		scanf("%d", &n);
		if(n<0){
			printf("\nNo puedes ingresar numeros negativos, vuelve a ingresar uno valido: ");
		}

	}
	while(n<0);
	
	float v[n];
	printf("Ingresa %i numeros para multiplicar:\n", n);
	FOR(i,n){
		printf("%d. ", i+1);
		scanf("%f", &v[i]);
	}
	
	/* Proceso: Se hace la sumatoria de lo */
	FOR(i,n){
		prod *= v[i];
	}
	/* Salida: */
	
	inbox(1,11);printf("PRODUCTO:\n");
	inbox(2,11);printf(" %.3f\n",prod);
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
El programa solo funciona para numeros enteros, se se ingresa un valor decimal, el programa se termina
atractiva forma de impresion, no validaron el ingreso del tama�o del vector,cuando pregunta dame la cantidad de numeros
que multiplicaras, puedo ingresar elementos negativos o de tipo flotante, sin que el programa detecte que no es un ingreso valido,
por lo que el programa se termina automaticamente al ingresar ya sea un elemnto negativo o flotante en la cantidad de numeros a ingresar
Revis�:Los Compiladores
*/


