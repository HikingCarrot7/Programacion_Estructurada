/*47. E.P. que lea las calificaciones de 50 alumnos y que determine e
imprima cuantos tienen calificaci�n mayor al promedio de grupo. */
#include <stdio.h>
#define para(x) for (i=1;i<=100;i++)
#define Promedio PromCalif=SumCalif/100;
#define Sumatoria SumCalif=SumCalif+calif;
#define Mayores if (calif>PromCalif){ConMP=ConMP+1;}



int main(int argc, char *argv[]) {
	float calif, SumCalif, PromCalif;
	int	i,ConMP;
	SumCalif=0;
	ConMP=0;
	//Entrada
	para(x){
		printf("\n �Cu�l es la calificaci�n del alumno %d ?: ",i);	
		scanf("%f",&calif);
		Sumatoria //Proceso
	};
	Promedio
	printf("\n El promedio grupal fue: %f", PromCalif);
	para(x){
		printf("\n �Nuevamente necesitamos la calificaci�n del alumno %d?: ",i);	
		scanf("%f", &calif);
		Mayores
	};
	//Salida
	printf("\n La cantidad de alumnos con promedio mayor fue de: %d", ConMP);
	return 0;
}

/*El programa funciona correctamente pero el ciclo debe ser para 50 alumnos, no para 100. Buen uso de los macros
Falta informaci�n en el encabezado (nombres, equipo, fecha, versi�n)
Recomendaci�n: Separar un poco el c�digo para que sea m�s f�cil de entenderlo

Revis�: Javier Alejandro Chim Cem�

Equipo: SacaChispas

Fecha 19/02/2019 */
