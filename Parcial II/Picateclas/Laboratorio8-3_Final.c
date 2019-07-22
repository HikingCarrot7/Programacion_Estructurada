/*
Nombre Equipo: Picateclas
Autores:
Dur�n Matos Juan Jos�
Gonz�lez Bautista No� Alejandro
L�pez Madera Fernanda Jacqueline
Version: 1.1.1
Descripcion: Que lea un vector de 30 elementos que sean enteros y genere e 
imprima  un vector con los elementos negativos y otro vector con los elementos 
positivos.
Fecha de creacion: 6/mar/2019
*/

#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[]) {
	
	int vector[30]; //Aqu� se define el vector de 30 elementos enteros
	int dato; //Representa el valor de cada elemento del vector
	
	/*Uno de los problemas en C es que cuando no se inicializa una variable no
	es nula o vac�a, sino que su valor es impresendible ocasionando datos err�neos
	y tampoco hay manera de comparar si una variable num�rica es nula o no est�
	inicializada, por lo tanto la mejor opci�n es inicializar en cero todos los
	elementos de los arreglos que almacenan los n�meros positivos y negativos
	y luego comparar, si es diferente de cero se ir�n agregando a su respectivo
	arreglo dependiendo del signo
	*/
	int vectorPositivos[30] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int vectorNegativos[30] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	
	/*ENTRADA*/
	for(dato=0; dato<30; dato++){
		printf("Ingrese el elemento %d: ",dato+1);
		scanf(" %d",&vector[dato]);
		
		/*PROCESO*/
		if(vector[dato]>0){
			vectorPositivos[dato] = vector[dato]; //Asigna el valor del vector al vector de n�meros positivos
		}
		else if(vector[dato]<0){
			vectorNegativos[dato] = vector[dato]; //Asigna el valor del vector al vector de n�meros negativos
		}
	}
	
	/*SALIDA*/
	printf("\nEstos son los elementos positivos ingresados: ");
	for(dato=0; dato<30; dato++){
		if(vectorPositivos[dato] != 0){
			printf("\n %d",vectorPositivos[dato]);
		}
	}
	
	printf("\nEstos son los elementos negativos ingresados: ");
	for(dato=0; dato<30; dato++){
		if(vectorNegativos[dato] != 0){
			printf("\n %d",vectorNegativos[dato]);
		}
	}
	
	getch();
	return 0;
}

/*Funciona bien*/

/*Observaciones:
-En este caso que se van a pedir los valores, no es necesario poner los valores iniciales de los vectores
int vectorPositivos[30] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int vectorNegativos[30] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

-No es necesario asignar el valor del vector a una variable para pasarlo a otro vector
if(vector[dato]>0){
valor = vector[dato];
vectorPositivos[dato] = valor;
}
else if(vector[dato]<0){
valor = vector[dato];
vectorNegativos[dato] = valor;
-Se puede asignar el valor directamente
if(vector[dato]>0){
vectorPositivos[dato] = vector[dato];
}
else if(vector[dato]<0){
vectorNegativos[dato] = vector[dato];
}
*/
