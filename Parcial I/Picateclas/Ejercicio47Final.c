/*Nombre Equipo: Picateclas
Autores:
Dur�n Matos Juan Jos�
Gonz�lez Bautista No� Alejandro
L�pez Madera Fernanda Jacqueline
Version: 1. 0. 0
Descripcion del programa: E.P. que lea las calificaciones de 50 alumnos y que determine e
imprima cuantos tienen calificaci�n mayor al promedio de grupo. 
Fecha de creacion: 17/feb/2019
*/
#include <stdio.h>

int main(int argc, char *argv[]) {
	//VARIABLES.
	int i, j, CMP=0;
	float calificacion, SumCal=0, PG;
	//PROCESO.
	for(i=0; i<50; i++){//INICIAMOS EL CICLO FOR.
		do{
			printf("\nIngresa la calificaci�n del alumno %i: ", (i+1));//ENTRADA
			scanf("%f", &calificacion);//LEEMOS LA CALIFICACI�N.
			if(calificacion<0){
				printf("Calificaci�n inv�lida.");
			}
		} while(calificacion<0);
		SumCal=SumCal+calificacion;//SUMADOR DE CALIFICACIONES
	}
	
	PG=SumCal/50;//PROMEDIO GRUPAL.
	//PROCESO.
	for(j=0; j<50; j++){//INCIIAMOS CICLO FOR.
		do{
			printf("\nIngresa la calificaci�n del alumno %i: ", (j+1));//ENTRADA
			scanf("%f", &calificacion);//LEEMOS LA CALIFICACI�N.
			if(calificacion<0){
				printf("Calificaci�n inv�lida.");
			}
		} while(calificacion<0);
		if(calificacion>PG){//SE VERIFICA QUE LA CALIFICACI�N SEA MAYOR A LA GRUPAL.
			CMP++;//AUMENTA CONTADOR DE MAYORES AL PROMEDIO GRUPAL.
		}
	}
	//SALIDA.
	printf("\nLa cantidad de alumnos con un promedio mayor al del grupo son: %i", CMP);

	return 0;
}


/* Revisi�n: 
-Hay un loop en el segundo proceso, en vez de aumentar la variable "j", se aumenta la "i" (lin 33)
-En las lineas 20 y 31, para eivtar el (i+1) se pudo haber iniciado el contador en 1 y poner un mayor e igual a 50.
-Los nombres de las variables pueden ser mejores.
-No imprime los car�cteres especiales (acentos).

Revis�: Programadores Empedernidos.
*/
//Si imprime los caracteres especiales, el �nico error que encontr� fue en la l�nea 33 donde efectivamentamente aumentaba "i" en vez de "j".
