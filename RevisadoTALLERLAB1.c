#include <stdio.h> 
#include <conio.h>
#include <math.h>

/*I. La posici�n de un robot m�vil se controla por medio de comandos num�ricos introducidos por el teclado 
de acuerdo a la tabla siguiente. Inicialmente el robot se encuentra en la posici�n (x=0, y=0). 
E.P. que determine e imprima la posici�n del robot despu�s de N movimientos. 
El n�mero de movimientos totales se debe solicitar al inicio*/ 


int main ()
{
	//declaracion de variables 
	int i; 
	int n;
	float x;
	float y;
	int comando;
	i=0;
	
	//Entradas 
		printf("\n Dime el n�mero de movimientos totales de robot : " ) ;
		scanf("%d",&n);
		fflush (stdin) ;
		
	//Proceso 
	for (i=1;i<=n;i++)
	{
		printf("\n Dime el movimiento %d del robot : ", i ) ;
		scanf("%d",&comando);
		
		if (comando==6){
			x=x+1;
		
			if (comando==4) {
				x=x-1;
			
					if (comando==8){
						y=y+1; 
					
						if (comando==2) 
							y=y-1;
					}
			}
		}
			
	}
	
	//salida
	printf("\n El robot se encuentra en la posicion x = %.1f ", x ) ;
	printf("\n El robot se encuentra en la posicion y = %.1f ", y ) ;
	
	getch () ;
	return 0 ; 
	
	
}

/*El programa NO funciona correctamente. Las condicionales tienen que estar anidados
Falta informaci�n en el encabezado (nombres, equipo, fecha, versi�n)
Recomendaci�n: Es muy dif�cil entender bien como funcionan las condicionales escritas, no tienen puesto de manera correcta las llaves({})

Revis�: Senaida Norely Chan Chan

Equipo: SacaChispas

Fecha 19/02/2019 */

