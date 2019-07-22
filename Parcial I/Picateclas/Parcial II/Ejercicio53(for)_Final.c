/*Nombre Equipo: Picateclas
Autores:
Dur�n Matos Juan Jos�
Gonz�lez Bautista No� Alejandro
L�pez Madera Fernanda Jacqueline
Version: 1. 0. 0
Descripcion del programa: E.P. que lea un vector de n elementos y que determine el elemento
mayor del arreglo y su posici�n. 
Fecha de creacion: 10/Marzo/2019
*/

#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[]) {
	
	int n;
	//ENTRADA.
	printf("\nDefina el tama�o del vector: ");
	scanf(" %i", &n);//Tama�o del arreglo.
	//IDENTIFICADORES
	int ElementoMayor=0, i;
	float elementos[n];//ARREGLO.
	
	//PROCESOR FOR.
	for(i=0; i<n; i++){
		//ENTRADA.
		printf("\nIngrese el elemento %i: ", i+1);
		scanf(" %f",&elementos[i]);//Lectura del n�mero
		if(ElementoMayor<elementos[i]){//Compara los elementos para encontrar el mayor.
			ElementoMayor=elementos[i]; 
			
			
			/*se pudo guardar la posicion i del elemento mayor aqu�, 
			ahorarse el ciclo for de abajo e imprimir la posicion 
			solo con un printf fuera de este for*/
		}
	}
	//PROCESO FOR.
	for(i=0; i<n; i++){
		if(elementos[i]==ElementoMayor){//Compara si el elemento es igual que el ElementoMayor para imprimir su posici�n
			//SALIDA(S).
			printf("\nEl elemento mayor se encuentra en la posici�n: %i", i+1); 
		}
	}
	
	getch();
	
	return 0;
}

