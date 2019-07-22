/*
Programa: Ejercicio 57
Nombre equipo: Picateclas
Descripci�n: E.P. que lea una matriz de N X M elementos y que encuentre e
imprima la posici�n de los elementos negativos.
Version: 1.0
Fecha de creaci�n: 13/mar/2019
*/
#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[]) {
	//IDENTIFICADORES
	int fin, n, m, i, j, bandera=0;
	//ENTRADAS
	do{//Valida que sea n�meros positivos
		fin=1;
		printf("\nIngrese la cantidad de filas de la matriz: ");
		scanf(" %i", &n);//Lee la longitud de la fila.
		if(n<0 || n==0){
			printf("\nN�mero no v�lido.");
			fin=0;
		}
	} while(fin==0);
	
	do{//Valida que sea n�meros positivos.
		fin=1;
		printf("\nIngrese la cantidad de columnas de la matriz: ");
		scanf(" %i", &m);//Lee la longitud de la columna.
		if(m<0 || m==0){
			printf("\nN�mero no v�lido.");
			fin=0;
		}
	} while(fin==0);
	float x[n][m];//Matriz de filas "n" y columnas "m".
	
	//PROCESO (lectura).
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			printf("\nIngrese numero fila %d columna %d: ", i, j);//Ingresar el elemento
			scanf(" %f",&x[i][j]);//Se guarda el valor en la fila "i" y columna "j"
		}
	}
	//PROCESO (para imprimir matriz).
	for(i=1;i<=n;i++){
		printf("\n");//Salto para que al imprimir quede como una matriz.
		for(j=1;j<=m;j++){
			//SALIDAS.
			printf(" %.2f", x[i][j]);
		}
	}
	//PROCESO (imprimir posici�n de n�meros negativos).
	printf("\nPosici�n de los n�meros negativos (fila,columna): ");
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			if(x[i][j]<0){
				printf("(%i, %i)", i, j);
				bandera=1;
			}
		}
	}
	if(bandera==0){
		printf("\nNo se encontraron n�meros negativos.");
	}
	
	return 0;
}

