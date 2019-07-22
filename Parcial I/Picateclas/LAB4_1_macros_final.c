/*Nombre Equipo: Picateclas
Autores:
Dur�n Matos Juan Jos�
Gonz�lez Bautista No� Alejandro
L�pez Madera Fernanda Jacqueline
Version: 1.1b
La posici�n de un robot m�vil se controla por medio de comandos num�ricos 
introducidos por el teclado de acuerdo a la tabla siguiente. Inicialmente el 
robot se encuentra en la posici�n (x=0, y=0). E.P. que determine e imprima la 
posici�n del robot despu�s de N movimientos. El n�mero de movimientos totales se
debe solicitar al inicio.
Fecha de creacion: 16/feb/2019
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//Aqui se declaran mediante macros los operadores de movimiento del robot
#define sumX(x) x+1 //Movimiento hacia la derecha 
#define resX(x) x-1 //Movimiento hacia la izquierda
#define sumY(y) y+1 //Movimiento hacia adelante
#define resY(y) y-1 //Movimiento hacia atras
#define Error "\nMovimiento inv�lido, el robot no se ha movido" //Ingresa un movimiento que no esta disponible

int main(int argc, char *argv[]) {
	int x = 0;
	int y = 0;
	
	int direccion;
	int NoMovimientos;
	
	/*ENTRADA*/
	printf("Ingrese el n�mero de movimientos\n");
	scanf("%d", &NoMovimientos);
	/*PROCESO*/
	for(int i=0; i<NoMovimientos; i++){
		printf("\nDirecci�n actual P(%d, %d)",x,y);
		printf("\nSeleccione una direcci�n: ");
		scanf("%d", &direccion);
		
		if(direccion==2){
			y = resY(y);
		}
		else if(direccion==8){
			y = sumY(y);
		}
		else if(direccion==4){
			x = resX(x);
		}
		else if(direccion==6){
			x = sumX(x);
		}
		else{
			printf(Error);
		}
		
		system("cls"); //Limpia el contenido anterior de la pantalla
	}
	/*SALIDA*/
	printf("\nTe quedaste en las coord (%d,%d)", x,y);
	getch();
	return 0;
}

/* Revisi�n.
-No compila.

revis�: Programadores empedernidos */

/*Juan Duran observ�: Que raro, he ejecutado el c�digo en 2 compiladores (zinjai
y C4droid) y me compilan correctamente, es posible que el compilador que utilizan
tenga problemas con ciertas librerias
*/
