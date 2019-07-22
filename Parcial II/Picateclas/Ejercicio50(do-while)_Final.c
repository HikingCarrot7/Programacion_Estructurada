/*
Nombre Equipo: Picateclas
Autores:
Dur�n Matos Juan Jos�
Gonz�lez Bautista No� Alejandro
L�pez Madera Fernanda Jacqueline
Version: 1.1
Descripcion: Lee un vector de 50 elementos y los imprime.
Fecha de creacion: 1/mar/2019
*/

#include <stdio.h>
#include <conio.h>

#define ELEMENTOS 50

int main(int argc, char *argv[]) {
	
	float V[ELEMENTOS];
	int pos = 0;
	
	//ENTRADA Y PROCESO
	/*Se leen c/u de los 50 elementos*/
	do{		
	    printf("Ingrese un n�mero\n");
		scanf(" %f", &V[pos]);
		pos++;
	} while(pos<ELEMENTOS);
	
	printf("\nEstos fueron los n�meros ingresados: ");
	
	pos = 0; //Reinicializa la posici�n del vector a cero
	//SALIDA
	/*Imprime los 50 elementos ya ingresados*/
	do{
	    printf("\n%f",V[pos]);	
		pos++;
	} while(pos<ELEMENTOS);
	
	getch();
	return 0;
}

/*Nada que comentar,esta optimizado al maximo,si acaso el uso de mayusculas en "elementos" 
que requiere activar y desactivar el -bloq mayus- pero de ahi en mas nada*/
//Josue Torres
