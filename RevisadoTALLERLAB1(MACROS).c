#include <stdio.h> 
#include <conio.h>
#include <math.h>

/*I. La posici�n de un robot m�vil se controla por medio de comandos num�ricos introducidos por el teclado 
de acuerdo a la tabla siguiente. Inicialmente el robot se encuentra en la posici�n (x=0, y=0). 
E.P. que determine e imprima la posici�n del robot despu�s de N movimientos. 
El n�mero de movimientos totales se debe solicitar al inicio*/ 

//declaracion de macro 
#define para(x) for (i=1;i<=n;i++) //macro para el for
#define xmas1 x=x+1; //macro par para aumento 
#define xmenos1 x=x-1; //macro para decremento 
#define ymas1 y=y+1; //macro par para aumento 
#define ymenos1 y=y-1; //macro para decremento 

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
	para (x)
	{
		printf("\n Dime el movimiento %d del robot : ", i ) ;
		scanf("%d",&comando);
		
		if (comando==6){
			xmas1
		
			if (comando==4) {
				xmenos1
			
					if (comando==8){
						ymas1
					
						if (comando==2) 
							ymenos1
					}
			}
		}
			
	}
	
	//salida
	printf("\n El robot se encuentra en la posicion x=%.1f ", x ) ;
	printf("\n El robot se encuentra en la posicion y=%.1f ", y ) ;
	
	getch () ;
	return 0; 	
	
	
	
}

/*El programa NO funciona correctamente. Las condicionales tienen que estar anidados. Buen uso de las macros
Falta informaci�n en el encabezado (nombres, equipo, fecha, versi�n)
Recomendaci�n: Es muy dif�cil entender bien como funcionan las condicionales escritas, no tienen puesto de manera correcta las llaves({})

Revis�: Senaida Norely Chan Chan

Equipo: SacaChispas

Fecha 19/02/2019 */
